/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WMFSystemSatelliteDataInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WMFSystemSatelliteDataInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "WMFSystemSatelliteDataInterface.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WMFSystemSatelliteDataInterface_sendToWMFSatelliteData_SERIALIZE \
    aomsmethod->addAttribute("lat", x2String(lat));\
    aomsmethod->addAttribute("lng", x2String(lng));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WMFSystemSatelliteDataInterface_WMFSystemSatelliteDataInterface_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class WMFSystemSatelliteDataInterface
WMFSystemSatelliteDataInterface::WMFSystemSatelliteDataInterface(void) {
    NOTIFY_CONSTRUCTOR(WMFSystemSatelliteDataInterface, WMFSystemSatelliteDataInterface(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WMFSystemSatelliteDataInterface_WMFSystemSatelliteDataInterface_SERIALIZE);
}

WMFSystemSatelliteDataInterface::~WMFSystemSatelliteDataInterface(void) {
    NOTIFY_DESTRUCTOR(~WMFSystemSatelliteDataInterface, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(WMFSystemSatelliteDataInterface, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, OMAnimatedWMFSystemSatelliteDataInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WMFSystemSatelliteDataInterface.cpp
*********************************************************************/
