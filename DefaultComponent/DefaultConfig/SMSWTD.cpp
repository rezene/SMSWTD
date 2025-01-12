/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSWTD.h"
//## link itsAuthority
#include "Authority.h"
//## link itsDrones
#include "Drones.h"
//## link itsMaintainer
#include "Maintainer.h"
//## link itsSatellites
#include "Satellites.h"
//## link itsUnderWaterSensor
#include "UnderWaterSensor.h"
//## link itsUser
#include "User.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SYSTEM_CONTEXT_SMSWTD_SMSWTD_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class SMSWTD
SMSWTD::SMSWTD(void) : itsAuthority(NULL), itsDrones(NULL), itsMaintainer(NULL), itsSatellites(NULL), itsUnderWaterSensor(NULL), itsUser(NULL) {
    NOTIFY_CONSTRUCTOR(SMSWTD, SMSWTD(), 0, SMSWTD_ANALYSIS_SYSTEM_CONTEXT_SMSWTD_SMSWTD_SERIALIZE);
}

SMSWTD::~SMSWTD(void) {
    NOTIFY_DESTRUCTOR(~SMSWTD, true);
    cleanUpRelations();
}

const Authority* SMSWTD::getItsAuthority(void) const {
    return itsAuthority;
}

void SMSWTD::setItsAuthority(Authority* const p_Authority) {
    if(p_Authority != NULL)
        {
            p_Authority->_setItsSMSWTD(this);
        }
    _setItsAuthority(p_Authority);
}

const Drones* SMSWTD::getItsDrones(void) const {
    return itsDrones;
}

void SMSWTD::setItsDrones(Drones* const p_Drones) {
    if(p_Drones != NULL)
        {
            p_Drones->_setItsSMSWTD(this);
        }
    _setItsDrones(p_Drones);
}

const Maintainer* SMSWTD::getItsMaintainer(void) const {
    return itsMaintainer;
}

void SMSWTD::setItsMaintainer(Maintainer* const p_Maintainer) {
    if(p_Maintainer != NULL)
        {
            p_Maintainer->_setItsSMSWTD(this);
        }
    _setItsMaintainer(p_Maintainer);
}

const Satellites* SMSWTD::getItsSatellites(void) const {
    return itsSatellites;
}

void SMSWTD::setItsSatellites(Satellites* const p_Satellites) {
    if(p_Satellites != NULL)
        {
            p_Satellites->_setItsSMSWTD(this);
        }
    _setItsSatellites(p_Satellites);
}

const UnderWaterSensor* SMSWTD::getItsUnderWaterSensor(void) const {
    return itsUnderWaterSensor;
}

void SMSWTD::setItsUnderWaterSensor(UnderWaterSensor* const p_UnderWaterSensor) {
    if(p_UnderWaterSensor != NULL)
        {
            p_UnderWaterSensor->_setItsSMSWTD(this);
        }
    _setItsUnderWaterSensor(p_UnderWaterSensor);
}

const User* SMSWTD::getItsUser(void) const {
    return itsUser;
}

void SMSWTD::setItsUser(User* const p_User) {
    if(p_User != NULL)
        {
            p_User->_setItsSMSWTD(this);
        }
    _setItsUser(p_User);
}

void SMSWTD::cleanUpRelations(void) {
    if(itsAuthority != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAuthority");
            const SMSWTD* p_SMSWTD = itsAuthority->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsAuthority->__setItsSMSWTD(NULL);
                }
            itsAuthority = NULL;
        }
    if(itsDrones != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDrones");
            const SMSWTD* p_SMSWTD = itsDrones->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsDrones->__setItsSMSWTD(NULL);
                }
            itsDrones = NULL;
        }
    if(itsMaintainer != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMaintainer");
            const SMSWTD* p_SMSWTD = itsMaintainer->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsMaintainer->__setItsSMSWTD(NULL);
                }
            itsMaintainer = NULL;
        }
    if(itsSatellites != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSatellites");
            const SMSWTD* p_SMSWTD = itsSatellites->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsSatellites->__setItsSMSWTD(NULL);
                }
            itsSatellites = NULL;
        }
    if(itsUnderWaterSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUnderWaterSensor");
            const SMSWTD* p_SMSWTD = itsUnderWaterSensor->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsUnderWaterSensor->__setItsSMSWTD(NULL);
                }
            itsUnderWaterSensor = NULL;
        }
    if(itsUser != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUser");
            const SMSWTD* p_SMSWTD = itsUser->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsUser->__setItsSMSWTD(NULL);
                }
            itsUser = NULL;
        }
}

void SMSWTD::__setItsAuthority(Authority* const p_Authority) {
    itsAuthority = p_Authority;
    if(p_Authority != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAuthority", p_Authority, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAuthority");
        }
}

