/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sendCommunicationSatelliteDataInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\sendCommunicationSatelliteDataInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "sendCommunicationSatelliteDataInterface.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_sendCommunicationSatelliteDataInterface_sendCommunicationSatelliteData_SERIALIZE \
    aomsmethod->addAttribute("lat", x2String(lat));\
    aomsmethod->addAttribute("lng", x2String(lng));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_sendCommunicationSatelliteDataInterface_sendCommunicationSatelliteDataInterface_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class sendCommunicationSatelliteDataInterface
sendCommunicationSatelliteDataInterface::sendCommunicationSatelliteDataInterface(void) {
    NOTIFY_CONSTRUCTOR(sendCommunicationSatelliteDataInterface, sendCommunicationSatelliteDataInterface(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_sendCommunicationSatelliteDataInterface_sendCommunicationSatelliteDataInterface_SERIALIZE);
}

sendCommunicationSatelliteDataInterface::~sendCommunicationSatelliteDataInterface(void) {
    NOTIFY_DESTRUCTOR(~sendCommunicationSatelliteDataInterface, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(sendCommunicationSatelliteDataInterface, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, OMAnimatedsendCommunicationSatelliteDataInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sendCommunicationSatelliteDataInterface.cpp
*********************************************************************/
