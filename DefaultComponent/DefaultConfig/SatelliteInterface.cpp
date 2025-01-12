/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SatelliteInterface.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_SatelliteInterface_sendSatelliteData_SERIALIZE \
    aomsmethod->addAttribute("lat", x2String(lat));\
    aomsmethod->addAttribute("lng", x2String(lng));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_SatelliteInterface_SatelliteInterface_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class SatelliteInterface
//#[ ignore
SatelliteInterface::satelliteInterfacePort_C::satelliteInterfacePort_C(void) : sendSatelliteDataInterface(), _p_(0), itsSendSatelliteDataInterface(NULL) {
}

SatelliteInterface::satelliteInterfacePort_C::~satelliteInterfacePort_C(void) {
    cleanUpRelations();
}

void SatelliteInterface::satelliteInterfacePort_C::connectSatelliteInterface(SatelliteInterface* part) {
    setItsSendSatelliteDataInterface(part);
    
}

sendSatelliteDataInterface* SatelliteInterface::satelliteInterfacePort_C::getItsSendSatelliteDataInterface(void) {
    return this;
}

void SatelliteInterface::satelliteInterfacePort_C::sendSatelliteData(double lat, double lng) {
    
    if (itsSendSatelliteDataInterface != NULL) {
        itsSendSatelliteDataInterface->sendSatelliteData(lat,lng);
    }
    
}

void SatelliteInterface::satelliteInterfacePort_C::setItsSendSatelliteDataInterface(sendSatelliteDataInterface* const p_sendSatelliteDataInterface) {
    itsSendSatelliteDataInterface = p_sendSatelliteDataInterface;
}

void SatelliteInterface::satelliteInterfacePort_C::cleanUpRelations(void) {
    if(itsSendSatelliteDataInterface != NULL)
        {
            itsSendSatelliteDataInterface = NULL;
        }
}

SatelliteInterface::sendCommunicationSatelliteDataPort_C::sendCommunicationSatelliteDataPort_C(void) : sendCommunicationSatelliteDataInterface(), _p_(0), itsSendCommunicationSatelliteDataInterface(NULL) {
}

SatelliteInterface::sendCommunicationSatelliteDataPort_C::~sendCommunicationSatelliteDataPort_C(void) {
    cleanUpRelations();
}

sendCommunicationSatelliteDataInterface* SatelliteInterface::sendCommunicationSatelliteDataPort_C::getItsSendCommunicationSatelliteDataInterface(void) {
    return this;
}

sendCommunicationSatelliteDataInterface* SatelliteInterface::sendCommunicationSatelliteDataPort_C::getOutBound(void) {
    return this;
}

void SatelliteInterface::sendCommunicationSatelliteDataPort_C::sendCommunicationSatelliteData(double lat, double lng) {
    
    if (itsSendCommunicationSatelliteDataInterface != NULL) {
        itsSendCommunicationSatelliteDataInterface->sendCommunicationSatelliteData(lat,lng);
    }
    
}

void SatelliteInterface::sendCommunicationSatelliteDataPort_C::setItsSendCommunicationSatelliteDataInterface(sendCommunicationSatelliteDataInterface* const p_sendCommunicationSatelliteDataInterface) {
    itsSendCommunicationSatelliteDataInterface = p_sendCommunicationSatelliteDataInterface;
}

void SatelliteInterface::sendCommunicationSatelliteDataPort_C::cleanUpRelations(void) {
    if(itsSendCommunicationSatelliteDataInterface != NULL)
        {
            itsSendCommunicationSatelliteDataInterface = NULL;
        }
}
//#]

SatelliteInterface::SatelliteInterface(void) : sendSatelliteDataInterface() {
    NOTIFY_CONSTRUCTOR(SatelliteInterface, SatelliteInterface(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_SatelliteInterface_SatelliteInterface_SERIALIZE);
    initRelations();
}

SatelliteInterface::~SatelliteInterface(void) {
    NOTIFY_DESTRUCTOR(~SatelliteInterface, false);
}

void SatelliteInterface::sendSatelliteData(double lat, double lng) {
    NOTIFY_OPERATION(sendSatelliteData, sendSatelliteData(double,double), 2, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_SatelliteInterface_sendSatelliteData_SERIALIZE);
    //#[ operation sendSatelliteData(double,double)
    std::cout<<"Receiving SatelliteSensors Data ..."<<std::endl;
    OUT_PORT(sendCommunicationSatelliteDataPort)->sendCommunicationSatelliteData(lat,lng);
    
    //#]
}

SatelliteInterface::satelliteInterfacePort_C* SatelliteInterface::getSatelliteInterfacePort(void) const {
    return (SatelliteInterface::satelliteInterfacePort_C*) &satelliteInterfacePort;
}

SatelliteInterface::satelliteInterfacePort_C* SatelliteInterface::get_satelliteInterfacePort(void) const {
    return (SatelliteInterface::satelliteInterfacePort_C*) &satelliteInterfacePort;
}

SatelliteInterface::sendCommunicationSatelliteDataPort_C* SatelliteInterface::getSendCommunicationSatelliteDataPort(void) const {
    return (SatelliteInterface::sendCommunicationSatelliteDataPort_C*) &sendCommunicationSatelliteDataPort;
}

SatelliteInterface::sendCommunicationSatelliteDataPort_C* SatelliteInterface::get_sendCommunicationSatelliteDataPort(void) const {
    return (SatelliteInterface::sendCommunicationSatelliteDataPort_C*) &sendCommunicationSatelliteDataPort;
}

void SatelliteInterface::initRelations(void) {
    if (get_satelliteInterfacePort() != NULL) {
        get_satelliteInterfacePort()->connectSatelliteInterface(this);
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSatelliteInterface::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedsendSatelliteDataInterface::serializeAttributes(aomsAttributes);
}

void OMAnimatedSatelliteInterface::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedsendSatelliteDataInterface::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(SatelliteInterface, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, sendSatelliteDataInterface, OMAnimatedsendSatelliteDataInterface, OMAnimatedSatelliteInterface)

OMINIT_SUPERCLASS(sendSatelliteDataInterface, OMAnimatedsendSatelliteDataInterface)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteInterface.cpp
*********************************************************************/
