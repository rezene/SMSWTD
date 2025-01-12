/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationInterface
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\CommunicationInterface.h
*********************************************************************/

#ifndef CommunicationInterface_H
#define CommunicationInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## classInstance itsDroneInterface
#include "DroneInterface.h"
//## classInstance itsSatelliteInterface
#include "SatelliteInterface.h"
//## class CommunicationInterface
#include "sendDroneDataInterface.h"
//## class CommunicationInterface
#include "sendSatelliteDataInterface.h"
//## class communicationInterfaceInternalPort_C
#include "sendCommunicationDroneDataInterface.h"
//## class communicationInterfaceInternalPort_C
#include "sendCommunicationSatelliteDataInterface.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class CommunicationInterface
class CommunicationInterface : public sendDroneDataInterface, public sendSatelliteDataInterface {
public :

//#[ ignore
    //## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission
    class communicationInterfaceExternalPort_C : public sendSatelliteDataInterface, public sendDroneDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        communicationInterfaceExternalPort_C(void);
        
        //## auto_generated
        virtual ~communicationInterfaceExternalPort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        sendDroneDataInterface* getItsSendDroneDataInterface(void);
        
        //## auto_generated
        sendSatelliteDataInterface* getItsSendSatelliteDataInterface(void);
        
        //## auto_generated
        virtual void sendDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr);
        
        //## auto_generated
        virtual void sendSatelliteData(double lat, double lng);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsSendDroneDataInterface(sendDroneDataInterface* const p_sendDroneDataInterface);
        
        //## auto_generated
        void setItsSendSatelliteDataInterface(sendSatelliteDataInterface* const p_sendSatelliteDataInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        sendDroneDataInterface* itsSendDroneDataInterface;		//## link itsSendDroneDataInterface
        
        sendSatelliteDataInterface* itsSendSatelliteDataInterface;		//## link itsSendSatelliteDataInterface
    };
    
    //## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission
    class communicationInterfaceInternalPort_C : public sendCommunicationSatelliteDataInterface, public sendCommunicationDroneDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        communicationInterfaceInternalPort_C(void);
        
        //## auto_generated
        virtual ~communicationInterfaceInternalPort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        sendCommunicationDroneDataInterface* getItsSendCommunicationDroneDataInterface(void);
        
        //## auto_generated
        sendCommunicationSatelliteDataInterface* getItsSendCommunicationSatelliteDataInterface(void);
        
        //## auto_generated
        CommunicationInterface::communicationInterfaceInternalPort_C* getOutBound(void);
        
        //## auto_generated
        virtual void sendCommunicationDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr);
        
        //## auto_generated
        virtual void sendCommunicationSatelliteData(double lat, double lng);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsSendCommunicationDroneDataInterface(sendCommunicationDroneDataInterface* const p_sendCommunicationDroneDataInterface);
        
        //## auto_generated
        void setItsSendCommunicationSatelliteDataInterface(sendCommunicationSatelliteDataInterface* const p_sendCommunicationSatelliteDataInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        sendCommunicationDroneDataInterface* itsSendCommunicationDroneDataInterface;		//## link itsSendCommunicationDroneDataInterface
        
        sendCommunicationSatelliteDataInterface* itsSendCommunicationSatelliteDataInterface;		//## link itsSendCommunicationSatelliteDataInterface
    };
//#]

#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCommunicationInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CommunicationInterface(void);
    
    //## auto_generated
    virtual ~CommunicationInterface(void);
    
    ////    Operations    ////
    
    //## operation sendDroneData(double,double,double,double,double,double,double)
    virtual void sendDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr);
    
    //## operation sendSatelliteData(double,double)
    virtual void sendSatelliteData(double lat, double lng);
    
    ////    Additional operations    ////
    
    //## auto_generated
    communicationInterfaceExternalPort_C* getCommunicationInterfaceExternalPort(void) const;
    
    //## auto_generated
    communicationInterfaceExternalPort_C* get_communicationInterfaceExternalPort(void) const;
    
    //## auto_generated
    communicationInterfaceInternalPort_C* getCommunicationInterfaceInternalPort(void) const;
    
    //## auto_generated
    communicationInterfaceInternalPort_C* get_communicationInterfaceInternalPort(void) const;
    
    //## auto_generated
    const DroneInterface* getItsDroneInterface(void) const;
    
    //## auto_generated
    const DroneInterface* getItsDroneInterface_1(void) const;
    
    //## auto_generated
    const SatelliteInterface* getItsSatelliteInterface(void) const;
    
    //## auto_generated
    const SatelliteInterface* getItsSatelliteInterface_1(void) const;

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Relations and components    ////

private :

//#[ ignore
    communicationInterfaceExternalPort_C communicationInterfaceExternalPort;
    
    communicationInterfaceInternalPort_C communicationInterfaceInternalPort;
//#]

    DroneInterface itsDroneInterface;		//## classInstance itsDroneInterface
    
    DroneInterface itsDroneInterface_1;		//## classInstance itsDroneInterface_1
    
    SatelliteInterface itsSatelliteInterface;		//## classInstance itsSatelliteInterface
    
    SatelliteInterface itsSatelliteInterface_1;		//## classInstance itsSatelliteInterface_1
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCommunicationInterface : public OMAnimatedsendDroneDataInterface, public OMAnimatedsendSatelliteDataInterface {
    DECLARE_META(CommunicationInterface, OMAnimatedCommunicationInterface)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationInterface.h
*********************************************************************/
