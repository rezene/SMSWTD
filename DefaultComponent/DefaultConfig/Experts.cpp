/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Experts
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Experts.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Experts.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SERVICES_UCS_Experts_Experts_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SERVICES_UCS

//## actor Experts
Experts::Experts(void) {
    NOTIFY_CONSTRUCTOR(Experts, Experts(), 0, SMSWTD_ANALYSIS_SERVICES_UCS_Experts_Experts_SERIALIZE);
}

Experts::~Experts(void) {
    NOTIFY_DESTRUCTOR(~Experts, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedExperts::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Experts, SMSWTD_ANALYSIS_SERVICES_UCS, SMSWTD::ANALYSIS::SERVICES_UCS, false, OMAnimatedExperts)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Experts.cpp
*********************************************************************/
