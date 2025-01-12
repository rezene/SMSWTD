/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataAcquisition
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DataAcquisition.h
*********************************************************************/

#ifndef DataAcquisition_H
#define DataAcquisition_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "Mission.h"
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <omthread.h>
//## class DataAcquisition
#include "sendCommunicationDroneDataInterface.h"
//## class DataAcquisition
#include "sendCommunicationSatelliteDataInterface.h"
//## class dataAcquisitionToWMFPort_C
#include "WMFSystemInterface.h"
//## class dataAcquisitionToWMFPort_C
#include "WMFSystemSatelliteDataInterface.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class DataAcquisition
class DataAcquisition : public OMReactive, public sendCommunicationSatelliteDataInterface, public sendCommunicationDroneDataInterface {
public :

//#[ ignore
    //## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission
    class dataAcquisitionPort_C : public sendCommunicationDroneDataInterface, public sendCommunicationSatelliteDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        dataAcquisitionPort_C(void);
        
        //## auto_generated
        virtual ~dataAcquisitionPort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectDataAcquisition(DataAcquisition* part);
        
        //## auto_generated
        sendCommunicationDroneDataInterface* getItsSendCommunicationDroneDataInterface(void);
        
        //## auto_generated
        sendCommunicationSatelliteDataInterface* getItsSendCommunicationSatelliteDataInterface(void);
        
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
    
    //## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission
    class dataAcquisitionToWMFPort_C : public WMFSystemInterface, public WMFSystemSatelliteDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        dataAcquisitionToWMFPort_C(void);
        
        //## auto_generated
        virtual ~dataAcquisitionToWMFPort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SendToWMFStormAndWeatherData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr);
        
        //## auto_generated
        WMFSystemInterface* getItsWMFSystemInterface(void);
        
        //## auto_generated
        WMFSystemSatelliteDataInterface* getItsWMFSystemSatelliteDataInterface(void);
        
        //## auto_generated
        DataAcquisition::dataAcquisitionToWMFPort_C* getOutBound(void);
        
        //## auto_generated
        virtual void sendToWMFSatelliteData(double lat, double lng);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsWMFSystemInterface(WMFSystemInterface* const p_WMFSystemInterface);
        
        //## auto_generated
        void setItsWMFSystemSatelliteDataInterface(WMFSystemSatelliteDataInterface* const p_WMFSystemSatelliteDataInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        WMFSystemInterface* itsWMFSystemInterface;		//## link itsWMFSystemInterface
        
        WMFSystemSatelliteDataInterface* itsWMFSystemSatelliteDataInterface;		//## link itsWMFSystemSatelliteDataInterface
    };
//#]

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataAcquisition;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit DataAcquisition(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~DataAcquisition(void);
    
    ////    Operations    ////
    
    ////    Additional operations    ////
    
    //## auto_generated
    const bool getDroneDataReceived(void) const;
    
    //## auto_generated
    void setDroneDataReceived(const bool p_droneDataReceived);
    
    //## auto_generated
    const bool getSatelliteDataReceived(void) const;
    
    //## auto_generated
    void setSatelliteDataReceived(const bool p_satelliteDataReceived);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    bool droneDataReceived;		//## attribute droneDataReceived
    
    bool satelliteDataReceived;		//## attribute satelliteDataReceived
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    ////    Framework    ////

public :

    //## operation sendCommunicationDroneData(double,double,double,double,double,double,double)
    virtual void sendCommunicationDroneData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr);
    
    //## operation sendCommunicationSatelliteData(double,double)
    virtual void sendCommunicationSatelliteData(double lat, double lng);
    
    //## auto_generated
    dataAcquisitionPort_C* getDataAcquisitionPort(void) const;
    
    //## auto_generated
    dataAcquisitionPort_C* get_dataAcquisitionPort(void) const;
    
    //## auto_generated
    dataAcquisitionToWMFPort_C* getDataAcquisitionToWMFPort(void) const;
    
    //## auto_generated
    dataAcquisitionToWMFPort_C* get_dataAcquisitionToWMFPort(void) const;

protected :

    //## auto_generated
    void initRelations(void);

private :

//#[ ignore
    dataAcquisitionPort_C dataAcquisitionPort;
    
    dataAcquisitionToWMFPort_C dataAcquisitionToWMFPort;
//#]

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // SatelliteDataPreporcessing:
    //## statechart_method
    inline RhpBoolean SatelliteDataPreporcessing_IN(void) const;
    
    // Ready:
    //## statechart_method
    inline RhpBoolean Ready_IN(void) const;
    
    // DroneDataPreprocessing:
    //## statechart_method
    inline RhpBoolean DroneDataPreprocessing_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
//#[ ignore
    enum DataAcquisition_Enum {
        OMNonState = 0,
        SatelliteDataPreporcessing = 1,
        Ready = 2,
        DroneDataPreprocessing = 3
    };
//#]

private :

//#[ ignore
    DataAcquisition_Enum rootState_subState;
    
    DataAcquisition_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataAcquisition : public OMAnimatedsendCommunicationSatelliteDataInterface, public OMAnimatedsendCommunicationDroneDataInterface {
    DECLARE_REACTIVE_META(DataAcquisition, OMAnimatedDataAcquisition)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SatelliteDataPreporcessing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Ready_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DroneDataPreprocessing_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean DataAcquisition::rootState_IN(void) const {
    return true;
}

inline RhpBoolean DataAcquisition::SatelliteDataPreporcessing_IN(void) const {
    return rootState_subState == SatelliteDataPreporcessing;
}

inline RhpBoolean DataAcquisition::Ready_IN(void) const {
    return rootState_subState == Ready;
}

inline RhpBoolean DataAcquisition::DroneDataPreprocessing_IN(void) const {
    return rootState_subState == DroneDataPreprocessing;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataAcquisition.h
*********************************************************************/
