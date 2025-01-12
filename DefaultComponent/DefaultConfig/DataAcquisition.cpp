/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataAcquisition
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataAcquisition.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "DataAcquisition.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_DataAcquisition_sendCommunicationDroneData_SERIALIZE \
    aomsmethod->addAttribute("temprature", x2String(temprature));\
    aomsmethod->addAttribute("humidity", x2String(humidity));\
    aomsmethod->addAttribute("windSpeed", x2String(windSpeed));\
    aomsmethod->addAttribute("windDirection", x2String(windDirection));\
    aomsmethod->addAttribute("precipitation", x2String(precipitation));\
    aomsmethod->addAttribute("area", x2String(area));\
    aomsmethod->addAttribute("precipitationHr", x2String(precipitationHr));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_DataAcquisition_sendCommunicationSatelliteData_SERIALIZE \
    aomsmethod->addAttribute("lat", x2String(lat));\
    aomsmethod->addAttribute("lng", x2String(lng));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_DataAcquisition_DataAcquisition_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class DataAcquisition
#ifdef _OMINSTRUMENT
//#[ ignore
static AOMClass* _DataAcquisitionSuper[2] = {
OMAnimatedsendCommunicationSatelliteDataInterface::staticGetClass(),
OMAnimatedsendCommunicationDroneDataInterface::staticGetClass()};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
DataAcquisition::dataAcquisitionPort_C::dataAcquisitionPort_C(void) : sendCommunicationDroneDataInterface(), sendCommunicationSatelliteDataInterface(), _p_(0), itsSendCommunicationDroneDataInterface(NULL), itsSendCommunicationSatelliteDataInterface(NULL) {
}

DataAcquisition::dataAcquisitionPort_C::~dataAcquisitionPort_C(void) {
    cleanUpRelations();
}

void DataAcquisition::dataAcquisitionPort_C::connectDataAcquisition(DataAcquisition* part) {
    setItsSendCommunicationDroneDataInterface(part);
    setItsSendCommunicationSatelliteDataInterface(part);
    
}

sendCommunicationDroneDataInterface* DataAcquisition::dataAcquisitionPort_C::getItsSendCommunicationDroneDataInterface(void) {
    return this;
}

sendCommunicationSatelliteDataInterface* DataAcquisition::dataAcquisitionPort_C::getItsSendCommunicationSatelliteDataInterface(void) {
    return this;
}

void DataAcquisition::dataAcquisitionPort_C::sendCommunicationDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) {
    
    if (itsSendCommunicationDroneDataInterface != NULL) {
        itsSendCommunicationDroneDataInterface->sendCommunicationDroneData(temprature,humidity,windSpeed,windDirection,precipitation,area,precipitationHr);
    }
    
}

void DataAcquisition::dataAcquisitionPort_C::sendCommunicationSatelliteData(double lat, double lng) {
    
    if (itsSendCommunicationSatelliteDataInterface != NULL) {
        itsSendCommunicationSatelliteDataInterface->sendCommunicationSatelliteData(lat,lng);
    }
    
}

void DataAcquisition::dataAcquisitionPort_C::setItsSendCommunicationDroneDataInterface(sendCommunicationDroneDataInterface* const p_sendCommunicationDroneDataInterface) {
    itsSendCommunicationDroneDataInterface = p_sendCommunicationDroneDataInterface;
}

void DataAcquisition::dataAcquisitionPort_C::setItsSendCommunicationSatelliteDataInterface(sendCommunicationSatelliteDataInterface* const p_sendCommunicationSatelliteDataInterface) {
    itsSendCommunicationSatelliteDataInterface = p_sendCommunicationSatelliteDataInterface;
}

void DataAcquisition::dataAcquisitionPort_C::cleanUpRelations(void) {
    if(itsSendCommunicationDroneDataInterface != NULL)
        {
            itsSendCommunicationDroneDataInterface = NULL;
        }
    if(itsSendCommunicationSatelliteDataInterface != NULL)
        {
            itsSendCommunicationSatelliteDataInterface = NULL;
        }
}

DataAcquisition::dataAcquisitionToWMFPort_C::dataAcquisitionToWMFPort_C(void) : WMFSystemInterface(), WMFSystemSatelliteDataInterface(), _p_(0), itsWMFSystemInterface(NULL), itsWMFSystemSatelliteDataInterface(NULL) {
}

DataAcquisition::dataAcquisitionToWMFPort_C::~dataAcquisitionToWMFPort_C(void) {
    cleanUpRelations();
}

