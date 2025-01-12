/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WeatherDashboard
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WeatherDashboard.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "WeatherDashboard.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_WeatherDashboard_SERIALIZE OM_NO_OP

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayArea_SERIALIZE aomsmethod->addAttribute("area", x2String(area));

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayHumidity_SERIALIZE aomsmethod->addAttribute("humidity", x2String(humidity));

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayLat_SERIALIZE aomsmethod->addAttribute("lat", x2String(lat));

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayLng_SERIALIZE aomsmethod->addAttribute("lng", x2String(lng));

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayPrecipitation_SERIALIZE aomsmethod->addAttribute("precipitation", x2String(precipitation));

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayRainIntensity_SERIALIZE aomsmethod->addAttribute("rainIntensity", x2String(rainIntensity));

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayStormIntensity_SERIALIZE aomsmethod->addAttribute("stormIntensity", x2String(stormIntensity));

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayStormPrediction_SERIALIZE aomsmethod->addAttribute("stormPrediction", x2String(stormPrediction));

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayStormTracking_SERIALIZE aomsmethod->addAttribute("trackingStatus", x2String(trackingStatus));

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayTemprature_SERIALIZE aomsmethod->addAttribute("temp", x2String(temp));

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayWindDirection_SERIALIZE aomsmethod->addAttribute("windDirection", x2String(windDirection));

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayWindSpeed_SERIALIZE aomsmethod->addAttribute("windSpeed", x2String(windSpeed));
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class WeatherDashboard
WeatherDashboard::WeatherDashboard(void) {
    NOTIFY_CONSTRUCTOR(WeatherDashboard, WeatherDashboard(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_WeatherDashboard_SERIALIZE);
}

WeatherDashboard::~WeatherDashboard(void) {
    NOTIFY_DESTRUCTOR(~WeatherDashboard, true);
}

void WeatherDashboard::displayArea(double area) {
    NOTIFY_OPERATION(displayArea, displayArea(double), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayArea_SERIALIZE);
    //#[ operation displayArea(double)
    std::cout<<"Area: "<<area<<"Km2"<<std::endl;
    //#]
}

void WeatherDashboard::displayHumidity(double humidity) {
    NOTIFY_OPERATION(displayHumidity, displayHumidity(double), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayHumidity_SERIALIZE);
    //#[ operation displayHumidity(double)
    std::cout<<"Humidity: "<<humidity<<"%"<<std::endl;
    
    //#]
}

void WeatherDashboard::displayLat(double lat) {
    NOTIFY_OPERATION(displayLat, displayLat(double), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayLat_SERIALIZE);
    //#[ operation displayLat(double)
    std::cout<<"Lat .."<<lat <<std::endl;
    //#]
}

void WeatherDashboard::displayLng(double lng) {
    NOTIFY_OPERATION(displayLng, displayLng(double), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayLng_SERIALIZE);
    //#[ operation displayLng(double)
    std::cout<<"Lng .."<<lng <<std::endl;
    //#]
}

void WeatherDashboard::displayPrecipitation(double precipitation) {
    NOTIFY_OPERATION(displayPrecipitation, displayPrecipitation(double), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayPrecipitation_SERIALIZE);
    //#[ operation displayPrecipitation(double)
    std::cout<<"Precipitation: "<<precipitation<<"mm"<<std::endl;
    //#]
}

void WeatherDashboard::displayRainIntensity(double rainIntensity) {
    NOTIFY_OPERATION(displayRainIntensity, displayRainIntensity(double), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayRainIntensity_SERIALIZE);
    //#[ operation displayRainIntensity(double)
    std::cout<<"Rain Intensity: "<<rainIntensity<<"mm/hr"<<std::endl;
    //#]
}

void WeatherDashboard::displayStormIntensity(double stormIntensity) {
    NOTIFY_OPERATION(displayStormIntensity, displayStormIntensity(double), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayStormIntensity_SERIALIZE);
    //#[ operation displayStormIntensity(double)
    std::cout<<"Storm Intensity: "<<stormIntensity<<"mm/km2"<<std::endl;
    //#]
}

void WeatherDashboard::displayStormPrediction(const RhpString& stormPrediction) {
    NOTIFY_OPERATION(displayStormPrediction, displayStormPrediction(const RhpString&), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayStormPrediction_SERIALIZE);
    //#[ operation displayStormPrediction(RhpString)
    std::cout<<"Storm Prediction: "<<stormPrediction<<std::endl;
    //#]
}

void WeatherDashboard::displayStormTracking(const OMString& trackingStatus) {
    NOTIFY_OPERATION(displayStormTracking, displayStormTracking(const OMString&), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayStormTracking_SERIALIZE);
    //#[ operation displayStormTracking(OMString)
    std::cout<<"Storm Track: "<<trackingStatus<<std::endl;
    //#]
}

void WeatherDashboard::displayTemprature(double temp) {
    NOTIFY_OPERATION(displayTemprature, displayTemprature(double), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayTemprature_SERIALIZE);
    //#[ operation displayTemprature(double)
    std::cout<<"Temprature: "<<temp<<" oC"<<std::endl;
    //this->temprature= temp;
    
    
    //#]
}

void WeatherDashboard::displayWindDirection(double windDirection) {
    NOTIFY_OPERATION(displayWindDirection, displayWindDirection(double), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayWindDirection_SERIALIZE);
    //#[ operation displayWindDirection(double)
    std::cout<<"Wind Direction: "<<windDirection<<"Degree"<<std::endl;
    //#]
}

void WeatherDashboard::displayWindSpeed(double windSpeed) {
    NOTIFY_OPERATION(displayWindSpeed, displayWindSpeed(double), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WeatherDashboard_displayWindSpeed_SERIALIZE);
    //#[ operation displayWindSpeed(double)
    std::cout<<"Wind Speed: "<<windSpeed<<"Km/h"<<std::endl;
    //#]
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(WeatherDashboard, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, OMAnimatedWeatherDashboard)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WeatherDashboard.cpp
*********************************************************************/
