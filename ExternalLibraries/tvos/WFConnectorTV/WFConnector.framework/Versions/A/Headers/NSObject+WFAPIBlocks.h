//
//  NSObject+WFAPIBlocks.h
//  WFConnector
//
//  Created by Chris Uroda on 2014-04-17
//  Copyright (c) 2014 Wahoo Fitness. All rights reserved.
//


/**
 * Implement WFAPIBlocksTracking to enable support for wfapi_cancelAllBlocks method
 */
@protocol WFAPIBlocksTracking <NSObject>
- (void)wfAPIBlocksTrackingDidAddPendingBlock:(id)blockReference;
- (void)wfAPIBlocksTrackingDidRemovePendingBlock:(id)blockReference;

/**
 * return an autoreleased object or nil
 */
- (NSSet*)wfAPIBlocksTrackingGetPendingBlocks;
@end


/**
 * Adds convenience methods to NSObject to perform blocks after delays.  
 * This category adds provisions to allow cancelling of pending blocks.
 */
@interface NSObject (WFAPIBlocks)

/**
 * Perform a block (with zero arguments) after a delay
 * @return A handle to the pending block is returned.
 */
- (id)wfapi_performBlock:(void (^)(void))block afterDelay:(NSTimeInterval)delay;

/**
 * Perform a block (with one id argument) after a delay
 * @return A handle to the pending block is returned.
 */
- (id)wfapi_performBlock:(void (^)(id arg))block withObject:(id)anObject afterDelay:(NSTimeInterval)delay;

/**
 * Cancel a pending block
 * @param block The handle of the pending block to cancel.
 */
- (void)wfapi_cancelBlock:(id)block;

/**
 * This method requires the self to be conforming to WFAPIBlocksTracking protocol
 */
- (void)wfapi_cancelAllBlocks;

@end