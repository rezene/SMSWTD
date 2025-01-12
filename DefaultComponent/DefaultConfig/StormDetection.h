/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StormDetection
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\StormDetection.h
*********************************************************************/

#ifndef StormDetection_H
#define StormDetection_H

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
//## classInstance itsStormPrediction
#include "StormPrediction.h"
//## classInstance itsStormTracking
#include "StormTracking.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class StormDetection
class StormDetection : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStormDetection;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit StormDetection(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~StormDetection(void);
    
    ////    Operations    ////
    
    //## operation calculateRainIntensity(double,double)
    virtual double calculateRainIntensity(double precipitation, double precipitationHour);
    
    //## operation calculateStormIntensity(double,double)
    virtual double calculateStormIntensity(double precipitation, double area);
    
    //## operation getStormPrediction(double,double)
    virtual OMString getStormPrediction(double windSpeed, double rainIntensity);
    
    //## operation getStormTracking(double)
    virtual OMString getStormTracking(double stormIntensity);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const double getRainIntensity(void) const;
    
    //## auto_generated
    void setRainIntensity(const double p_rainIntensity);
    
    //## auto_generated
    const bool getStormDetected(void) const;
    
    //## auto_generated
    void setStormDetected(const bool p_stormDetected);
    
    //## auto_generated
    const double getStormIntensity(void) const;
    
    //## auto_generated
    void setStormIntensity(const double p_stormIntensity);
    
    //## auto_generated
    const double getWindSpeed(void) const;
    
    //## auto_generated
    void setWindSpeed(const double p_windSpeed);
    
    //## auto_generated
    const StormPrediction* getItsStormPrediction(void) const;
    
    //## auto_generated
    const StormPrediction* getItsStormPrediction_1(void) const;
    
    //## auto_generated
    const StormTracking* getItsStormTracking(void) const;
    
    //## auto_generated
    const StormTracking* getItsStormTracking_1(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    double rainIntensity;		//## attribute rainIntensity
    
    bool stormDetected;		//## attribute stormDetected
    
    double stormIntensity;		//## attribute stormIntensity
    
    double windSpeed;		//## attribute windSpeed
    
    ////    Relations and components    ////
    
    StormPrediction itsStormPrediction;		//## classInstance itsStormPrediction
    
    StormPrediction itsStormPrediction_1;		//## classInstance itsStormPrediction_1
    
    StormTracking itsStormTracking;		//## classInstance itsStormTracking
    
    StormTracking itsStormTracking_1;		//## classInstance itsStormTracking_1
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // StormDetected:
    //## statechart_method
    inline RhpBoolean StormDetected_IN(void) const;
    
    // Ready:
    //## statechart_method
    inline RhpBoolean Ready_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum StormDetection_Enum {
        OMNonState = 0,
        StormDetected = 1,
        Ready = 2
    };
//#]

private :

//#[ ignore
    StormDetection_Enum rootState_subState;
    
    StormDetection_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStormDetection : virtual public AOMInstance {
    DECLARE_REACTIVE_META(StormDetection, OMAnimatedStormDetection)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void StormDetected_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Ready_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean StormDetection::rootState_IN(void) const {
    return true;
}

inline RhpBoolean StormDetection::StormDetected_IN(void) const {
    return rootState_subState == StormDetected;
}

inline RhpBoolean StormDetection::Ready_IN(void) const {
    return rootState_subState == Ready;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StormDetection.h
*********************************************************************/
