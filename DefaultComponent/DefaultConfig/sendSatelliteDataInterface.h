/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sendSatelliteDataInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\sendSatelliteDataInterface.h
*********************************************************************/

#ifndef sendSatelliteDataInterface_H
#define sendSatelliteDataInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class sendSatelliteDataInterface
class sendSatelliteDataInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsendSatelliteDataInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    sendSatelliteDataInterface(void);
    
    //## auto_generated
    virtual ~sendSatelliteDataInterface(void) = 0;
    
    ////    Operations    ////
    
    //## operation sendSatelliteData(double,double)
    virtual void sendSatelliteData(double lat, double lng) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsendSatelliteDataInterface : virtual public AOMInstance {
    DECLARE_META(sendSatelliteDataInterface, OMAnimatedsendSatelliteDataInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sendSatelliteDataInterface.h
*********************************************************************/
