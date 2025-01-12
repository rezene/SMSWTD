/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/

#ifndef SMSWTD_H
#define SMSWTD_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## link itsAuthority
class Authority;

//## link itsDrones
class Drones;

//## link itsMaintainer
class Maintainer;

//## link itsSatellites
class Satellites;

//## link itsUnderWaterSensor
class UnderWaterSensor;

//## link itsUser
class User;

//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class SMSWTD
class SMSWTD {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSWTD;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SMSWTD(void);
    
    //## auto_generated
    ~SMSWTD(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Authority* getItsAuthority(void) const;
    
    //## auto_generated
    void setItsAuthority(Authority* const p_Authority);
    
    //## auto_generated
    const Drones* getItsDrones(void) const;
    
    //## auto_generated
    void setItsDrones(Drones* const p_Drones);
    
    //## auto_generated
    const Maintainer* getItsMaintainer(void) const;
    
    //## auto_generated
    void setItsMaintainer(Maintainer* const p_Maintainer);
    
    //## auto_generated
    const Satellites* getItsSatellites(void) const;
    
    //## auto_generated
    void setItsSatellites(Satellites* const p_Satellites);
    
    //## auto_generated
    const UnderWaterSensor* getItsUnderWaterSensor(void) const;
    
    //## auto_generated
    void setItsUnderWaterSensor(UnderWaterSensor* const p_UnderWaterSensor);
    
    //## auto_generated
    const User* getItsUser(void) const;
    
    //## auto_generated
    void setItsUser(User* const p_User);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Authority* itsAuthority;		//## link itsAuthority
    
    Drones* itsDrones;		//## link itsDrones
    
    Maintainer* itsMaintainer;		//## link itsMaintainer
    
    Satellites* itsSatellites;		//## link itsSatellites
    
    UnderWaterSensor* itsUnderWaterSensor;		//## link itsUnderWaterSensor
    
    User* itsUser;		//## link itsUser
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAuthority(Authority* const p_Authority);
    
    //## auto_generated
    void _setItsAuthority(Authority* const p_Authority);
    
    //## auto_generated
    void _clearItsAuthority(void);
    
    //## auto_generated
    void __setItsDrones(Drones* const p_Drones);
    
    //## auto_generated
    void _setItsDrones(Drones* const p_Drones);
    
    //## auto_generated
    void _clearItsDrones(void);
    
    //## auto_generated
    void __setItsMaintainer(Maintainer* const p_Maintainer);
    
    //## auto_generated
    void _setItsMaintainer(Maintainer* const p_Maintainer);
    
    //## auto_generated
    void _clearItsMaintainer(void);
    
    //## auto_generated
    void __setItsSatellites(Satellites* const p_Satellites);
    
    //## auto_generated
    void _setItsSatellites(Satellites* const p_Satellites);
    
    //## auto_generated
    void _clearItsSatellites(void);
    
    //## auto_generated
    void __setItsUnderWaterSensor(UnderWaterSensor* const p_UnderWaterSensor);
    
    //## auto_generated
    void _setItsUnderWaterSensor(UnderWaterSensor* const p_UnderWaterSensor);
    
    //## auto_generated
    void _clearItsUnderWaterSensor(void);
    
    //## auto_generated
    void __setItsUser(User* const p_User);
    
    //## auto_generated
    void _setItsUser(User* const p_User);
    
    //## auto_generated
    void _clearItsUser(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSWTD : virtual public AOMInstance {
    DECLARE_META(SMSWTD, OMAnimatedSMSWTD)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/
