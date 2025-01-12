/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sendCommunicationDroneDataInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\sendCommunicationDroneDataInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "sendCommunicationDroneDataInterface.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_sendCommunicationDroneDataInterface_sendCommunicationDroneData_SERIALIZE \
    aomsmethod->addAttribute("temprature", x2String(temprature));\
    aomsmethod->addAttribute("humidity", x2String(humidity));\
    aomsmethod->addAttribute("windSpeed", x2String(windSpeed));\
    aomsmethod->addAttribute("windDirection", x2String(windDirection));\
    aomsmethod->addAttribute("precipitation", x2String(precipitation));\
    aomsmethod->addAttribute("area", x2String(area));\
    aomsmethod->addAttribute("precipitationHr", x2String(precipitationHr));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_sendCommunicationDroneDataInterface_sendCommunicationDroneDataInterface_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class sendCommunicationDroneDataInterface
sendCommunicationDroneDataInterface::sendCommunicationDroneDataInterface(void) {
    NOTIFY_CONSTRUCTOR(sendCommunicationDroneDataInterface, sendCommunicationDroneDataInterface(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_sendCommunicationDroneDataInterface_sendCommunicationDroneDataInterface_SERIALIZE);
}

sendCommunicationDroneDataInterface::~sendCommunicationDroneDataInterface(void) {
    NOTIFY_DESTRUCTOR(~sendCommunicationDroneDataInterface, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(sendCommunicationDroneDataInterface, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, OMAnimatedsendCommunicationDroneDataInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sendCommunicationDroneDataInterface.cpp
*********************************************************************/
