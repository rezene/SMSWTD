/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Blocks.h"
//## auto_generated
#include "Default.h"
//## auto_generated
#include "FUNCTIONAL.h"
//## auto_generated
#include "Mission.h"
//## auto_generated
#include "SERVICES_UCS.h"
//## auto_generated
#include "SYSTEM_CONTEXT.h"
//## auto_generated
#include "DataAcquisition.h"
//## auto_generated
#include "StormDetection.h"
//## auto_generated
#include "StormPrediction.h"
//## auto_generated
#include "StormTracking.h"
//## auto_generated
#include "WeatherDashboard.h"
//## auto_generated
#include "WeatherUpdate.h"
//## auto_generated
#include "WMFSystem.h"
DefaultComponent::DefaultComponent(void) {
    Mission_initRelations();
    (void) Mission_startBehavior();
}

RhpInteger main( void) {
    RhpInteger status = 0;
    try {
        if(OXF::initialize(0,NULL))
            {
                DataAcquisition p_DataAcquisition;
                p_DataAcquisition.setShouldDelete(false);
                StormDetection p_StormDetection;
                p_StormDetection.setShouldDelete(false);
                StormPrediction p_StormPrediction;
                StormTracking p_StormTracking;
                WeatherDashboard p_WeatherDashboard;
                WeatherUpdate p_WeatherUpdate;
                WMFSystem p_WMFSystem;
                p_WMFSystem.setShouldDelete(false);
                DefaultComponent initializer_DefaultComponent;
                (void) p_DataAcquisition.startBehavior();
                (void) p_StormDetection.startBehavior();
                (void) p_WMFSystem.startBehavior();
                //#[ configuration DefaultComponent::DefaultConfig 
                //#]
                OXF::start();
                status = 0;
            }
        else
            {
                status = 1;
            }
    }
    catch (...)
    {
        status = 0;
    }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
