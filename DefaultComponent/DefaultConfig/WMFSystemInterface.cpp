/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WMFSystemInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WMFSystemInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "WMFSystemInterface.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WMFSystemInterface_SendToWMFStormAndWeatherData_SERIALIZE \
    aomsmethod->addAttribute("temprature", x2String(temprature));\
    aomsmethod->addAttribute("humidity", x2String(humidity));\
    aomsmethod->addAttribute("windSpeed", x2String(windSpeed));\
    aomsmethod->addAttribute("windDirection", x2String(windDirection));\
    aomsmethod->addAttribute("precipitation", x2String(precipitation));\
    aomsmethod->addAttribute("area", x2String(area));\
    aomsmethod->addAttribute("precipitationHr", x2String(precipitationHr));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WMFSystemInterface_WMFSystemInterface_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class WMFSystemInterface
WMFSystemInterface::WMFSystemInterface(void) {
    NOTIFY_CONSTRUCTOR(WMFSystemInterface, WMFSystemInterface(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WMFSystemInterface_WMFSystemInterface_SERIALIZE);
}

WMFSystemInterface::~WMFSystemInterface(void) {
    NOTIFY_DESTRUCTOR(~WMFSystemInterface, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(WMFSystemInterface, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, OMAnimatedWMFSystemInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WMFSystemInterface.cpp
*********************************************************************/