void DataAcquisition::dataAcquisitionToWMFPort_C::SendToWMFStormAndWeatherData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) {
    
    if (itsWMFSystemInterface != NULL) {
        itsWMFSystemInterface->SendToWMFStormAndWeatherData(temprature,humidity,windSpeed,windDirection,precipitation,area,precipitationHr);
    }
    
}

WMFSystemInterface* DataAcquisition::dataAcquisitionToWMFPort_C::getItsWMFSystemInterface(void) {
    return this;
}

WMFSystemSatelliteDataInterface* DataAcquisition::dataAcquisitionToWMFPort_C::getItsWMFSystemSatelliteDataInterface(void) {
    return this;
}

DataAcquisition::dataAcquisitionToWMFPort_C* DataAcquisition::dataAcquisitionToWMFPort_C::getOutBound(void) {
    return this;
}

void DataAcquisition::dataAcquisitionToWMFPort_C::sendToWMFSatelliteData(double lat, double lng) {
    
    if (itsWMFSystemSatelliteDataInterface != NULL) {
        itsWMFSystemSatelliteDataInterface->sendToWMFSatelliteData(lat,lng);
    }
    
}

void DataAcquisition::dataAcquisitionToWMFPort_C::setItsWMFSystemInterface(WMFSystemInterface* const p_WMFSystemInterface) {
    itsWMFSystemInterface = p_WMFSystemInterface;
}

void DataAcquisition::dataAcquisitionToWMFPort_C::setItsWMFSystemSatelliteDataInterface(WMFSystemSatelliteDataInterface* const p_WMFSystemSatelliteDataInterface) {
    itsWMFSystemSatelliteDataInterface = p_WMFSystemSatelliteDataInterface;
}

void DataAcquisition::dataAcquisitionToWMFPort_C::cleanUpRelations(void) {
    if(itsWMFSystemInterface != NULL)
        {
            itsWMFSystemInterface = NULL;
        }
    if(itsWMFSystemSatelliteDataInterface != NULL)
        {
            itsWMFSystemSatelliteDataInterface = NULL;
        }
}
//#]

