/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Satellite
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Satellite.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## event evtSatelliteOff()
#include "Blocks.h"
//## auto_generated
#include "Satellite.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_Satellite_Satellite_SERIALIZE OM_NO_OP

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_Satellite_sendGPSData_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class Satellite
//#[ ignore
Satellite::satellitePort_C::satellitePort_C(void) : sendSatelliteDataInterface(), _p_(0), itsSendSatelliteDataInterface(NULL) {
}

Satellite::satellitePort_C::~satellitePort_C(void) {
    cleanUpRelations();
}

sendSatelliteDataInterface* Satellite::satellitePort_C::getItsSendSatelliteDataInterface(void) {
    return this;
}

sendSatelliteDataInterface* Satellite::satellitePort_C::getOutBound(void) {
    return this;
}

void Satellite::satellitePort_C::sendSatelliteData(double lat, double lng) {
    
    if (itsSendSatelliteDataInterface != NULL) {
        itsSendSatelliteDataInterface->sendSatelliteData(lat,lng);
    }
    
}

void Satellite::satellitePort_C::setItsSendSatelliteDataInterface(sendSatelliteDataInterface* const p_sendSatelliteDataInterface) {
    itsSendSatelliteDataInterface = p_sendSatelliteDataInterface;
}

void Satellite::satellitePort_C::cleanUpRelations(void) {
    if(itsSendSatelliteDataInterface != NULL)
        {
            itsSendSatelliteDataInterface = NULL;
        }
}
//#]

bool Satellite::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Satellite::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

Satellite::Satellite(IOxfActive* const theActiveContext) : OMReactive() {
    NOTIFY_REACTIVE_CONSTRUCTOR(Satellite, Satellite(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_Satellite_Satellite_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Satellite::~Satellite(void) {
    NOTIFY_DESTRUCTOR(~Satellite, true);
    cancelTimeouts();
}

void Satellite::sendGPSData(void) {
    NOTIFY_OPERATION(sendGPSData, sendGPSData(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_Satellite_sendGPSData_SERIALIZE);
    //#[ operation sendGPSData()
    double lat=(static_cast<double>(rand()) / RAND_MAX) * 180.0 - 90.0;
    double lng=(static_cast<double>(rand()) / RAND_MAX) * 360.0 - 180.0;
    OUT_PORT(satellitePort)->sendSatelliteData(lat,lng);
    //#]
}

Satellite::satellitePort_C* Satellite::getSatellitePort(void) const {
    return (Satellite::satellitePort_C*) &satellitePort;
}

Satellite::satellitePort_C* Satellite::get_satellitePort(void) const {
    return (Satellite::satellitePort_C*) &satellitePort;
}

bool Satellite::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Satellite::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void Satellite::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.SatelliteOff");
        rootState_subState = SatelliteOff;
        rootState_active = SatelliteOff;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Satellite::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State SatelliteOff
        case SatelliteOff:
        {
            if(IS_EVENT_TYPE_OF(evtSatelliteTrunOn_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.SatelliteOff");
                    NOTIFY_STATE_ENTERED("ROOT.SatelliteOn");
                    rootState_subState = SatelliteOn;
                    rootState_active = SatelliteOn;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.SatelliteOn");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State SatelliteOn
        case SatelliteOn:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.SatelliteOn");
                            //#[ transition 3 
                            
                            sendGPSData();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.SatelliteOn");
                            rootState_subState = SatelliteOn;
                            rootState_active = SatelliteOn;
                            rootState_timeout = scheduleTimeout(1000, "ROOT.SatelliteOn");
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            else {
                if(IS_EVENT_TYPE_OF(evtSatelliteOff_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("2");
                        cancel(rootState_timeout);
                        NOTIFY_STATE_EXITED("ROOT.SatelliteOn");
                        NOTIFY_STATE_ENTERED("ROOT.SatelliteOff");
                        rootState_subState = SatelliteOff;
                        rootState_active = SatelliteOff;
                        NOTIFY_TRANSITION_TERMINATED("2");
                        res = eventConsumed;
                    }
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
void OMAnimatedSatellite::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Satellite::SatelliteOff:
        {
            SatelliteOff_serializeStates(aomsState);
        }
        break;
        case Satellite::SatelliteOn:
        {
            SatelliteOn_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSatellite::SatelliteOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SatelliteOn");
}

void OMAnimatedSatellite::SatelliteOff_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SatelliteOff");
}
//#]

IMPLEMENT_REACTIVE_META_P(Satellite, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, OMAnimatedSatellite)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Satellite.cpp
*********************************************************************/
