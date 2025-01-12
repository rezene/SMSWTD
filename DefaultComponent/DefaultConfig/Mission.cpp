/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Mission
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Mission.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Mission.h"
//## classInstance itsDataAcquisition
#include "DataAcquisition.h"
//## classInstance itsStormDetection
#include "StormDetection.h"
//## classInstance itsStormPrediction
#include "StormPrediction.h"
//## classInstance itsStormTracking
#include "StormTracking.h"
//## classInstance itsWeatherDashboard
#include "WeatherDashboard.h"
//## classInstance itsWeatherUpdate
#include "WeatherUpdate.h"
//## classInstance itsCommunicationInterface
#include "CommunicationInterface.h"
//## classInstance itsDrone
#include "Drone.h"
//## classInstance itsSatellite
#include "Satellite.h"
//## classInstance itsWMFSystem
#include "WMFSystem.h"
//## auto_generated
#include "DroneInterface.h"
//## auto_generated
#include "SatelliteInterface.h"
//## auto_generated
#include "sendCommunicationDroneDataInterface.h"
//## auto_generated
#include "sendCommunicationSatelliteDataInterface.h"
//## auto_generated
#include "sendDroneDataInterface.h"
//## auto_generated
#include "sendSatelliteDataInterface.h"
//## auto_generated
#include "WMFSystemInterface.h"
//## auto_generated
#include "WMFSystemSatelliteDataInterface.h"
//#[ ignore
#define evtSatelliteTrunOn_SERIALIZE OM_NO_OP

#define evtSatelliteTrunOn_UNSERIALIZE OM_NO_OP

#define evtSatelliteTrunOn_CONSTRUCTOR evtSatelliteTrunOn()

#define evtSatelliteSendData_SERIALIZE OM_NO_OP

#define evtSatelliteSendData_UNSERIALIZE OM_NO_OP

#define evtSatelliteSendData_CONSTRUCTOR evtSatelliteSendData()

#define evtProcessSensorData_SERIALIZE OM_NO_OP

#define evtProcessSensorData_UNSERIALIZE OM_NO_OP

#define evtProcessSensorData_CONSTRUCTOR evtProcessSensorData()

#define evtGetNextSatelliteData_SERIALIZE OM_NO_OP

#define evtGetNextSatelliteData_UNSERIALIZE OM_NO_OP

#define evtGetNextSatelliteData_CONSTRUCTOR evtGetNextSatelliteData()

#define evtGetNextDroneData_SERIALIZE OM_NO_OP

#define evtGetNextDroneData_UNSERIALIZE OM_NO_OP

#define evtGetNextDroneData_CONSTRUCTOR evtGetNextDroneData()

#define evtStorming_SERIALIZE OM_NO_OP

#define evtStorming_UNSERIALIZE OM_NO_OP

#define evtStorming_CONSTRUCTOR evtStorming()

#define evtNoStorming_SERIALIZE OM_NO_OP

#define evtNoStorming_UNSERIALIZE OM_NO_OP

#define evtNoStorming_CONSTRUCTOR evtNoStorming()

#define evtTurnDroneOn_SERIALIZE OM_NO_OP

#define evtTurnDroneOn_UNSERIALIZE OM_NO_OP

#define evtTurnDroneOn_CONSTRUCTOR evtTurnDroneOn()

#define evtTrrnDroneOff_SERIALIZE OM_NO_OP

#define evtTrrnDroneOff_UNSERIALIZE OM_NO_OP

#define evtTrrnDroneOff_CONSTRUCTOR evtTrrnDroneOff()

#define updateTemprature_SERIALIZE OM_NO_OP

#define updateTemprature_UNSERIALIZE OM_NO_OP

#define updateTemprature_CONSTRUCTOR updateTemprature()
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission


//## classInstance itsCommunicationInterface
CommunicationInterface itsCommunicationInterface;

//## classInstance itsCommunicationInterface_1
CommunicationInterface itsCommunicationInterface_1;

//## classInstance itsDataAcquisition
DataAcquisition itsDataAcquisition;

//## classInstance itsDataAcquisition_1
DataAcquisition itsDataAcquisition_1;

//## classInstance itsDrone
Drone itsDrone;

//## classInstance itsDrone_1
Drone itsDrone_1;

//## classInstance itsSatellite
Satellite itsSatellite;

