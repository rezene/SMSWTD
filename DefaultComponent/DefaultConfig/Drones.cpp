/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Drones
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Drones.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Drones.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SYSTEM_CONTEXT_Drones_Drones_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class Drones
Drones::Drones(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Drones, Drones(), 0, SMSWTD_ANALYSIS_SYSTEM_CONTEXT_Drones_Drones_SERIALIZE);
}

Drones::~Drones(void) {
    NOTIFY_DESTRUCTOR(~Drones, true);
    cleanUpRelations();
}

const SMSWTD* Drones::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Drones::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsDrones(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Drones::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Drones* p_Drones = itsSMSWTD->getItsDrones();
            if(p_Drones != NULL)
                {
                    itsSMSWTD->__setItsDrones(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Drones::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void Drones::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsDrones(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Drones::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDrones::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Drones, SMSWTD_ANALYSIS_SYSTEM_CONTEXT, SMSWTD::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedDrones)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Drones.cpp
*********************************************************************/
