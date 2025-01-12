/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\CommunicationInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CommunicationInterface.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_CommunicationInterface_sendDroneData_SERIALIZE \
    aomsmethod->addAttribute("temprature", x2String(temprature));\
    aomsmethod->addAttribute("humidity", x2String(humidity));\
    aomsmethod->addAttribute("windSpeed", x2String(windSpeed));\
    aomsmethod->addAttribute("windDirection", x2String(windDirection));\
    aomsmethod->addAttribute("precipitation", x2String(precipitation));\
    aomsmethod->addAttribute("area", x2String(area));\
    aomsmethod->addAttribute("precipitationHr", x2String(precipitationHr));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_CommunicationInterface_sendSatelliteData_SERIALIZE \
    aomsmethod->addAttribute("lat", x2String(lat));\
    aomsmethod->addAttribute("lng", x2String(lng));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_CommunicationInterface_CommunicationInterface_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class CommunicationInterface
//#[ ignore
CommunicationInterface::communicationInterfaceExternalPort_C::communicationInterfaceExternalPort_C(void) : sendSatelliteDataInterface(), sendDroneDataInterface(), _p_(0), itsSendDroneDataInterface(NULL), itsSendSatelliteDataInterface(NULL) {
}

CommunicationInterface::communicationInterfaceExternalPort_C::~communicationInterfaceExternalPort_C(void) {
    cleanUpRelations();
}

sendDroneDataInterface* CommunicationInterface::communicationInterfaceExternalPort_C::getItsSendDroneDataInterface(void) {
    return this;
}

sendSatelliteDataInterface* CommunicationInterface::communicationInterfaceExternalPort_C::getItsSendSatelliteDataInterface(void) {
    return this;
}

void CommunicationInterface::communicationInterfaceExternalPort_C::sendDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) {
    
    if (itsSendDroneDataInterface != NULL) {
        itsSendDroneDataInterface->sendDroneData(temprature,humidity,windSpeed,windDirection,precipitation,area,precipitationHr);
    }
    
}

void CommunicationInterface::communicationInterfaceExternalPort_C::sendSatelliteData(double lat, double lng) {
    
    if (itsSendSatelliteDataInterface != NULL) {
        itsSendSatelliteDataInterface->sendSatelliteData(lat,lng);
    }
    
}

void CommunicationInterface::communicationInterfaceExternalPort_C::setItsSendDroneDataInterface(sendDroneDataInterface* const p_sendDroneDataInterface) {
    itsSendDroneDataInterface = p_sendDroneDataInterface;
}

void CommunicationInterface::communicationInterfaceExternalPort_C::setItsSendSatelliteDataInterface(sendSatelliteDataInterface* const p_sendSatelliteDataInterface) {
    itsSendSatelliteDataInterface = p_sendSatelliteDataInterface;
}

void CommunicationInterface::communicationInterfaceExternalPort_C::cleanUpRelations(void) {
    if(itsSendDroneDataInterface != NULL)
        {
            itsSendDroneDataInterface = NULL;
        }
    if(itsSendSatelliteDataInterface != NULL)
        {
            itsSendSatelliteDataInterface = NULL;
        }
}

CommunicationInterface::communicationInterfaceInternalPort_C::communicationInterfaceInternalPort_C(void) : sendCommunicationSatelliteDataInterface(), sendCommunicationDroneDataInterface(), _p_(0), itsSendCommunicationDroneDataInterface(NULL), itsSendCommunicationSatelliteDataInterface(NULL) {
}

CommunicationInterface::communicationInterfaceInternalPort_C::~communicationInterfaceInternalPort_C(void) {
    cleanUpRelations();
}

sendCommunicationDroneDataInterface* CommunicationInterface::communicationInterfaceInternalPort_C::getItsSendCommunicationDroneDataInterface(void) {
    return this;
}

sendCommunicationSatelliteDataInterface* CommunicationInterface::communicationInterfaceInternalPort_C::getItsSendCommunicationSatelliteDataInterface(void) {
    return this;
}

CommunicationInterface::communicationInterfaceInternalPort_C* CommunicationInterface::communicationInterfaceInternalPort_C::getOutBound(void) {
    return this;
}

void CommunicationInterface::communicationInterfaceInternalPort_C::sendCommunicationDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) {
    
    if (itsSendCommunicationDroneDataInterface != NULL) {
        itsSendCommunicationDroneDataInterface->sendCommunicationDroneData(temprature,humidity,windSpeed,windDirection,precipitation,area,precipitationHr);
    }
    
}

void CommunicationInterface::communicationInterfaceInternalPort_C::sendCommunicationSatelliteData(double lat, double lng) {
    
    if (itsSendCommunicationSatelliteDataInterface != NULL) {
        itsSendCommunicationSatelliteDataInterface->sendCommunicationSatelliteData(lat,lng);
    }
    
}

void CommunicationInterface::communicationInterfaceInternalPort_C::setItsSendCommunicationDroneDataInterface(sendCommunicationDroneDataInterface* const p_sendCommunicationDroneDataInterface) {
    itsSendCommunicationDroneDataInterface = p_sendCommunicationDroneDataInterface;
}

void CommunicationInterface::communicationInterfaceInternalPort_C::setItsSendCommunicationSatelliteDataInterface(sendCommunicationSatelliteDataInterface* const p_sendCommunicationSatelliteDataInterface) {
    itsSendCommunicationSatelliteDataInterface = p_sendCommunicationSatelliteDataInterface;
}

