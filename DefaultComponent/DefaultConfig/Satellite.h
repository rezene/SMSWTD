/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Satellite
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Satellite.h
*********************************************************************/

#ifndef Satellite_H
#define Satellite_H

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
//## class satellitePort_C
#include "sendSatelliteDataInterface.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class Satellite
class Satellite : public OMReactive {
public :

//#[ ignore
    //## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission
    class satellitePort_C : public sendSatelliteDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        satellitePort_C(void);
        
        //## auto_generated
        virtual ~satellitePort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        sendSatelliteDataInterface* getItsSendSatelliteDataInterface(void);
        
        //## auto_generated
        sendSatelliteDataInterface* getOutBound(void);
        
        //## auto_generated
        virtual void sendSatelliteData(double lat, double lng);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsSendSatelliteDataInterface(sendSatelliteDataInterface* const p_sendSatelliteDataInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        sendSatelliteDataInterface* itsSendSatelliteDataInterface;		//## link itsSendSatelliteDataInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSatellite;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    //## auto_generated
    explicit Satellite(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~Satellite(void);
    
    //## operation sendGPSData()
    virtual void sendGPSData(void);
    
    //## auto_generated
    satellitePort_C* getSatellitePort(void) const;
    
    //## auto_generated
    satellitePort_C* get_satellitePort(void) const;
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);

protected :

    //## auto_generated
    void cancelTimeouts(void);

private :

//#[ ignore
    satellitePort_C satellitePort;
//#]

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // SatelliteOn:
    //## statechart_method
    inline RhpBoolean SatelliteOn_IN(void) const;
    
    // SatelliteOff:
    //## statechart_method
    inline RhpBoolean SatelliteOff_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum Satellite_Enum {
        OMNonState = 0,
        SatelliteOn = 1,
        SatelliteOff = 2
    };
//#]

private :

//#[ ignore
    Satellite_Enum rootState_subState;
    
    Satellite_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSatellite : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Satellite, OMAnimatedSatellite)
    
    ////    Framework operations    ////
    
public :

    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SatelliteOn_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SatelliteOff_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Satellite::rootState_IN(void) const {
    return true;
}

inline RhpBoolean Satellite::SatelliteOn_IN(void) const {
    return rootState_subState == SatelliteOn;
}

inline RhpBoolean Satellite::SatelliteOff_IN(void) const {
    return rootState_subState == SatelliteOff;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Satellite.h
*********************************************************************/
