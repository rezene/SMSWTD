/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Government
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Government.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Government.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SERVICES_UCS_Government_Government_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SERVICES_UCS

//## actor Government
Government::Government(void) {
    NOTIFY_CONSTRUCTOR(Government, Government(), 0, SMSWTD_ANALYSIS_SERVICES_UCS_Government_Government_SERIALIZE);
}

Government::~Government(void) {
    NOTIFY_DESTRUCTOR(~Government, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGovernment::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Government, SMSWTD_ANALYSIS_SERVICES_UCS, SMSWTD::ANALYSIS::SERVICES_UCS, false, OMAnimatedGovernment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Government.cpp
*********************************************************************/
