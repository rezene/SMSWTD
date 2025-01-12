/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Experts
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Experts.h
*********************************************************************/

#ifndef Experts_H
#define Experts_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SERVICES_UCS.h"
//## package SMSWTD::ANALYSIS::SERVICES_UCS

//## actor Experts
class Experts {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedExperts;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Experts(void);
    
    //## auto_generated
    ~Experts(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedExperts : virtual public AOMInstance {
    DECLARE_META(Experts, OMAnimatedExperts)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Experts.h
*********************************************************************/
