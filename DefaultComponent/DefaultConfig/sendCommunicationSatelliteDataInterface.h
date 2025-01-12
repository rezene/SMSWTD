/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sendCommunicationSatelliteDataInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\sendCommunicationSatelliteDataInterface.h
*********************************************************************/

#ifndef sendCommunicationSatelliteDataInterface_H
#define sendCommunicationSatelliteDataInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class sendCommunicationSatelliteDataInterface
class sendCommunicationSatelliteDataInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsendCommunicationSatelliteDataInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    sendCommunicationSatelliteDataInterface(void);
    
    //## auto_generated
    virtual ~sendCommunicationSatelliteDataInterface(void) = 0;
    
    ////    Operations    ////
    
    //## operation sendCommunicationSatelliteData(double,double)
    virtual void sendCommunicationSatelliteData(double lat, double lng) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsendCommunicationSatelliteDataInterface : virtual public AOMInstance {
    DECLARE_META(sendCommunicationSatelliteDataInterface, OMAnimatedsendCommunicationSatelliteDataInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sendCommunicationSatelliteDataInterface.h
*********************************************************************/
