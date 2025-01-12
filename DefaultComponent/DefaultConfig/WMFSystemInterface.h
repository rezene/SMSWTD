/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WMFSystemInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WMFSystemInterface.h
*********************************************************************/

#ifndef WMFSystemInterface_H
#define WMFSystemInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class WMFSystemInterface
class WMFSystemInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWMFSystemInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    WMFSystemInterface(void);
    
    //## auto_generated
    virtual ~WMFSystemInterface(void) = 0;
    
    ////    Operations    ////
    
    //## operation SendToWMFStormAndWeatherData(double,double,double,double,double,double,double)
    virtual void SendToWMFStormAndWeatherData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWMFSystemInterface : virtual public AOMInstance {
    DECLARE_META(WMFSystemInterface, OMAnimatedWMFSystemInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WMFSystemInterface.h
*********************************************************************/
