Pod::Spec.new do |s|
  s.name         = "WFConnectorTV"
  s.version      = "1.0"
  s.summary      = "Common library classes"
  s.description  = "Framework for ios and tvos applications"
  s.homepage     = "http://confluence/BeachbodyOnDemandTV--PLACEHOLDER"
  s.license      = 'Proprietary'  
  s.authors      = { "Beachbody Team" => "devicesbuildagent@beachbody.com"}
  s.source       = { :git => 'git@github.com:beachbodydigital/devices-bod-pods.git' }
  s.platform     = :tvos, '9.0'
  s.source_files = './**/*.{h,m,a}'
  s.vendored_frameworks = 'WFConnector.framework'
  s.requires_arc = true
end