void CommunicationInterface::communicationInterfaceInternalPort_C::cleanUpRelations(void) {
    if(itsSendCommunicationDroneDataInterface != NULL)
        {
            itsSendCommunicationDroneDataInterface = NULL;
        }
    if(itsSendCommunicationSatelliteDataInterface != NULL)
        {
            itsSendCommunicationSatelliteDataInterface = NULL;
        }
}
//#]

CommunicationInterface::CommunicationInterface(void) : sendDroneDataInterface(), sendSatelliteDataInterface() {
    NOTIFY_CONSTRUCTOR(CommunicationInterface, CommunicationInterface(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_CommunicationInterface_CommunicationInterface_SERIALIZE);
    initRelations();
}

CommunicationInterface::~CommunicationInterface(void) {
    NOTIFY_DESTRUCTOR(~CommunicationInterface, false);
}

void CommunicationInterface::sendDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) {
    NOTIFY_OPERATION(sendDroneData, sendDroneData(double,double,double,double,double,double,double), 7, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_CommunicationInterface_sendDroneData_SERIALIZE);
    //#[ operation sendDroneData(double,double,double,double,double,double,double)
    std::cout<<"Server receiving drone data .."<<std::endl;
    //#]
}

void CommunicationInterface::sendSatelliteData(double lat, double lng) {
    NOTIFY_OPERATION(sendSatelliteData, sendSatelliteData(double,double), 2, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_CommunicationInterface_sendSatelliteData_SERIALIZE);
    //#[ operation sendSatelliteData(double,double)
    std::cout<<"Receving SatelliteSensors Data";
    //#]
}

CommunicationInterface::communicationInterfaceExternalPort_C* CommunicationInterface::getCommunicationInterfaceExternalPort(void) const {
    return (CommunicationInterface::communicationInterfaceExternalPort_C*) &communicationInterfaceExternalPort;
}

CommunicationInterface::communicationInterfaceExternalPort_C* CommunicationInterface::get_communicationInterfaceExternalPort(void) const {
    return (CommunicationInterface::communicationInterfaceExternalPort_C*) &communicationInterfaceExternalPort;
}

CommunicationInterface::communicationInterfaceInternalPort_C* CommunicationInterface::getCommunicationInterfaceInternalPort(void) const {
    return (CommunicationInterface::communicationInterfaceInternalPort_C*) &communicationInterfaceInternalPort;
}

CommunicationInterface::communicationInterfaceInternalPort_C* CommunicationInterface::get_communicationInterfaceInternalPort(void) const {
    return (CommunicationInterface::communicationInterfaceInternalPort_C*) &communicationInterfaceInternalPort;
}

const DroneInterface* CommunicationInterface::getItsDroneInterface(void) const {
    return &itsDroneInterface;
}

const DroneInterface* CommunicationInterface::getItsDroneInterface_1(void) const {
    return &itsDroneInterface_1;
}

const SatelliteInterface* CommunicationInterface::getItsSatelliteInterface(void) const {
    return &itsSatelliteInterface;
}

const SatelliteInterface* CommunicationInterface::getItsSatelliteInterface_1(void) const {
    return &itsSatelliteInterface_1;
}

void CommunicationInterface::initRelations(void) {
    {
        
        itsDroneInterface_1.get_sendCommunicationDronePort()->setItsSendCommunicationDroneDataInterface(get_communicationInterfaceInternalPort()->getItsSendCommunicationDroneDataInterface());
        
    }
    {
        
        itsSatelliteInterface_1.get_sendCommunicationSatelliteDataPort()->setItsSendCommunicationSatelliteDataInterface(get_communicationInterfaceInternalPort()->getItsSendCommunicationSatelliteDataInterface());
        
    }
    {
        
        get_communicationInterfaceExternalPort()->setItsSendDroneDataInterface(itsDroneInterface_1.get_droneInterfacePort()->getItsSendDroneDataInterface());
        
    }
    {
        
        get_communicationInterfaceExternalPort()->setItsSendSatelliteDataInterface(itsSatelliteInterface_1.get_satelliteInterfacePort()->getItsSendSatelliteDataInterface());
        
    }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunicationInterface::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedsendDroneDataInterface::serializeAttributes(aomsAttributes);
    OMAnimatedsendSatelliteDataInterface::serializeAttributes(aomsAttributes);
}

void OMAnimatedCommunicationInterface::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDroneInterface", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDroneInterface);
    aomsRelations->addRelation("itsSatelliteInterface", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSatelliteInterface);
    aomsRelations->addRelation("itsDroneInterface_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDroneInterface_1);
    aomsRelations->addRelation("itsSatelliteInterface_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSatelliteInterface_1);
    OMAnimatedsendDroneDataInterface::serializeRelations(aomsRelations);
    OMAnimatedsendSatelliteDataInterface::serializeRelations(aomsRelations);
}

static AOMClass* _CommunicationInterfaceSuper[2] = {
OMAnimatedsendDroneDataInterface::staticGetClass(),
OMAnimatedsendSatelliteDataInterface::staticGetClass()};
//#]

IMPLEMENT_META_M_P(CommunicationInterface, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, _CommunicationInterfaceSuper, 2, OMAnimatedCommunicationInterface)

OMINIT_SUPERCLASS(sendDroneDataInterface, OMAnimatedsendDroneDataInterface)

OMINIT_SUPERCLASS(sendSatelliteDataInterface, OMAnimatedsendSatelliteDataInterface)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationInterface.cpp
*********************************************************************/
