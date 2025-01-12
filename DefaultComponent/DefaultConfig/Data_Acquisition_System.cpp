/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Data_Acquisition_System
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\Data_Acquisition_System.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Data_Acquisition_System.h"
//#[ ignore
#define SMSWTD_ANALYSIS_SYSTEM_CONTEXT_Data_Acquisition_System_Data_Acquisition_System_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::ANALYSIS::SYSTEM_CONTEXT

//## class Data_Acquisition_System
Data_Acquisition_System::Data_Acquisition_System(void) {
    NOTIFY_CONSTRUCTOR(Data_Acquisition_System, Data_Acquisition_System(), 0, SMSWTD_ANALYSIS_SYSTEM_CONTEXT_Data_Acquisition_System_Data_Acquisition_System_SERIALIZE);
}

Data_Acquisition_System::~Data_Acquisition_System(void) {
    NOTIFY_DESTRUCTOR(~Data_Acquisition_System, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Data_Acquisition_System, SMSWTD_ANALYSIS_SYSTEM_CONTEXT, SMSWTD::ANALYSIS::SYSTEM_CONTEXT, false, OMAnimatedData_Acquisition_System)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Data_Acquisition_System.cpp
*********************************************************************/
