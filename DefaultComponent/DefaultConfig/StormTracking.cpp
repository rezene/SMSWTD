/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StormTracking
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\StormTracking.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "StormTracking.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormTracking_StormTracking_SERIALIZE OM_NO_OP

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormTracking_doStormTracking_SERIALIZE aomsmethod->addAttribute("stormIntensity", x2String(stormIntensity));
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class StormTracking
StormTracking::StormTracking(void) {
    NOTIFY_CONSTRUCTOR(StormTracking, StormTracking(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormTracking_StormTracking_SERIALIZE);
}

StormTracking::~StormTracking(void) {
    NOTIFY_DESTRUCTOR(~StormTracking, true);
}

OMString StormTracking::doStormTracking(double stormIntensity) {
    NOTIFY_OPERATION(doStormTracking, doStormTracking(double), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormTracking_doStormTracking_SERIALIZE);
    //#[ operation doStormTracking(double)
    if (stormIntensity>0)
    return "Tracking ...";
    else return "None";
    //#]
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(StormTracking, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, OMAnimatedStormTracking)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StormTracking.cpp
*********************************************************************/