//## classInstance itsSatellite_1
Satellite itsSatellite_1;

//## classInstance itsStormDetection
StormDetection itsStormDetection;

//## classInstance itsStormDetection_1
StormDetection itsStormDetection_1;

//## classInstance itsStormPrediction
StormPrediction itsStormPrediction;

//## classInstance itsStormPrediction_1
StormPrediction itsStormPrediction_1;

//## classInstance itsStormTracking
StormTracking itsStormTracking;

//## classInstance itsStormTracking_1
StormTracking itsStormTracking_1;

//## classInstance itsWMFSystem
WMFSystem itsWMFSystem;

//## classInstance itsWeatherDashboard
WeatherDashboard itsWeatherDashboard;

//## classInstance itsWeatherDashboard_1
WeatherDashboard itsWeatherDashboard_1;

//## classInstance itsWeatherUpdate
WeatherUpdate itsWeatherUpdate;

//## classInstance itsWeatherUpdate_1
WeatherUpdate itsWeatherUpdate_1;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission)
#endif // _OMINSTRUMENT

void Mission_initRelations(void) {
    {
        {
            itsDataAcquisition.setShouldDelete(false);
        }
        {
            itsStormDetection.setShouldDelete(false);
        }
        {
            itsSatellite.setShouldDelete(false);
        }
        {
            itsDrone.setShouldDelete(false);
        }
        {
            itsDataAcquisition_1.setShouldDelete(false);
        }
        {
            itsDrone_1.setShouldDelete(false);
        }
        {
            itsWMFSystem.setShouldDelete(false);
        }
        {
            itsStormDetection_1.setShouldDelete(false);
        }
        {
            itsSatellite_1.setShouldDelete(false);
        }
    }
    {
        
        itsSatellite_1.get_satellitePort()->setItsSendSatelliteDataInterface(itsCommunicationInterface_1.get_communicationInterfaceExternalPort()->getItsSendSatelliteDataInterface());
        
    }
    {
        
        itsDrone_1.get_dronePort()->setItsSendDroneDataInterface(itsCommunicationInterface_1.get_communicationInterfaceExternalPort()->getItsSendDroneDataInterface());
        
    }
    {
        
        itsCommunicationInterface_1.get_communicationInterfaceInternalPort()->setItsSendCommunicationSatelliteDataInterface(itsDataAcquisition_1.get_dataAcquisitionPort()->getItsSendCommunicationSatelliteDataInterface());
        
        itsCommunicationInterface_1.get_communicationInterfaceInternalPort()->setItsSendCommunicationDroneDataInterface(itsDataAcquisition_1.get_dataAcquisitionPort()->getItsSendCommunicationDroneDataInterface());
        
    }
    {
        
        itsDataAcquisition_1.get_dataAcquisitionToWMFPort()->setItsWMFSystemInterface(itsWMFSystem.get_WMFSystemPort()->getItsWMFSystemInterface());
        
        itsDataAcquisition_1.get_dataAcquisitionToWMFPort()->setItsWMFSystemSatelliteDataInterface(itsWMFSystem.get_WMFSystemPort()->getItsWMFSystemSatelliteDataInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool Mission_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsDataAcquisition.startBehavior();
        }
    if(done == true)
        {
            done = itsDataAcquisition_1.startBehavior();
        }
    if(done == true)
        {
            done = itsDrone.startBehavior();
        }
    if(done == true)
        {
            done = itsDrone_1.startBehavior();
        }
    if(done == true)
        {
            done = itsSatellite.startBehavior();
        }
    if(done == true)
        {
            done = itsSatellite_1.startBehavior();
        }
    if(done == true)
        {
            done = itsStormDetection.startBehavior();
        }
    if(done == true)
        {
            done = itsStormDetection_1.startBehavior();
        }
    if(done == true)
        {
            done = itsWMFSystem.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsDataAcquisition, DataAcquisition, "itsDataAcquisition", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsStormDetection, StormDetection, "itsStormDetection", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsStormPrediction, StormPrediction, "itsStormPrediction", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsStormTracking, StormTracking, "itsStormTracking", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsWeatherUpdate, WeatherUpdate, "itsWeatherUpdate", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsWeatherDashboard, WeatherDashboard, "itsWeatherDashboard", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSatellite, Satellite, "itsSatellite", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsDrone, Drone, "itsDrone", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsCommunicationInterface, CommunicationInterface, "itsCommunicationInterface", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsDataAcquisition_1, DataAcquisition, "itsDataAcquisition_1", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsStormPrediction_1, StormPrediction, "itsStormPrediction_1", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsStormTracking_1, StormTracking, "itsStormTracking_1", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsWeatherDashboard_1, WeatherDashboard, "itsWeatherDashboard_1", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsDrone_1, Drone, "itsDrone_1", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsCommunicationInterface_1, CommunicationInterface, "itsCommunicationInterface_1", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsWMFSystem, WMFSystem, "itsWMFSystem", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsWeatherUpdate_1, WeatherUpdate, "itsWeatherUpdate_1", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsStormDetection_1, StormDetection, "itsStormDetection_1", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSatellite_1, Satellite, "itsSatellite_1", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
Mission_OMInitializer::Mission_OMInitializer(void) {
    Mission_initRelations();
    (void) Mission_startBehavior();
}

Mission_OMInitializer::~Mission_OMInitializer(void) {
}
//#]

//## event evtSatelliteTrunOn()
evtSatelliteTrunOn::evtSatelliteTrunOn(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evtSatelliteTrunOn)
    setId(evtSatelliteTrunOn_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evtSatelliteTrunOn_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id(11001);
//#]

IMPLEMENT_META_EVENT_P(evtSatelliteTrunOn, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, evtSatelliteTrunOn())

//## event evtSatelliteSendData()
evtSatelliteSendData::evtSatelliteSendData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evtSatelliteSendData)
    setId(evtSatelliteSendData_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evtSatelliteSendData_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id(11002);
//#]

IMPLEMENT_META_EVENT_P(evtSatelliteSendData, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, evtSatelliteSendData())

//## event evtProcessSensorData()
evtProcessSensorData::evtProcessSensorData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evtProcessSensorData)
    setId(evtProcessSensorData_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evtProcessSensorData_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id(11003);
//#]

IMPLEMENT_META_EVENT_P(evtProcessSensorData, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, evtProcessSensorData())

//## event evtGetNextSatelliteData()
evtGetNextSatelliteData::evtGetNextSatelliteData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evtGetNextSatelliteData)
    setId(evtGetNextSatelliteData_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evtGetNextSatelliteData_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id(11004);
//#]

IMPLEMENT_META_EVENT_P(evtGetNextSatelliteData, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, evtGetNextSatelliteData())

//## event evtGetNextDroneData()
evtGetNextDroneData::evtGetNextDroneData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evtGetNextDroneData)
    setId(evtGetNextDroneData_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evtGetNextDroneData_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id(11005);
//#]

IMPLEMENT_META_EVENT_P(evtGetNextDroneData, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, evtGetNextDroneData())

//## event evtStorming()
evtStorming::evtStorming(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evtStorming)
    setId(evtStorming_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evtStorming_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id(11006);
//#]

IMPLEMENT_META_EVENT_P(evtStorming, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, evtStorming())

//## event evtNoStorming()
evtNoStorming::evtNoStorming(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evtNoStorming)
    setId(evtNoStorming_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evtNoStorming_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id(11007);
//#]

IMPLEMENT_META_EVENT_P(evtNoStorming, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, evtNoStorming())

//## event evtTurnDroneOn()
evtTurnDroneOn::evtTurnDroneOn(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evtTurnDroneOn)
    setId(evtTurnDroneOn_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evtTurnDroneOn_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id(11008);
//#]

IMPLEMENT_META_EVENT_P(evtTurnDroneOn, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, evtTurnDroneOn())

//## event evtTrrnDroneOff()
evtTrrnDroneOff::evtTrrnDroneOff(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evtTrrnDroneOff)
    setId(evtTrrnDroneOff_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evtTrrnDroneOff_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id(11009);
//#]

IMPLEMENT_META_EVENT_P(evtTrrnDroneOff, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, evtTrrnDroneOff())

//## event updateTemprature()
updateTemprature::updateTemprature(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(updateTemprature)
    setId(updateTemprature_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID updateTemprature_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id(11010);
//#]

IMPLEMENT_META_EVENT_P(updateTemprature, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, updateTemprature())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Mission.cpp
*********************************************************************/
