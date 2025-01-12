/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Data_Acquisition_System
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Data_Acquisition_System.h
*********************************************************************/

#ifndef Data_Acquisition_System_H
#define Data_Acquisition_System_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class Data_Acquisition_System
class Data_Acquisition_System {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedData_Acquisition_System;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Data_Acquisition_System(void);
    
    //## auto_generated
    ~Data_Acquisition_System(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedData_Acquisition_System : virtual public AOMInstance {
    DECLARE_META(Data_Acquisition_System, OMAnimatedData_Acquisition_System)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Data_Acquisition_System.h
*********************************************************************/
