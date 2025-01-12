/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DroneInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DroneInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DroneInterface.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_DroneInterface_sendDroneData_SERIALIZE \
    aomsmethod->addAttribute("temprature", x2String(temprature));\
    aomsmethod->addAttribute("humidity", x2String(humidity));\
    aomsmethod->addAttribute("windSpeed", x2String(windSpeed));\
    aomsmethod->addAttribute("windDirection", x2String(windDirection));\
    aomsmethod->addAttribute("precipitation", x2String(precipitation));\
    aomsmethod->addAttribute("area", x2String(area));\
    aomsmethod->addAttribute("precipitationHr", x2String(precipitationHr));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_DroneInterface_DroneInterface_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class DroneInterface
//#[ ignore
DroneInterface::droneInterfacePort_C::droneInterfacePort_C(void) : sendDroneDataInterface(), _p_(0), itsSendDroneDataInterface(NULL) {
}

DroneInterface::droneInterfacePort_C::~droneInterfacePort_C(void) {
    cleanUpRelations();
}

void DroneInterface::droneInterfacePort_C::connectDroneInterface(DroneInterface* part) {
    setItsSendDroneDataInterface(part);
    
}

sendDroneDataInterface* DroneInterface::droneInterfacePort_C::getItsSendDroneDataInterface(void) {
    return this;
}

void DroneInterface::droneInterfacePort_C::sendDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) {
    
    if (itsSendDroneDataInterface != NULL) {
        itsSendDroneDataInterface->sendDroneData(temprature,humidity,windSpeed,windDirection,precipitation,area,precipitationHr);
    }
    
}

void DroneInterface::droneInterfacePort_C::setItsSendDroneDataInterface(sendDroneDataInterface* const p_sendDroneDataInterface) {
    itsSendDroneDataInterface = p_sendDroneDataInterface;
}

void DroneInterface::droneInterfacePort_C::cleanUpRelations(void) {
    if(itsSendDroneDataInterface != NULL)
        {
            itsSendDroneDataInterface = NULL;
        }
}

DroneInterface::sendCommunicationDronePort_C::sendCommunicationDronePort_C(void) : sendCommunicationDroneDataInterface(), _p_(0), itsSendCommunicationDroneDataInterface(NULL) {
}

DroneInterface::sendCommunicationDronePort_C::~sendCommunicationDronePort_C(void) {
    cleanUpRelations();
}

sendCommunicationDroneDataInterface* DroneInterface::sendCommunicationDronePort_C::getItsSendCommunicationDroneDataInterface(void) {
    return this;
}

sendCommunicationDroneDataInterface* DroneInterface::sendCommunicationDronePort_C::getOutBound(void) {
    return this;
}

void DroneInterface::sendCommunicationDronePort_C::sendCommunicationDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) {
    
    if (itsSendCommunicationDroneDataInterface != NULL) {
        itsSendCommunicationDroneDataInterface->sendCommunicationDroneData(temprature,humidity,windSpeed,windDirection,precipitation,area,precipitationHr);
    }
    
}

void DroneInterface::sendCommunicationDronePort_C::setItsSendCommunicationDroneDataInterface(sendCommunicationDroneDataInterface* const p_sendCommunicationDroneDataInterface) {
    itsSendCommunicationDroneDataInterface = p_sendCommunicationDroneDataInterface;
}

void DroneInterface::sendCommunicationDronePort_C::cleanUpRelations(void) {
    if(itsSendCommunicationDroneDataInterface != NULL)
        {
            itsSendCommunicationDroneDataInterface = NULL;
        }
}
//#]

DroneInterface::DroneInterface(void) : sendDroneDataInterface() {
    NOTIFY_CONSTRUCTOR(DroneInterface, DroneInterface(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_DroneInterface_DroneInterface_SERIALIZE);
    initRelations();
}

DroneInterface::~DroneInterface(void) {
    NOTIFY_DESTRUCTOR(~DroneInterface, false);
}

void DroneInterface::sendDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) {
    NOTIFY_OPERATION(sendDroneData, sendDroneData(double,double,double,double,double,double,double), 7, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_DroneInterface_sendDroneData_SERIALIZE);
    //#[ operation sendDroneData(double,double,double,double,double,double,double)
    std::cout<<"Receiving DroneSensors Data ..."<<std::endl;
    OUT_PORT(sendCommunicationDronePort)->sendCommunicationDroneData(temprature, humidity, windSpeed, windDirection, precipitation, area,precipitationHr);
    //#]
}

DroneInterface::droneInterfacePort_C* DroneInterface::getDroneInterfacePort(void) const {
    return (DroneInterface::droneInterfacePort_C*) &droneInterfacePort;
}

DroneInterface::droneInterfacePort_C* DroneInterface::get_droneInterfacePort(void) const {
    return (DroneInterface::droneInterfacePort_C*) &droneInterfacePort;
}

DroneInterface::sendCommunicationDronePort_C* DroneInterface::getSendCommunicationDronePort(void) const {
    return (DroneInterface::sendCommunicationDronePort_C*) &sendCommunicationDronePort;
}

DroneInterface::sendCommunicationDronePort_C* DroneInterface::get_sendCommunicationDronePort(void) const {
    return (DroneInterface::sendCommunicationDronePort_C*) &sendCommunicationDronePort;
}

void DroneInterface::initRelations(void) {
    if (get_droneInterfacePort() != NULL) {
        get_droneInterfacePort()->connectDroneInterface(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDroneInterface::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedsendDroneDataInterface::serializeAttributes(aomsAttributes);
}

void OMAnimatedDroneInterface::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedsendDroneDataInterface::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(DroneInterface, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, sendDroneDataInterface, OMAnimatedsendDroneDataInterface, OMAnimatedDroneInterface)

OMINIT_SUPERCLASS(sendDroneDataInterface, OMAnimatedsendDroneDataInterface)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DroneInterface.cpp
*********************************************************************/
