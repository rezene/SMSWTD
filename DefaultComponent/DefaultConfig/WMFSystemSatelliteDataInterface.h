/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WMFSystemSatelliteDataInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WMFSystemSatelliteDataInterface.h
*********************************************************************/

#ifndef WMFSystemSatelliteDataInterface_H
#define WMFSystemSatelliteDataInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class WMFSystemSatelliteDataInterface
class WMFSystemSatelliteDataInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWMFSystemSatelliteDataInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    WMFSystemSatelliteDataInterface(void);
    
    //## auto_generated
    virtual ~WMFSystemSatelliteDataInterface(void) = 0;
    
    ////    Operations    ////
    
    //## operation sendToWMFSatelliteData(double,double)
    virtual void sendToWMFSatelliteData(double lat, double lng) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWMFSystemSatelliteDataInterface : virtual public AOMInstance {
    DECLARE_META(WMFSystemSatelliteDataInterface, OMAnimatedWMFSystemSatelliteDataInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WMFSystemSatelliteDataInterface.h
*********************************************************************/
