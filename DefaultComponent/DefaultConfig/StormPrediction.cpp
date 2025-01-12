/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StormPrediction
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\StormPrediction.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "StormPrediction.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormPrediction_doStormPrediction_SERIALIZE \
    aomsmethod->addAttribute("windSpeed", x2String(windSpeed));\
    aomsmethod->addAttribute("rainIntensity", x2String(rainIntensity));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormPrediction_StormPrediction_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class StormPrediction
StormPrediction::StormPrediction(void) {
    NOTIFY_CONSTRUCTOR(StormPrediction, StormPrediction(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormPrediction_StormPrediction_SERIALIZE);
}

StormPrediction::~StormPrediction(void) {
    NOTIFY_DESTRUCTOR(~StormPrediction, true);
}

OMString StormPrediction::doStormPrediction(double windSpeed, double rainIntensity) {
    NOTIFY_OPERATION(doStormPrediction, doStormPrediction(double,double), 2, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormPrediction_doStormPrediction_SERIALIZE);
    //#[ operation doStormPrediction(double,double)
    if (windSpeed < 20 && rainIntensity < 2.5)
            return "Small";
        else if (windSpeed >= 20 && windSpeed <= 40 && rainIntensity >= 2.5 && rainIntensity < 7.6)
            return "Average";
        else if (windSpeed > 40 && windSpeed <= 70 && rainIntensity >= 7.6 && rainIntensity < 20)
            return "Danger";
        else if (windSpeed > 70 && rainIntensity > 20)
            return "Very Danger";
        else
            return "None";
    //#]
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(StormPrediction, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, OMAnimatedStormPrediction)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StormPrediction.cpp
*********************************************************************/
