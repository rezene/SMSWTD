/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteSensors
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteSensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SatelliteSensors.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SERVICES_UCS_SatelliteSensors_SatelliteSensors_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SERVICES_UCS

//## class SatelliteSensors
SatelliteSensors::SatelliteSensors(void) {
    NOTIFY_CONSTRUCTOR(SatelliteSensors, SatelliteSensors(), 0, SMSWTD_ANALYSIS_SERVICES_UCS_SatelliteSensors_SatelliteSensors_SERIALIZE);
}

SatelliteSensors::~SatelliteSensors(void) {
    NOTIFY_DESTRUCTOR(~SatelliteSensors, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSatelliteSensors::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(SatelliteSensors, SMSWTD_ANALYSIS_SERVICES_UCS, SMSWTD::ANALYSIS::SERVICES_UCS, false, OMAnimatedSatelliteSensors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteSensors.cpp
*********************************************************************/
