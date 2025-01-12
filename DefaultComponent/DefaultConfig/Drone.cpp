/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Drone
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Drone.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Drone.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_Drone_Drone_SERIALIZE OM_NO_OP

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_Drone_sendDroneDataToCommunication_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class Drone
//#[ ignore
Drone::dronePort_C::dronePort_C(void) : sendDroneDataInterface(), _p_(0), itsSendDroneDataInterface(NULL) {
}

Drone::dronePort_C::~dronePort_C(void) {
    cleanUpRelations();
}

sendDroneDataInterface* Drone::dronePort_C::getItsSendDroneDataInterface(void) {
    return this;
}

sendDroneDataInterface* Drone::dronePort_C::getOutBound(void) {
    return this;
}

void Drone::dronePort_C::sendDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) {
    
    if (itsSendDroneDataInterface != NULL) {
        itsSendDroneDataInterface->sendDroneData(temprature,humidity,windSpeed,windDirection,precipitation,area,precipitationHr);
    }
    
}

void Drone::dronePort_C::setItsSendDroneDataInterface(sendDroneDataInterface* const p_sendDroneDataInterface) {
    itsSendDroneDataInterface = p_sendDroneDataInterface;
}

void Drone::dronePort_C::cleanUpRelations(void) {
    if(itsSendDroneDataInterface != NULL)
        {
            itsSendDroneDataInterface = NULL;
        }
}
//#]

Drone::Drone(IOxfActive* const theActiveContext) : OMReactive() {
    NOTIFY_REACTIVE_CONSTRUCTOR(Drone, Drone(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_Drone_Drone_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Drone::~Drone(void) {
    NOTIFY_DESTRUCTOR(~Drone, true);
    cancelTimeouts();
}

void Drone::sendDroneDataToCommunication(void) {
    NOTIFY_OPERATION(sendDroneDataToCommunication, sendDroneDataToCommunication(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_Drone_sendDroneDataToCommunication_SERIALIZE);
    //#[ operation sendDroneDataToCommunication()
    double temprature=static_cast<double>(rand()) / RAND_MAX * 999 + 1;
    double humidity = static_cast<double>(rand()) / RAND_MAX * 999 + 1;
    double windSpeed = static_cast<double>(rand()) / RAND_MAX * 999 + 1;
    double precipitation = static_cast<double>(rand()) / RAND_MAX * 99 + 1;
    double area = static_cast<double>(rand()) / RAND_MAX * 999 + 1;
    double precipitationHr = static_cast<double>(std::rand() % 24);
    int windDirection = rand() % 360; // Random number between 0 and 359
    OUT_PORT(dronePort)->sendDroneData(temprature,humidity,windSpeed,windDirection, precipitation,area,precipitationHr);
    //#]
}

Drone::dronePort_C* Drone::getDronePort(void) const {
    return (Drone::dronePort_C*) &dronePort;
}

Drone::dronePort_C* Drone::get_dronePort(void) const {
    return (Drone::dronePort_C*) &dronePort;
}

bool Drone::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool Drone::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Drone::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Drone::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void Drone::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.DroneOffState");
        rootState_subState = DroneOffState;
        rootState_active = DroneOffState;
        NOTIFY_TRANSITION_TERMINATED("1");
    }
}

IOxfReactive::TakeEventStatus Drone::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State DroneOnState
        case DroneOnState:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("0");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.DroneOnState");
                            //#[ transition 0 
                            
                            sendDroneDataToCommunication();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.DroneOnState");
                            rootState_subState = DroneOnState;
                            rootState_active = DroneOnState;
                            rootState_timeout = scheduleTimeout(1000, "ROOT.DroneOnState");
                            NOTIFY_TRANSITION_TERMINATED("0");
                            res = eventConsumed;
                        }
                }
            else {
                if(IS_EVENT_TYPE_OF(evtTrrnDroneOff_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("3");
                        cancel(rootState_timeout);
                        NOTIFY_STATE_EXITED("ROOT.DroneOnState");
                        NOTIFY_STATE_ENTERED("ROOT.DroneOffState");
                        rootState_subState = DroneOffState;
                        rootState_active = DroneOffState;
                        NOTIFY_TRANSITION_TERMINATED("3");
                        res = eventConsumed;
                    }
                }
                
            
        }
        break;
        // State DroneOffState
        case DroneOffState:
        {
            if(IS_EVENT_TYPE_OF(evtTurnDroneOn_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.DroneOffState");
                    NOTIFY_STATE_ENTERED("ROOT.DroneOnState");
                    rootState_subState = DroneOnState;
                    rootState_active = DroneOnState;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.DroneOnState");
                    NOTIFY_TRANSITION_TERMINATED("2");
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
void OMAnimatedDrone::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Drone::DroneOnState:
        {
            DroneOnState_serializeStates(aomsState);
        }
        break;
        case Drone::DroneOffState:
        {
            DroneOffState_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDrone::DroneOnState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DroneOnState");
}

void OMAnimatedDrone::DroneOffState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DroneOffState");
}
//#]

IMPLEMENT_REACTIVE_META_P(Drone, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, OMAnimatedDrone)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Drone.cpp
*********************************************************************/
