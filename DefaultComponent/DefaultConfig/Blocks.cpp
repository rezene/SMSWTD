/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Blocks
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Blocks.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Blocks.h"
//#[ ignore
#define evtMakeSatelliteReady_SERIALIZE OM_NO_OP

#define evtMakeSatelliteReady_UNSERIALIZE OM_NO_OP

#define evtMakeSatelliteReady_CONSTRUCTOR evtMakeSatelliteReady()

#define evtSatelliteOff_SERIALIZE OM_NO_OP

#define evtSatelliteOff_UNSERIALIZE OM_NO_OP

#define evtSatelliteOff_CONSTRUCTOR evtSatelliteOff()

#define evtCaptureData_SERIALIZE OM_NO_OP

#define evtCaptureData_UNSERIALIZE OM_NO_OP

#define evtCaptureData_CONSTRUCTOR evtCaptureData()

#define evtSendData_SERIALIZE OM_NO_OP

#define evtSendData_UNSERIALIZE OM_NO_OP

#define evtSendData_CONSTRUCTOR evtSendData()

#define evt_SERIALIZE OM_NO_OP

#define evt_UNSERIALIZE OM_NO_OP

#define evt_CONSTRUCTOR evt()
//#]

//## package SMSWTD::ANALYSIS::SERVICES_UCS::Blocks


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(SMSWTD_ANALYSIS_SERVICES_UCS_Blocks, SMSWTD::ANALYSIS::SERVICES_UCS::Blocks)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evtMakeSatelliteReady()
evtMakeSatelliteReady::evtMakeSatelliteReady(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evtMakeSatelliteReady)
    setId(evtMakeSatelliteReady_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evtMakeSatelliteReady_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id(27601);
//#]

IMPLEMENT_META_EVENT_P(evtMakeSatelliteReady, SMSWTD_ANALYSIS_SERVICES_UCS_Blocks, SMSWTD::ANALYSIS::SERVICES_UCS::Blocks, evtMakeSatelliteReady())

//## event evtSatelliteOff()
evtSatelliteOff::evtSatelliteOff(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evtSatelliteOff)
    setId(evtSatelliteOff_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evtSatelliteOff_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id(27602);
//#]

IMPLEMENT_META_EVENT_P(evtSatelliteOff, SMSWTD_ANALYSIS_SERVICES_UCS_Blocks, SMSWTD::ANALYSIS::SERVICES_UCS::Blocks, evtSatelliteOff())

//## event evtCaptureData()
evtCaptureData::evtCaptureData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evtCaptureData)
    setId(evtCaptureData_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evtCaptureData_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id(27603);
//#]

IMPLEMENT_META_EVENT_P(evtCaptureData, SMSWTD_ANALYSIS_SERVICES_UCS_Blocks, SMSWTD::ANALYSIS::SERVICES_UCS::Blocks, evtCaptureData())

//## event evtSendData()
evtSendData::evtSendData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evtSendData)
    setId(evtSendData_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evtSendData_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id(27604);
//#]

IMPLEMENT_META_EVENT_P(evtSendData, SMSWTD_ANALYSIS_SERVICES_UCS_Blocks, SMSWTD::ANALYSIS::SERVICES_UCS::Blocks, evtSendData())

//## event evt()
evt::evt(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evt)
    setId(evt_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id);
}

//#[ ignore
const IOxfEvent::ID evt_Blocks_SERVICES_UCS_ANALYSIS_SMSWTD_id(27605);
//#]

IMPLEMENT_META_EVENT_P(evt, SMSWTD_ANALYSIS_SERVICES_UCS_Blocks, SMSWTD::ANALYSIS::SERVICES_UCS::Blocks, evt())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Blocks.cpp
*********************************************************************/
