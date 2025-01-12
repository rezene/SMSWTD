/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sendSatelliteDataInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\sendSatelliteDataInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "sendSatelliteDataInterface.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_sendSatelliteDataInterface_sendSatelliteData_SERIALIZE \
    aomsmethod->addAttribute("lat", x2String(lat));\
    aomsmethod->addAttribute("lng", x2String(lng));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_sendSatelliteDataInterface_sendSatelliteDataInterface_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class sendSatelliteDataInterface
sendSatelliteDataInterface::sendSatelliteDataInterface(void) {
    NOTIFY_CONSTRUCTOR(sendSatelliteDataInterface, sendSatelliteDataInterface(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_sendSatelliteDataInterface_sendSatelliteDataInterface_SERIALIZE);
}

sendSatelliteDataInterface::~sendSatelliteDataInterface(void) {
    NOTIFY_DESTRUCTOR(~sendSatelliteDataInterface, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(sendSatelliteDataInterface, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, OMAnimatedsendSatelliteDataInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sendSatelliteDataInterface.cpp
*********************************************************************/
