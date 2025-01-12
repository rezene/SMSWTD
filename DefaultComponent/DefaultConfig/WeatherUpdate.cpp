/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WeatherUpdate
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WeatherUpdate.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "WeatherUpdate.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherUpdate_updateWeather_SERIALIZE \
    aomsmethod->addAttribute("temprature", x2String(temprature));\
    aomsmethod->addAttribute("humidity", x2String(humidity));\
    aomsmethod->addAttribute("windSpeed", x2String(windSpeed));\
    aomsmethod->addAttribute("windDirection", x2String(windDirection));\
    aomsmethod->addAttribute("precipitation", x2String(precipitation));\
    aomsmethod->addAttribute("area", x2String(area));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherUpdate_WeatherUpdate_SERIALIZE OM_NO_OP

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherUpdate_displayWeather_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class WeatherUpdate
WeatherUpdate::WeatherUpdate(void) {
    NOTIFY_CONSTRUCTOR(WeatherUpdate, WeatherUpdate(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherUpdate_WeatherUpdate_SERIALIZE);
}

WeatherUpdate::~WeatherUpdate(void) {
    NOTIFY_DESTRUCTOR(~WeatherUpdate, true);
}

void WeatherUpdate::displayWeather(void) {
    NOTIFY_OPERATION(displayWeather, displayWeather(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherUpdate_displayWeather_SERIALIZE);
    //#[ operation displayWeather()
    //#]
}

void WeatherUpdate::updateWeather(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area) {
    NOTIFY_OPERATION(updateWeather, updateWeather(double,double,double,double,double,double), 6, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherUpdate_updateWeather_SERIALIZE);
    //#[ operation updateWeather(double,double,double,double,double,double)
    //#]
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(WeatherUpdate, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, OMAnimatedWeatherUpdate)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WeatherUpdate.cpp
*********************************************************************/
