/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sendCommunicationDroneDataInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\sendCommunicationDroneDataInterface.h
*********************************************************************/

#ifndef sendCommunicationDroneDataInterface_H
#define sendCommunicationDroneDataInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class sendCommunicationDroneDataInterface
class sendCommunicationDroneDataInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsendCommunicationDroneDataInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    sendCommunicationDroneDataInterface(void);
    
    //## auto_generated
    virtual ~sendCommunicationDroneDataInterface(void) = 0;
    
    ////    Operations    ////
    
    //## operation sendCommunicationDroneData(double,double,double,double,double,double,double)
    virtual void sendCommunicationDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsendCommunicationDroneDataInterface : virtual public AOMInstance {
    DECLARE_META(sendCommunicationDroneDataInterface, OMAnimatedsendCommunicationDroneDataInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sendCommunicationDroneDataInterface.h
*********************************************************************/
