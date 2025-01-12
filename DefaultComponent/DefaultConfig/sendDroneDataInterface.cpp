/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sendDroneDataInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\sendDroneDataInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "sendDroneDataInterface.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_sendDroneDataInterface_sendDroneData_SERIALIZE \
    aomsmethod->addAttribute("temprature", x2String(temprature));\
    aomsmethod->addAttribute("humidity", x2String(humidity));\
    aomsmethod->addAttribute("windSpeed", x2String(windSpeed));\
    aomsmethod->addAttribute("windDirection", x2String(windDirection));\
    aomsmethod->addAttribute("precipitation", x2String(precipitation));\
    aomsmethod->addAttribute("area", x2String(area));\
    aomsmethod->addAttribute("precipitationHr", x2String(precipitationHr));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_sendDroneDataInterface_sendDroneDataInterface_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class sendDroneDataInterface
sendDroneDataInterface::sendDroneDataInterface(void) {
    NOTIFY_CONSTRUCTOR(sendDroneDataInterface, sendDroneDataInterface(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_sendDroneDataInterface_sendDroneDataInterface_SERIALIZE);
}

sendDroneDataInterface::~sendDroneDataInterface(void) {
    NOTIFY_DESTRUCTOR(~sendDroneDataInterface, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(sendDroneDataInterface, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, OMAnimatedsendDroneDataInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sendDroneDataInterface.cpp
*********************************************************************/
