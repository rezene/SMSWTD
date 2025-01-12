/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Drone
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Drone.h
*********************************************************************/

#ifndef Drone_H
#define Drone_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## class dronePort_C
#include "sendDroneDataInterface.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class Drone
class Drone : public OMReactive {
public :

//#[ ignore
    //## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission
    class dronePort_C : public sendDroneDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        dronePort_C(void);
        
        //## auto_generated
        virtual ~dronePort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        sendDroneDataInterface* getItsSendDroneDataInterface(void);
        
        //## auto_generated
        sendDroneDataInterface* getOutBound(void);
        
        //## auto_generated
        virtual void sendDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsSendDroneDataInterface(sendDroneDataInterface* const p_sendDroneDataInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        sendDroneDataInterface* itsSendDroneDataInterface;		//## link itsSendDroneDataInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedDrone;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    //## auto_generated
    explicit Drone(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~Drone(void);
    
    //## operation sendDroneDataToCommunication()
    virtual void sendDroneDataToCommunication(void);
    
    //## auto_generated
    dronePort_C* getDronePort(void) const;
    
    //## auto_generated
    dronePort_C* get_dronePort(void) const;
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cancelTimeouts(void);

private :

//#[ ignore
    dronePort_C dronePort;
//#]

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // DroneOnState:
    //## statechart_method
    inline RhpBoolean DroneOnState_IN(void) const;
    
    // DroneOffState:
    //## statechart_method
    inline RhpBoolean DroneOffState_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum Drone_Enum {
        OMNonState = 0,
        DroneOnState = 1,
        DroneOffState = 2
    };
//#]

private :

//#[ ignore
    Drone_Enum rootState_subState;
    
    Drone_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDrone : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Drone, OMAnimatedDrone)
    
    ////    Framework operations    ////
    
public :

    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DroneOnState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DroneOffState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Drone::rootState_IN(void) const {
    return true;
}

inline RhpBoolean Drone::DroneOnState_IN(void) const {
    return rootState_subState == DroneOnState;
}

inline RhpBoolean Drone::DroneOffState_IN(void) const {
    return rootState_subState == DroneOffState;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Drone.h
*********************************************************************/
