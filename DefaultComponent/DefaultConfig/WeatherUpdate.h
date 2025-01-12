/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WeatherUpdate
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WeatherUpdate.h
*********************************************************************/

#ifndef WeatherUpdate_H
#define WeatherUpdate_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class WeatherUpdate
class WeatherUpdate {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWeatherUpdate;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    WeatherUpdate(void);
    
    //## auto_generated
    virtual ~WeatherUpdate(void);
    
    ////    Operations    ////
    
    //## operation displayWeather()
    virtual void displayWeather(void);
    
    //## operation updateWeather(double,double,double,double,double,double)
    virtual void updateWeather(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWeatherUpdate : virtual public AOMInstance {
    DECLARE_META(WeatherUpdate, OMAnimatedWeatherUpdate)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WeatherUpdate.h
*********************************************************************/
