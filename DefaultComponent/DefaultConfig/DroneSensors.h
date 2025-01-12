/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DroneSensors
//!	Generated Date	: Tue, 7, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\DroneSensors.h
*********************************************************************/

#ifndef DroneSensors_H
#define DroneSensors_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SERVICES_UCS.h"
//## package SMSWTD::ANALYSIS::SERVICES_UCS

//## class DroneSensors
class DroneSensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDroneSensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DroneSensors(void);
    
    //## auto_generated
    ~DroneSensors(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDroneSensors : virtual public AOMInstance {
    DECLARE_META(DroneSensors, OMAnimatedDroneSensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DroneSensors.h
*********************************************************************/
