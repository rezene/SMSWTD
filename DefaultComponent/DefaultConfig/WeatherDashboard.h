/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WeatherDashboard
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WeatherDashboard.h
*********************************************************************/

#ifndef WeatherDashboard_H
#define WeatherDashboard_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class WeatherDashboard
class WeatherDashboard {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWeatherDashboard;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    WeatherDashboard(void);
    
    //## auto_generated
    virtual ~WeatherDashboard(void);
    
    ////    Operations    ////
    
    //## operation displayArea(double)
    virtual void displayArea(double area);
    
    //## operation displayHumidity(double)
    virtual void displayHumidity(double humidity);
    
    //## operation displayLat(double)
    virtual void displayLat(double lat);
    
    //## operation displayLng(double)
    virtual void displayLng(double lng);
    
    //## operation displayPrecipitation(double)
    virtual void displayPrecipitation(double precipitation);
    
    //## operation displayRainIntensity(double)
    virtual void displayRainIntensity(double rainIntensity);
    
    //## operation displayStormIntensity(double)
    virtual void displayStormIntensity(double stormIntensity);
    
    //## operation displayStormPrediction(RhpString)
    virtual void displayStormPrediction(const RhpString& stormPrediction);
    
    //## operation displayStormTracking(OMString)
    virtual void displayStormTracking(const OMString& trackingStatus);
    
    //## operation displayTemprature(double)
    virtual void displayTemprature(double temp);
    
    //## operation displayWindDirection(double)
    virtual void displayWindDirection(double windDirection);
    
    //## operation displayWindSpeed(double)
    virtual void displayWindSpeed(double windSpeed);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWeatherDashboard : virtual public AOMInstance {
    DECLARE_META(WeatherDashboard, OMAnimatedWeatherDashboard)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WeatherDashboard.h
*********************************************************************/
