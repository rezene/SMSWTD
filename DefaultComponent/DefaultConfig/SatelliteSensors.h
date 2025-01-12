/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteSensors
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteSensors.h
*********************************************************************/

#ifndef SatelliteSensors_H
#define SatelliteSensors_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SERVICES_UCS.h"
//## package SMSWTD::ANALYSIS::SERVICES_UCS

//## class SatelliteSensors
class SatelliteSensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSatelliteSensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SatelliteSensors(void);
    
    //## auto_generated
    ~SatelliteSensors(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSatelliteSensors : virtual public AOMInstance {
    DECLARE_META(SatelliteSensors, OMAnimatedSatelliteSensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteSensors.h
*********************************************************************/