DataAcquisition::DataAcquisition(IOxfActive* const theActiveContext) : OMReactive(), sendCommunicationSatelliteDataInterface(), sendCommunicationDroneDataInterface(), droneDataReceived(false), satelliteDataReceived(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(DataAcquisition, DataAcquisition(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_DataAcquisition_DataAcquisition_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

DataAcquisition::~DataAcquisition(void) {
    NOTIFY_DESTRUCTOR(~DataAcquisition, false);
}

const bool DataAcquisition::getDroneDataReceived(void) const {
    return droneDataReceived;
}

void DataAcquisition::setDroneDataReceived(const bool p_droneDataReceived) {
    droneDataReceived = p_droneDataReceived;
    NOTIFY_SET_OPERATION;
}

const bool DataAcquisition::getSatelliteDataReceived(void) const {
    return satelliteDataReceived;
}

void DataAcquisition::setSatelliteDataReceived(const bool p_satelliteDataReceived) {
    satelliteDataReceived = p_satelliteDataReceived;
    NOTIFY_SET_OPERATION;
}

bool DataAcquisition::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void DataAcquisition::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void DataAcquisition::sendCommunicationDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) {
    NOTIFY_OPERATION(sendCommunicationDroneData, sendCommunicationDroneData(double,double,double,double,double,double,double), 7, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_DataAcquisition_sendCommunicationDroneData_SERIALIZE);
    //#[ operation sendCommunicationDroneData(double,double,double,double,double,double,double)
    droneDataReceived=true;
    GEN(evtGetNextDroneData());
    //itsWeatherUpdate_1.updateWeather(temprature, humidity, windSpeed, windDirection,precipitation, area );
    std::cout<<"DroneSensors Data is in acqusitioned ..."<<std::endl;
    OUT_PORT(dataAcquisitionToWMFPort)->SendToWMFStormAndWeatherData(temprature,humidity,windSpeed,windDirection,precipitation,area,precipitationHr);
    
    droneDataReceived=false;
    //#]
}

void DataAcquisition::sendCommunicationSatelliteData(double lat, double lng) {
    NOTIFY_OPERATION(sendCommunicationSatelliteData, sendCommunicationSatelliteData(double,double), 2, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_DataAcquisition_sendCommunicationSatelliteData_SERIALIZE);
    //#[ operation sendCommunicationSatelliteData(double,double)
    satelliteDataReceived=true;
    GEN(evtGetNextSatelliteData());
    OUT_PORT(dataAcquisitionToWMFPort)->sendToWMFSatelliteData(lat,lng);
    std::cout<<"SatelliteSensors Data is in acqusitioned ..."<<std::endl;
    
    satelliteDataReceived=false;
    //#]
}

DataAcquisition::dataAcquisitionPort_C* DataAcquisition::getDataAcquisitionPort(void) const {
    return (DataAcquisition::dataAcquisitionPort_C*) &dataAcquisitionPort;
}

DataAcquisition::dataAcquisitionPort_C* DataAcquisition::get_dataAcquisitionPort(void) const {
    return (DataAcquisition::dataAcquisitionPort_C*) &dataAcquisitionPort;
}

DataAcquisition::dataAcquisitionToWMFPort_C* DataAcquisition::getDataAcquisitionToWMFPort(void) const {
    return (DataAcquisition::dataAcquisitionToWMFPort_C*) &dataAcquisitionToWMFPort;
}

DataAcquisition::dataAcquisitionToWMFPort_C* DataAcquisition::get_dataAcquisitionToWMFPort(void) const {
    return (DataAcquisition::dataAcquisitionToWMFPort_C*) &dataAcquisitionToWMFPort;
}

void DataAcquisition::initRelations(void) {
    if (get_dataAcquisitionPort() != NULL) {
        get_dataAcquisitionPort()->connectDataAcquisition(this);
    }
}

void DataAcquisition::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Ready");
        rootState_subState = Ready;
        rootState_active = Ready;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus DataAcquisition::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Ready
        case Ready:
        {
            if(IS_EVENT_TYPE_OF(evtProcessSensorData_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id) == 1)
                {
                    //## transition 2 
                    if(satelliteDataReceived )
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_STATE_EXITED("ROOT.Ready");
                            NOTIFY_STATE_ENTERED("ROOT.SatelliteDataPreporcessing");
                            rootState_subState = SatelliteDataPreporcessing;
                            rootState_active = SatelliteDataPreporcessing;
                            NOTIFY_TRANSITION_TERMINATED("2");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 3 
                            if(droneDataReceived)
                                {
                                    NOTIFY_TRANSITION_STARTED("1");
                                    NOTIFY_TRANSITION_STARTED("3");
                                    NOTIFY_STATE_EXITED("ROOT.Ready");
                                    NOTIFY_STATE_ENTERED("ROOT.DroneDataPreprocessing");
                                    rootState_subState = DroneDataPreprocessing;
                                    rootState_active = DroneDataPreprocessing;
                                    NOTIFY_TRANSITION_TERMINATED("3");
                                    NOTIFY_TRANSITION_TERMINATED("1");
                                    res = eventConsumed;
                                }
                        }
                }
            
        }
        break;
        // State SatelliteDataPreporcessing
        case SatelliteDataPreporcessing:
        {
            if(IS_EVENT_TYPE_OF(evtGetNextSatelliteData_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.SatelliteDataPreporcessing");
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State DroneDataPreprocessing
        case DroneDataPreprocessing:
        {
            if(IS_EVENT_TYPE_OF(evtGetNextDroneData_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.DroneDataPreprocessing");
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataAcquisition::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("droneDataReceived", x2String(myReal->droneDataReceived));
    aomsAttributes->addAttribute("satelliteDataReceived", x2String(myReal->satelliteDataReceived));
    OMAnimatedsendCommunicationSatelliteDataInterface::serializeAttributes(aomsAttributes);
    OMAnimatedsendCommunicationDroneDataInterface::serializeAttributes(aomsAttributes);
}

void OMAnimatedDataAcquisition::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedsendCommunicationSatelliteDataInterface::serializeRelations(aomsRelations);
    OMAnimatedsendCommunicationDroneDataInterface::serializeRelations(aomsRelations);
}

void OMAnimatedDataAcquisition::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case DataAcquisition::Ready:
        {
            Ready_serializeStates(aomsState);
        }
        break;
        case DataAcquisition::SatelliteDataPreporcessing:
        {
            SatelliteDataPreporcessing_serializeStates(aomsState);
        }
        break;
        case DataAcquisition::DroneDataPreprocessing:
        {
            DroneDataPreprocessing_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDataAcquisition::SatelliteDataPreporcessing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SatelliteDataPreporcessing");
}

void OMAnimatedDataAcquisition::Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Ready");
}

void OMAnimatedDataAcquisition::DroneDataPreprocessing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DroneDataPreprocessing");
}
//#]

IMPLEMENT_REACTIVE_META_M_P(DataAcquisition, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, _DataAcquisitionSuper, 2, OMAnimatedDataAcquisition)

OMINIT_SUPERCLASS(sendCommunicationSatelliteDataInterface, OMAnimatedsendCommunicationSatelliteDataInterface)

OMINIT_SUPERCLASS(sendCommunicationDroneDataInterface, OMAnimatedsendCommunicationDroneDataInterface)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataAcquisition.cpp
*********************************************************************/
