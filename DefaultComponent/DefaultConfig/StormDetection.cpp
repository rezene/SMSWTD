/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StormDetection
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\StormDetection.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "StormDetection.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormDetection_calculateRainIntensity_SERIALIZE \
    aomsmethod->addAttribute("precipitation", x2String(precipitation));\
    aomsmethod->addAttribute("precipitationHour", x2String(precipitationHour));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormDetection_calculateStormIntensity_SERIALIZE \
    aomsmethod->addAttribute("precipitation", x2String(precipitation));\
    aomsmethod->addAttribute("area", x2String(area));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormDetection_getStormPrediction_SERIALIZE \
    aomsmethod->addAttribute("windSpeed", x2String(windSpeed));\
    aomsmethod->addAttribute("rainIntensity", x2String(rainIntensity));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormDetection_StormDetection_SERIALIZE OM_NO_OP

#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormDetection_getStormTracking_SERIALIZE aomsmethod->addAttribute("stormIntensity", x2String(stormIntensity));
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class StormDetection
StormDetection::StormDetection(IOxfActive* const theActiveContext) : OMReactive(), rainIntensity(0), stormDetected(false), stormIntensity(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(StormDetection, StormDetection(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormDetection_StormDetection_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

StormDetection::~StormDetection(void) {
    NOTIFY_DESTRUCTOR(~StormDetection, true);
}

double StormDetection::calculateRainIntensity(double precipitation, double precipitationHour) {
    NOTIFY_OPERATION(calculateRainIntensity, calculateRainIntensity(double,double), 2, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormDetection_calculateRainIntensity_SERIALIZE);
    //#[ operation calculateRainIntensity(double,double)
    rainIntensity = precipitation / precipitationHour;
    rainIntensity = std::round(rainIntensity * 100) / 100;
    return rainIntensity;
     
    //#]
}

double StormDetection::calculateStormIntensity(double precipitation, double area) {
    NOTIFY_OPERATION(calculateStormIntensity, calculateStormIntensity(double,double), 2, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormDetection_calculateStormIntensity_SERIALIZE);
    //#[ operation calculateStormIntensity(double,double)
    stormIntensity = precipitation / area;
    stormIntensity = std::round(stormIntensity * 100) / 100;
    if (stormIntensity >0){
    stormDetected=true;
    GEN(evtStorming());
    }
    else {
    stormDetected=false;
    GEN(evtNoStorming());
    }
    return stormIntensity;
     
    //#]
}

OMString StormDetection::getStormPrediction(double windSpeed, double rainIntensity) {
    NOTIFY_OPERATION(getStormPrediction, getStormPrediction(double,double), 2, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormDetection_getStormPrediction_SERIALIZE);
    //#[ operation getStormPrediction(double,double)
    return itsStormPrediction.doStormPrediction(windSpeed, rainIntensity);
    //#]
}

OMString StormDetection::getStormTracking(double stormIntensity) {
    NOTIFY_OPERATION(getStormTracking, getStormTracking(double), 1, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_StormDetection_getStormTracking_SERIALIZE);
    //#[ operation getStormTracking(double)
    return itsStormTracking.doStormTracking(stormIntensity);
    //#]
}

const double StormDetection::getRainIntensity(void) const {
    return rainIntensity;
}

void StormDetection::setRainIntensity(const double p_rainIntensity) {
    rainIntensity = p_rainIntensity;
}

const bool StormDetection::getStormDetected(void) const {
    return stormDetected;
}

void StormDetection::setStormDetected(const bool p_stormDetected) {
    stormDetected = p_stormDetected;
}

const double StormDetection::getStormIntensity(void) const {
    return stormIntensity;
}

void StormDetection::setStormIntensity(const double p_stormIntensity) {
    stormIntensity = p_stormIntensity;
}

const double StormDetection::getWindSpeed(void) const {
    return windSpeed;
}

void StormDetection::setWindSpeed(const double p_windSpeed) {
    windSpeed = p_windSpeed;
}

const StormPrediction* StormDetection::getItsStormPrediction(void) const {
    return &itsStormPrediction;
}

const StormPrediction* StormDetection::getItsStormPrediction_1(void) const {
    return &itsStormPrediction_1;
}

const StormTracking* StormDetection::getItsStormTracking(void) const {
    return &itsStormTracking;
}

const StormTracking* StormDetection::getItsStormTracking_1(void) const {
    return &itsStormTracking_1;
}

bool StormDetection::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void StormDetection::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void StormDetection::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        NOTIFY_STATE_ENTERED("ROOT.Ready");
        rootState_subState = Ready;
        rootState_active = Ready;
        NOTIFY_TRANSITION_TERMINATED("1");
    }
}

IOxfReactive::TakeEventStatus StormDetection::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Ready
        case Ready:
        {
            if(IS_EVENT_TYPE_OF(evtStorming_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.Ready");
                    NOTIFY_STATE_ENTERED("ROOT.StormDetected");
                    rootState_subState = StormDetected;
                    rootState_active = StormDetected;
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        // State StormDetected
        case StormDetected:
        {
            if(IS_EVENT_TYPE_OF(evtNoStorming_Mission_WeatherMonitoringAndForcasting_DESIGN_SMSWTD_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.StormDetected");
                    NOTIFY_STATE_ENTERED("ROOT.Ready");
                    rootState_subState = Ready;
                    rootState_active = Ready;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStormDetection::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("stormDetected", x2String(myReal->stormDetected));
    aomsAttributes->addAttribute("stormIntensity", x2String(myReal->stormIntensity));
    aomsAttributes->addAttribute("rainIntensity", x2String(myReal->rainIntensity));
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
}

void OMAnimatedStormDetection::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStormTracking", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsStormTracking);
    aomsRelations->addRelation("itsStormPrediction", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsStormPrediction);
    aomsRelations->addRelation("itsStormTracking_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsStormTracking_1);
    aomsRelations->addRelation("itsStormPrediction_1", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsStormPrediction_1);
}

void OMAnimatedStormDetection::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case StormDetection::Ready:
        {
            Ready_serializeStates(aomsState);
        }
        break;
        case StormDetection::StormDetected:
        {
            StormDetected_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedStormDetection::StormDetected_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.StormDetected");
}

void OMAnimatedStormDetection::Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Ready");
}
//#]

IMPLEMENT_REACTIVE_META_P(StormDetection, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, OMAnimatedStormDetection)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StormDetection.cpp
*********************************************************************/
