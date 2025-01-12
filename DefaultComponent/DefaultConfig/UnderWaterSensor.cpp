/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UnderWaterSensor
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\UnderWaterSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UnderWaterSensor.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SYSTEM_CONTEXT_UnderWaterSensor_UnderWaterSensor_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class UnderWaterSensor
UnderWaterSensor::UnderWaterSensor(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(UnderWaterSensor, UnderWaterSensor(), 0, SMSWTD_ANALYSIS_SYSTEM_CONTEXT_UnderWaterSensor_UnderWaterSensor_SERIALIZE);
}

UnderWaterSensor::~UnderWaterSensor(void) {
    NOTIFY_DESTRUCTOR(~UnderWaterSensor, true);
    cleanUpRelations();
}

const SMSWTD* UnderWaterSensor::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void UnderWaterSensor::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsUnderWaterSensor(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void UnderWaterSensor::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const UnderWaterSensor* p_UnderWaterSensor = itsSMSWTD->getItsUnderWaterSensor();
            if(p_UnderWaterSensor != NULL)
                {
                    itsSMSWTD->__setItsUnderWaterSensor(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void UnderWaterSensor::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void UnderWaterSensor::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsUnderWaterSensor(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void UnderWaterSensor::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUnderWaterSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(UnderWaterSensor, SMSWTD_ANALYSIS_SYSTEM_CONTEXT, SMSWTD::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedUnderWaterSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UnderWaterSensor.cpp
*********************************************************************/
