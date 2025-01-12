/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sendDroneDataInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\sendDroneDataInterface.h
*********************************************************************/

#ifndef sendDroneDataInterface_H
#define sendDroneDataInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class sendDroneDataInterface
class sendDroneDataInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsendDroneDataInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    sendDroneDataInterface(void);
    
    //## auto_generated
    virtual ~sendDroneDataInterface(void) = 0;
    
    ////    Operations    ////
    
    //## operation sendDroneData(double,double,double,double,double,double,double)
    virtual void sendDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsendDroneDataInterface : virtual public AOMInstance {
    DECLARE_META(sendDroneDataInterface, OMAnimatedsendDroneDataInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sendDroneDataInterface.h
*********************************************************************/
