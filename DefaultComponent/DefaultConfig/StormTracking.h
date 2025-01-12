/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StormTracking
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\StormTracking.h
*********************************************************************/

#ifndef StormTracking_H
#define StormTracking_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class StormTracking
class StormTracking {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStormTracking;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    StormTracking(void);
    
    //## auto_generated
    virtual ~StormTracking(void);
    
    ////    Operations    ////
    
    //## operation doStormTracking(double)
    virtual OMString doStormTracking(double stormIntensity);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStormTracking : virtual public AOMInstance {
    DECLARE_META(StormTracking, OMAnimatedStormTracking)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StormTracking.h
*********************************************************************/
