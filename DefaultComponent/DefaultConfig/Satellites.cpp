/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Satellites
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Satellites.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Satellites.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SYSTEM_CONTEXT_Satellites_Satellites_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class Satellites
Satellites::Satellites(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(Satellites, Satellites(), 0, SMSWTD_ANALYSIS_SYSTEM_CONTEXT_Satellites_Satellites_SERIALIZE);
}

Satellites::~Satellites(void) {
    NOTIFY_DESTRUCTOR(~Satellites, true);
    cleanUpRelations();
}

const SMSWTD* Satellites::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void Satellites::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsSatellites(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void Satellites::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const Satellites* p_Satellites = itsSMSWTD->getItsSatellites();
            if(p_Satellites != NULL)
                {
                    itsSMSWTD->__setItsSatellites(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void Satellites::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void Satellites::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsSatellites(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void Satellites::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSatellites::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(Satellites, SMSWTD_ANALYSIS_SYSTEM_CONTEXT, SMSWTD::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedSatellites)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Satellites.cpp
*********************************************************************/
