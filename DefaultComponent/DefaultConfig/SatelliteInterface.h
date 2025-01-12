/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteInterface.h
*********************************************************************/

#ifndef SatelliteInterface_H
#define SatelliteInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## class SatelliteInterface
#include "sendSatelliteDataInterface.h"
//## class sendCommunicationSatelliteDataPort_C
#include "sendCommunicationSatelliteDataInterface.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class SatelliteInterface
class SatelliteInterface : public sendSatelliteDataInterface {
public :

//#[ ignore
    //## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission
    class satelliteInterfacePort_C : public sendSatelliteDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        satelliteInterfacePort_C(void);
        
        //## auto_generated
        virtual ~satelliteInterfacePort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectSatelliteInterface(SatelliteInterface* part);
        
        //## auto_generated
        sendSatelliteDataInterface* getItsSendSatelliteDataInterface(void);
        
        //## auto_generated
        virtual void sendSatelliteData(double lat, double lng);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsSendSatelliteDataInterface(sendSatelliteDataInterface* const p_sendSatelliteDataInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        sendSatelliteDataInterface* itsSendSatelliteDataInterface;		//## link itsSendSatelliteDataInterface
    };
    
    //## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission
    class sendCommunicationSatelliteDataPort_C : public sendCommunicationSatelliteDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        sendCommunicationSatelliteDataPort_C(void);
        
        //## auto_generated
        virtual ~sendCommunicationSatelliteDataPort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        sendCommunicationSatelliteDataInterface* getItsSendCommunicationSatelliteDataInterface(void);
        
        //## auto_generated
        sendCommunicationSatelliteDataInterface* getOutBound(void);
        
        //## auto_generated
        virtual void sendCommunicationSatelliteData(double lat, double lng);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsSendCommunicationSatelliteDataInterface(sendCommunicationSatelliteDataInterface* const p_sendCommunicationSatelliteDataInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        sendCommunicationSatelliteDataInterface* itsSendCommunicationSatelliteDataInterface;		//## link itsSendCommunicationSatelliteDataInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSatelliteInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SatelliteInterface(void);
    
    //## auto_generated
    virtual ~SatelliteInterface(void);
    
    ////    Operations    ////
    
    //## operation sendSatelliteData(double,double)
    virtual void sendSatelliteData(double lat, double lng);
    
    ////    Additional operations    ////
    
    //## auto_generated
    satelliteInterfacePort_C* getSatelliteInterfacePort(void) const;
    
    //## auto_generated
    satelliteInterfacePort_C* get_satelliteInterfacePort(void) const;
    
    //## auto_generated
    sendCommunicationSatelliteDataPort_C* getSendCommunicationSatelliteDataPort(void) const;
    
    //## auto_generated
    sendCommunicationSatelliteDataPort_C* get_sendCommunicationSatelliteDataPort(void) const;

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Relations and components    ////

private :

//#[ ignore
    satelliteInterfacePort_C satelliteInterfacePort;
    
    sendCommunicationSatelliteDataPort_C sendCommunicationSatelliteDataPort;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSatelliteInterface : public OMAnimatedsendSatelliteDataInterface {
    DECLARE_META(SatelliteInterface, OMAnimatedSatelliteInterface)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteInterface.h
*********************************************************************/
