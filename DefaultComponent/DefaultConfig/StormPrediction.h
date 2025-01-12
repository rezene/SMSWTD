/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StormPrediction
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\StormPrediction.h
*********************************************************************/

#ifndef StormPrediction_H
#define StormPrediction_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class StormPrediction
class StormPrediction {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStormPrediction;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    StormPrediction(void);
    
    //## auto_generated
    virtual ~StormPrediction(void);
    
    ////    Operations    ////
    
    //## operation doStormPrediction(double,double)
    virtual OMString doStormPrediction(double windSpeed, double rainIntensity);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStormPrediction : virtual public AOMInstance {
    DECLARE_META(StormPrediction, OMAnimatedStormPrediction)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StormPrediction.h
*********************************************************************/
