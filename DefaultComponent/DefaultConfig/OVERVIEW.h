/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: OVERVIEW
//!	Generated Date	: Mon, 6, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\OVERVIEW.h
*********************************************************************/

#ifndef OVERVIEW_H
#define OVERVIEW_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## classInstance itsCommunicationInterface
class CommunicationInterface;

//## classInstance itsDataAcquisition
class DataAcquisition;

//## classInstance itsDrone
class Drone;

//## auto_generated
class DroneInterface;

//## classInstance itsSatellite
class Satellite;

//## auto_generated
class SatelliteInterface;

//## classInstance itsStormDetection
class StormDetection;

//## classInstance itsStormPrediction
class StormPrediction;

//## classInstance itsStormTracking
class StormTracking;

//## classInstance itsWMFSystem
class WMFSystem;

//## auto_generated
class WMFSystemInterface;

//## auto_generated
class WMFSystemSatelliteDataInterface;

//## classInstance itsWeatherDashboard
class WeatherDashboard;

//## classInstance itsWeatherUpdate
class WeatherUpdate;

//## auto_generated
class sendCommunicationDroneDataInterface;

//## auto_generated
class sendCommunicationSatelliteDataInterface;

//## auto_generated
class sendDroneDataInterface;

//## auto_generated
class sendSatelliteDataInterface;

//## package SMSWTD::DESIGN::WMF::OVERVIEW


//## classInstance itsCommunicationInterface
extern CommunicationInterface itsCommunicationInterface;

//## classInstance itsCommunicationInterface_1
extern CommunicationInterface itsCommunicationInterface_1;

//## classInstance itsDataAcquisition
extern DataAcquisition itsDataAcquisition;

//## classInstance itsDataAcquisition_1
extern DataAcquisition itsDataAcquisition_1;

//## classInstance itsDrone
extern Drone itsDrone;

//## classInstance itsDrone_1
extern Drone itsDrone_1;

//## classInstance itsSatellite
extern Satellite itsSatellite;

//## classInstance itsSatellite_1
extern Satellite itsSatellite_1;

//## classInstance itsStormDetection
extern StormDetection itsStormDetection;

//## classInstance itsStormDetection_1
extern StormDetection itsStormDetection_1;

//## classInstance itsStormPrediction
extern StormPrediction itsStormPrediction;

//## classInstance itsStormPrediction_1
extern StormPrediction itsStormPrediction_1;

//## classInstance itsStormTracking
extern StormTracking itsStormTracking;

//## classInstance itsStormTracking_1
extern StormTracking itsStormTracking_1;

//## classInstance itsWMFSystem
extern WMFSystem itsWMFSystem;

//## classInstance itsWeatherDashboard
extern WeatherDashboard itsWeatherDashboard;

//## classInstance itsWeatherDashboard_1
extern WeatherDashboard itsWeatherDashboard_1;

//## classInstance itsWeatherUpdate
extern WeatherUpdate itsWeatherUpdate;

//## classInstance itsWeatherUpdate_1
extern WeatherUpdate itsWeatherUpdate_1;

//## auto_generated
void OVERVIEW_initRelations(void);

//## auto_generated
bool OVERVIEW_startBehavior(void);

//#[ ignore
class OVERVIEW_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    OVERVIEW_OMInitializer(void);
    
    //## auto_generated
    ~OVERVIEW_OMInitializer(void);
};
//#]

//## event evtSatelliteTrunOn()
class evtSatelliteTrunOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevtSatelliteTrunOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evtSatelliteTrunOn(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevtSatelliteTrunOn : virtual public AOMEvent {
    DECLARE_META_EVENT(evtSatelliteTrunOn)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evtSatelliteTrunOn_OVERVIEW_WMF_DESIGN_SMSWTD_id;
//#]

//## event evtSatelliteSendData()
class evtSatelliteSendData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevtSatelliteSendData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evtSatelliteSendData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevtSatelliteSendData : virtual public AOMEvent {
    DECLARE_META_EVENT(evtSatelliteSendData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evtSatelliteSendData_OVERVIEW_WMF_DESIGN_SMSWTD_id;
//#]

//## event evtProcessSensorData()
class evtProcessSensorData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevtProcessSensorData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evtProcessSensorData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevtProcessSensorData : virtual public AOMEvent {
    DECLARE_META_EVENT(evtProcessSensorData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evtProcessSensorData_OVERVIEW_WMF_DESIGN_SMSWTD_id;
//#]

//## event evtGetNextSatelliteData()
class evtGetNextSatelliteData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevtGetNextSatelliteData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evtGetNextSatelliteData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevtGetNextSatelliteData : virtual public AOMEvent {
    DECLARE_META_EVENT(evtGetNextSatelliteData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evtGetNextSatelliteData_OVERVIEW_WMF_DESIGN_SMSWTD_id;
//#]

//## event evtGetNextDroneData()
class evtGetNextDroneData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevtGetNextDroneData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evtGetNextDroneData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevtGetNextDroneData : virtual public AOMEvent {
    DECLARE_META_EVENT(evtGetNextDroneData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evtGetNextDroneData_OVERVIEW_WMF_DESIGN_SMSWTD_id;
//#]

//## event evtStorming()
class evtStorming : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevtStorming;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evtStorming(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevtStorming : virtual public AOMEvent {
    DECLARE_META_EVENT(evtStorming)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evtStorming_OVERVIEW_WMF_DESIGN_SMSWTD_id;
//#]

//## event evtNoStorming()
class evtNoStorming : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevtNoStorming;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evtNoStorming(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevtNoStorming : virtual public AOMEvent {
    DECLARE_META_EVENT(evtNoStorming)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evtNoStorming_OVERVIEW_WMF_DESIGN_SMSWTD_id;
//#]

//## event evtTurnDroneOn()
class evtTurnDroneOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevtTurnDroneOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evtTurnDroneOn(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevtTurnDroneOn : virtual public AOMEvent {
    DECLARE_META_EVENT(evtTurnDroneOn)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evtTurnDroneOn_OVERVIEW_WMF_DESIGN_SMSWTD_id;
//#]

//## event evtTrrnDroneOff()
class evtTrrnDroneOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevtTrrnDroneOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evtTrrnDroneOff(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevtTrrnDroneOff : virtual public AOMEvent {
    DECLARE_META_EVENT(evtTrrnDroneOff)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evtTrrnDroneOff_OVERVIEW_WMF_DESIGN_SMSWTD_id;
//#]

//## event updateTemprature()
class updateTemprature : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedupdateTemprature;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    updateTemprature(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedupdateTemprature : virtual public AOMEvent {
    DECLARE_META_EVENT(updateTemprature)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID updateTemprature_OVERVIEW_WMF_DESIGN_SMSWTD_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\OVERVIEW.h
*********************************************************************/
