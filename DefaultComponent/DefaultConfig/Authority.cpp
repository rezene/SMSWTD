/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Authority
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Authority.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Authority.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SYSTEM_CONTEXT_Authority_Authority_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class Authority
Authority::Authority(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Authority, Authority(), 0, SMSWTD_ANALYSIS_SYSTEM_CONTEXT_Authority_Authority_SERIALIZE);
}

Authority::~Authority(void) {
    NOTIFY_DESTRUCTOR(~Authority, true);
    cleanUpRelations();
}

const SMSWTD* Authority::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Authority::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsAuthority(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Authority::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Authority* p_Authority = itsSMSWTD->getItsAuthority();
            if(p_Authority != NULL)
                {
                    itsSMSWTD->__setItsAuthority(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Authority::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void Authority::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsAuthority(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Authority::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAuthority::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Authority, SMSWTD_ANALYSIS_SYSTEM_CONTEXT, SMSWTD::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedAuthority)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Authority.cpp
*********************************************************************/
