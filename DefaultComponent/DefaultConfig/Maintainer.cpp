/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintainer
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Maintainer.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Maintainer.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SYSTEM_CONTEXT_Maintainer_Maintainer_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## actor Maintainer
Maintainer::Maintainer(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Maintainer, Maintainer(), 0, SMSWTD_ANALYSIS_SYSTEM_CONTEXT_Maintainer_Maintainer_SERIALIZE);
}

Maintainer::~Maintainer(void) {
    NOTIFY_DESTRUCTOR(~Maintainer, true);
    cleanUpRelations();
}

const SMSWTD* Maintainer::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Maintainer::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsMaintainer(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Maintainer::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Maintainer* p_Maintainer = itsSMSWTD->getItsMaintainer();
            if(p_Maintainer != NULL)
                {
                    itsSMSWTD->__setItsMaintainer(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Maintainer::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void Maintainer::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsMaintainer(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Maintainer::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMaintainer::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Maintainer, SMSWTD_ANALYSIS_SYSTEM_CONTEXT, SMSWTD::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedMaintainer)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintainer.cpp
*********************************************************************/
