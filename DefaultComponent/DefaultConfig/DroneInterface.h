/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DroneInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DroneInterface.h
*********************************************************************/

#ifndef DroneInterface_H
#define DroneInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## class DroneInterface
#include "sendDroneDataInterface.h"
//## class sendCommunicationDronePort_C
#include "sendCommunicationDroneDataInterface.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class DroneInterface
class DroneInterface : public sendDroneDataInterface {
public :

//#[ ignore
    //## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission
    class droneInterfacePort_C : public sendDroneDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        droneInterfacePort_C(void);
        
        //## auto_generated
        virtual ~droneInterfacePort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectDroneInterface(DroneInterface* part);
        
        //## auto_generated
        sendDroneDataInterface* getItsSendDroneDataInterface(void);
        
        //## auto_generated
        virtual void sendDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsSendDroneDataInterface(sendDroneDataInterface* const p_sendDroneDataInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        sendDroneDataInterface* itsSendDroneDataInterface;		//## link itsSendDroneDataInterface
    };
    
    //## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission
    class sendCommunicationDronePort_C : public sendCommunicationDroneDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        sendCommunicationDronePort_C(void);
        
        //## auto_generated
        virtual ~sendCommunicationDronePort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        sendCommunicationDroneDataInterface* getItsSendCommunicationDroneDataInterface(void);
        
        //## auto_generated
        sendCommunicationDroneDataInterface* getOutBound(void);
        
        //## auto_generated
        virtual void sendCommunicationDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsSendCommunicationDroneDataInterface(sendCommunicationDroneDataInterface* const p_sendCommunicationDroneDataInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        sendCommunicationDroneDataInterface* itsSendCommunicationDroneDataInterface;		//## link itsSendCommunicationDroneDataInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedDroneInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DroneInterface(void);
    
    //## auto_generated
    virtual ~DroneInterface(void);
    
    ////    Operations    ////
    
    //## operation sendDroneData(double,double,double,double,double,double,double)
    virtual void sendDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr);
    
    ////    Additional operations    ////
    
    //## auto_generated
    droneInterfacePort_C* getDroneInterfacePort(void) const;
    
    //## auto_generated
    droneInterfacePort_C* get_droneInterfacePort(void) const;
    
    //## auto_generated
    sendCommunicationDronePort_C* getSendCommunicationDronePort(void) const;
    
    //## auto_generated
    sendCommunicationDronePort_C* get_sendCommunicationDronePort(void) const;

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Relations and components    ////

private :

//#[ ignore
    droneInterfacePort_C droneInterfacePort;
    
    sendCommunicationDronePort_C sendCommunicationDronePort;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDroneInterface : public OMAnimatedsendDroneDataInterface {
    DECLARE_META(DroneInterface, OMAnimatedDroneInterface)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DroneInterface.h
*********************************************************************/
