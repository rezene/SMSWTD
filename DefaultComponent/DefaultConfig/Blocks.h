/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Blocks
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Blocks.h
*********************************************************************/

#ifndef Blocks_H
#define Blocks_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
#include "SERVICES_UCS.h"
//## package SMSWTD::ANALYSIS::SERVICES_UCS::Blocks



//## event evtMakeSatelliteReady()
class evtMakeSatelliteReady : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevtMakeSatelliteReady;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evtMakeSatelliteReady(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevtMakeSatelliteReady : virtual public AOMEvent {
    DECLARE_META_EVENT(evtMakeSatelliteReady)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evtMakeSatelliteReady_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id;
//#]

//## event evtSatelliteOff()
class evtSatelliteOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevtSatelliteOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evtSatelliteOff(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevtSatelliteOff : virtual public AOMEvent {
    DECLARE_META_EVENT(evtSatelliteOff)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evtSatelliteOff_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id;
//#]

//## event evtCaptureData()
class evtCaptureData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevtCaptureData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evtCaptureData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevtCaptureData : virtual public AOMEvent {
    DECLARE_META_EVENT(evtCaptureData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evtCaptureData_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id;
//#]

//## event evtSendData()
class evtSendData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevtSendData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evtSendData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevtSendData : virtual public AOMEvent {
    DECLARE_META_EVENT(evtSendData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evtSendData_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id;
//#]

//## event evt()
class evt : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevt;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evt(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevt : virtual public AOMEvent {
    DECLARE_META_EVENT(evt)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evt_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Blocks.h
*********************************************************************/