void SMSWTD::_setItsAuthority(Authority* const p_Authority) {
    if(itsAuthority != NULL)
        {
            itsAuthority->__setItsSMSWTD(NULL);
        }
    __setItsAuthority(p_Authority);
}

void SMSWTD::_clearItsAuthority(void) {
    NOTIFY_RELATION_CLEARED("itsAuthority");
    itsAuthority = NULL;
}

void SMSWTD::__setItsDrones(Drones* const p_Drones) {
    itsDrones = p_Drones;
    if(p_Drones != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDrones", p_Drones, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDrones");
        }
}

void SMSWTD::_setItsDrones(Drones* const p_Drones) {
    if(itsDrones != NULL)
        {
            itsDrones->__setItsSMSWTD(NULL);
        }
    __setItsDrones(p_Drones);
}

void SMSWTD::_clearItsDrones(void) {
    NOTIFY_RELATION_CLEARED("itsDrones");
    itsDrones = NULL;
}

void SMSWTD::__setItsMaintainer(Maintainer* const p_Maintainer) {
    itsMaintainer = p_Maintainer;
    if(p_Maintainer != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMaintainer", p_Maintainer, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMaintainer");
        }
}

void SMSWTD::_setItsMaintainer(Maintainer* const p_Maintainer) {
    if(itsMaintainer != NULL)
        {
            itsMaintainer->__setItsSMSWTD(NULL);
        }
    __setItsMaintainer(p_Maintainer);
}

void SMSWTD::_clearItsMaintainer(void) {
    NOTIFY_RELATION_CLEARED("itsMaintainer");
    itsMaintainer = NULL;
}

void SMSWTD::__setItsSatellites(Satellites* const p_Satellites) {
    itsSatellites = p_Satellites;
    if(p_Satellites != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSatellites", p_Satellites, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSatellites");
        }
}

void SMSWTD::_setItsSatellites(Satellites* const p_Satellites) {
    if(itsSatellites != NULL)
        {
            itsSatellites->__setItsSMSWTD(NULL);
        }
    __setItsSatellites(p_Satellites);
}

void SMSWTD::_clearItsSatellites(void) {
    NOTIFY_RELATION_CLEARED("itsSatellites");
    itsSatellites = NULL;
}

void SMSWTD::__setItsUnderWaterSensor(UnderWaterSensor* const p_UnderWaterSensor) {
    itsUnderWaterSensor = p_UnderWaterSensor;
    if(p_UnderWaterSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUnderWaterSensor", p_UnderWaterSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUnderWaterSensor");
        }
}

void SMSWTD::_setItsUnderWaterSensor(UnderWaterSensor* const p_UnderWaterSensor) {
    if(itsUnderWaterSensor != NULL)
        {
            itsUnderWaterSensor->__setItsSMSWTD(NULL);
        }
    __setItsUnderWaterSensor(p_UnderWaterSensor);
}

void SMSWTD::_clearItsUnderWaterSensor(void) {
    NOTIFY_RELATION_CLEARED("itsUnderWaterSensor");
    itsUnderWaterSensor = NULL;
}

void SMSWTD::__setItsUser(User* const p_User) {
    itsUser = p_User;
    if(p_User != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUser", p_User, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUser");
        }
}

void SMSWTD::_setItsUser(User* const p_User) {
    if(itsUser != NULL)
        {
            itsUser->__setItsSMSWTD(NULL);
        }
    __setItsUser(p_User);
}

void SMSWTD::_clearItsUser(void) {
    NOTIFY_RELATION_CLEARED("itsUser");
    itsUser = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSMSWTD::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDrones", false, true);
    if(myReal->itsDrones)
        {
            aomsRelations->ADD_ITEM(myReal->itsDrones);
        }
    aomsRelations->addRelation("itsUnderWaterSensor", false, true);
    if(myReal->itsUnderWaterSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsUnderWaterSensor);
        }
    aomsRelations->addRelation("itsSatellites", false, true);
    if(myReal->itsSatellites)
        {
            aomsRelations->ADD_ITEM(myReal->itsSatellites);
        }
    aomsRelations->addRelation("itsMaintainer", false, true);
    if(myReal->itsMaintainer)
        {
            aomsRelations->ADD_ITEM(myReal->itsMaintainer);
        }
    aomsRelations->addRelation("itsUser", false, true);
    if(myReal->itsUser)
        {
            aomsRelations->ADD_ITEM(myReal->itsUser);
        }
    aomsRelations->addRelation("itsAuthority", false, true);
    if(myReal->itsAuthority)
        {
            aomsRelations->ADD_ITEM(myReal->itsAuthority);
        }
}
//#]

IMPLEMENT_META_P(SMSWTD, SMSWTD_ANALYSIS_SYSTEM_CONTEXT, SMSWTD::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedSMSWTD)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/
