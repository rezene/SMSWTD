/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DroneSensors
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DroneSensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DroneSensors.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SERVICES_UCS_DroneSensors_DroneSensors_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SERVICES_UCS

//## class DroneSensors
DroneSensors::DroneSensors(void) {
    NOTIFY_CONSTRUCTOR(DroneSensors, DroneSensors(), 0, SMSWTD_ANALYSIS_SERVICES_UCS_DroneSensors_DroneSensors_SERIALIZE);
}

DroneSensors::~DroneSensors(void) {
    NOTIFY_DESTRUCTOR(~DroneSensors, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDroneSensors::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(DroneSensors, SMSWTD_ANALYSIS_SERVICES_UCS, SMSWTD::ANALYSIS::SERVICES_UCS, false, OMAnimatedDroneSensors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DroneSensors.cpp
*********************************************************************/
