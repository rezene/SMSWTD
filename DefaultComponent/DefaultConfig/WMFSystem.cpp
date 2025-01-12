/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WMFSystem
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WMFSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "WMFSystem.h"
//#[ ignore
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WMFSystem_SendToWMFStormAndWeatherData_SERIALIZE \
    aomsmethod->addAttribute("temprature", x2String(temprature));\
    aomsmethod->addAttribute("humidity", x2String(humidity));\
    aomsmethod->addAttribute("windSpeed", x2String(windSpeed));\
    aomsmethod->addAttribute("windDirection", x2String(windDirection));\
    aomsmethod->addAttribute("precipitation", x2String(precipitation));\
    aomsmethod->addAttribute("area", x2String(area));\
    aomsmethod->addAttribute("precipitationHr", x2String(precipitationHr));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WMFSystem_sendToWMFSatelliteData_SERIALIZE \
    aomsmethod->addAttribute("lat", x2String(lat));\
    aomsmethod->addAttribute("lng", x2String(lng));
#define SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WMFSystem_WMFSystem_SERIALIZE OM_NO_OP
//#]

//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class WMFSystem
//#[ ignore
WMFSystem::WMFSystemPort_C::WMFSystemPort_C(void) : WMFSystemInterface(), WMFSystemSatelliteDataInterface(), _p_(0), itsWMFSystemInterface(NULL), itsWMFSystemSatelliteDataInterface(NULL) {
}

WMFSystem::WMFSystemPort_C::~WMFSystemPort_C(void) {
    cleanUpRelations();
}

void WMFSystem::WMFSystemPort_C::SendToWMFStormAndWeatherData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) {
    
    if (itsWMFSystemInterface != NULL) {
        itsWMFSystemInterface->SendToWMFStormAndWeatherData(temprature,humidity,windSpeed,windDirection,precipitation,area,precipitationHr);
    }
    
}

void WMFSystem::WMFSystemPort_C::connectWMFSystem(WMFSystem* part) {
    setItsWMFSystemInterface(part);
    setItsWMFSystemSatelliteDataInterface(part);
    
}

WMFSystemInterface* WMFSystem::WMFSystemPort_C::getItsWMFSystemInterface(void) {
    return this;
}

WMFSystemSatelliteDataInterface* WMFSystem::WMFSystemPort_C::getItsWMFSystemSatelliteDataInterface(void) {
    return this;
}

void WMFSystem::WMFSystemPort_C::sendToWMFSatelliteData(double lat, double lng) {
    
    if (itsWMFSystemSatelliteDataInterface != NULL) {
        itsWMFSystemSatelliteDataInterface->sendToWMFSatelliteData(lat,lng);
    }
    
}

void WMFSystem::WMFSystemPort_C::setItsWMFSystemInterface(WMFSystemInterface* const p_WMFSystemInterface) {
    itsWMFSystemInterface = p_WMFSystemInterface;
}

void WMFSystem::WMFSystemPort_C::setItsWMFSystemSatelliteDataInterface(WMFSystemSatelliteDataInterface* const p_WMFSystemSatelliteDataInterface) {
    itsWMFSystemSatelliteDataInterface = p_WMFSystemSatelliteDataInterface;
}

void WMFSystem::WMFSystemPort_C::cleanUpRelations(void) {
    if(itsWMFSystemInterface != NULL)
        {
            itsWMFSystemInterface = NULL;
        }
    if(itsWMFSystemSatelliteDataInterface != NULL)
        {
            itsWMFSystemSatelliteDataInterface = NULL;
        }
}
//#]

WMFSystem::WMFSystem(IOxfActive* const theActiveContext) : OMReactive(), WMFSystemInterface(), WMFSystemSatelliteDataInterface() {
    NOTIFY_REACTIVE_CONSTRUCTOR(WMFSystem, WMFSystem(), 0, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WMFSystem_WMFSystem_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsStormDetection.setShouldDelete(false);
        }
    }
    initRelations();
}

WMFSystem::~WMFSystem(void) {
    NOTIFY_DESTRUCTOR(~WMFSystem, false);
}

void WMFSystem::SendToWMFStormAndWeatherData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr) {
    NOTIFY_OPERATION(SendToWMFStormAndWeatherData, SendToWMFStormAndWeatherData(double,double,double,double,double,double,double), 7, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WMFSystem_SendToWMFStormAndWeatherData_SERIALIZE);
    //#[ operation SendToWMFStormAndWeatherData(double,double,double,double,double,double,double)
    
    #include <mysql_driver.h>
    #include <mysql_connection.h>
    #include <cppconn/prepared_statement.h>
    #include <cppconn/resultset.h>
    
    this->temprature=temprature;
    this->humidity=humidity;
    this->windSpeed=windSpeed;
    this->windDirection=windDirection;
    this->precipitation=precipitation;
    this->area=area;
    this->precipitationHr=precipitationHr;
    this->rainIntensity=itsStormDetection.calculateRainIntensity(precipitation,precipitationHr);
    this->stormIntensity=itsStormDetection.calculateStormIntensity(precipitation,area);
    
    OMString stormTracking=itsStormDetection.getStormTracking(stormIntensity);
    OMString stormPrediction=itsStormDetection.getStormPrediction(windSpeed, rainIntensity);
    this->stormTracking=stormTracking;
    this->stormPrediction=stormPrediction;
    std::cout<<"\n \n";
    std::cout<<"Receiving DroneSensors Data ..." <<std::endl;
    itsWeatherDashboard.displayTemprature(temprature);
    itsWeatherDashboard.displayHumidity(humidity);
    itsWeatherDashboard.displayWindDirection(windDirection);
    itsWeatherDashboard.displayWindSpeed(windSpeed);
    itsWeatherDashboard.displayArea(area);
    itsWeatherDashboard.displayPrecipitation(precipitation);
    itsWeatherDashboard.displayRainIntensity(rainIntensity);
    itsWeatherDashboard.displayStormIntensity(stormIntensity);
    itsWeatherDashboard.displayStormPrediction(stormPrediction);
    itsWeatherDashboard.displayStormTracking(stormTracking);
    
    //#]
}

void WMFSystem::sendToWMFSatelliteData(double lat, double lng) {
    NOTIFY_OPERATION(sendToWMFSatelliteData, sendToWMFSatelliteData(double,double), 2, SMSWTD_DESIGN_WeatherMonitoringAndForcasting_Mission_WMFSystem_sendToWMFSatelliteData_SERIALIZE);
    //#[ operation sendToWMFSatelliteData(double,double)
    this->lat=lat;
    this->lng=lng;
    std::cout<<"WeatherMonitoringAndForcasting Receiving SatelliteSensors Data ..." <<std::endl;
    itsWeatherDashboard.displayLat(lat);
    itsWeatherDashboard.displayLng(lng);
    
    //#]
}

WMFSystem::WMFSystemPort_C* WMFSystem::getWMFSystemPort(void) const {
    return (WMFSystem::WMFSystemPort_C*) &WMFSystemPort;
}

WMFSystem::WMFSystemPort_C* WMFSystem::get_WMFSystemPort(void) const {
    return (WMFSystem::WMFSystemPort_C*) &WMFSystemPort;
}

const double WMFSystem::getArea(void) const {
    return area;
}

void WMFSystem::setArea(const double p_area) {
    area = p_area;
    NOTIFY_SET_OPERATION;
}

const double WMFSystem::getHumidity(void) const {
    return humidity;
}

void WMFSystem::setHumidity(const double p_humidity) {
    humidity = p_humidity;
    NOTIFY_SET_OPERATION;
}

const double WMFSystem::getLat(void) const {
    return lat;
}

void WMFSystem::setLat(const double p_lat) {
    lat = p_lat;
    NOTIFY_SET_OPERATION;
}

const double WMFSystem::getLng(void) const {
    return lng;
}

void WMFSystem::setLng(const double p_lng) {
    lng = p_lng;
    NOTIFY_SET_OPERATION;
}

const double WMFSystem::getPrecipitation(void) const {
    return precipitation;
}

void WMFSystem::setPrecipitation(const double p_precipitation) {
    precipitation = p_precipitation;
    NOTIFY_SET_OPERATION;
}

const double WMFSystem::getPrecipitationHr(void) const {
    return precipitationHr;
}

void WMFSystem::setPrecipitationHr(const double p_precipitationHr) {
    precipitationHr = p_precipitationHr;
    NOTIFY_SET_OPERATION;
}

const double WMFSystem::getRainIntensity(void) const {
    return rainIntensity;
}

void WMFSystem::setRainIntensity(const double p_rainIntensity) {
    rainIntensity = p_rainIntensity;
    NOTIFY_SET_OPERATION;
}

const double WMFSystem::getStormIntensity(void) const {
    return stormIntensity;
}

void WMFSystem::setStormIntensity(const double p_stormIntensity) {
    stormIntensity = p_stormIntensity;
    NOTIFY_SET_OPERATION;
}

const OMString WMFSystem::getStormPrediction(void) const {
    return stormPrediction;
}

void WMFSystem::setStormPrediction(const OMString p_stormPrediction) {
    stormPrediction = p_stormPrediction;
    NOTIFY_SET_OPERATION;
}

const OMString WMFSystem::getStormTracking(void) const {
    return stormTracking;
}

void WMFSystem::setStormTracking(const OMString p_stormTracking) {
    stormTracking = p_stormTracking;
    NOTIFY_SET_OPERATION;
}

const double WMFSystem::getTemprature(void) const {
    return temprature;
}

void WMFSystem::setTemprature(const double p_temprature) {
    temprature = p_temprature;
    NOTIFY_SET_OPERATION;
}

const double WMFSystem::getWindDirection(void) const {
    return windDirection;
}

void WMFSystem::setWindDirection(const double p_windDirection) {
    windDirection = p_windDirection;
    NOTIFY_SET_OPERATION;
}

const double WMFSystem::getWindSpeed(void) const {
    return windSpeed;
}

void WMFSystem::setWindSpeed(const double p_windSpeed) {
    windSpeed = p_windSpeed;
    NOTIFY_SET_OPERATION;
}

const StormDetection* WMFSystem::getItsStormDetection(void) const {
    return &itsStormDetection;
}

const WeatherDashboard* WMFSystem::getItsWeatherDashboard(void) const {
    return &itsWeatherDashboard;
}

const WeatherUpdate* WMFSystem::getItsWeatherUpdate(void) const {
    return &itsWeatherUpdate;
}

bool WMFSystem::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsStormDetection.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void WMFSystem::initRelations(void) {
    if (get_WMFSystemPort() != NULL) {
        get_WMFSystemPort()->connectWMFSystem(this);
    }
}

void WMFSystem::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsStormDetection.setActiveContext(theActiveContext, false);
    }
}

void WMFSystem::destroy(void) {
    itsStormDetection.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWMFSystem::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("temprature", x2String(myReal->temprature));
    aomsAttributes->addAttribute("humidity", x2String(myReal->humidity));
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
    aomsAttributes->addAttribute("windDirection", x2String(myReal->windDirection));
    aomsAttributes->addAttribute("precipitation", x2String(myReal->precipitation));
    aomsAttributes->addAttribute("area", x2String(myReal->area));
    aomsAttributes->addAttribute("precipitationHr", x2String(myReal->precipitationHr));
    aomsAttributes->addAttribute("rainIntensity", x2String(myReal->rainIntensity));
    aomsAttributes->addAttribute("stormIntensity", x2String(myReal->stormIntensity));
    aomsAttributes->addAttribute("lat", x2String(myReal->lat));
    aomsAttributes->addAttribute("lng", x2String(myReal->lng));
    aomsAttributes->addAttribute("stormTracking", x2String(myReal->stormTracking));
    aomsAttributes->addAttribute("stormPrediction", x2String(myReal->stormPrediction));
    OMAnimatedWMFSystemInterface::serializeAttributes(aomsAttributes);
    OMAnimatedWMFSystemSatelliteDataInterface::serializeAttributes(aomsAttributes);
}

void OMAnimatedWMFSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStormDetection", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsStormDetection);
    aomsRelations->addRelation("itsWeatherDashboard", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWeatherDashboard);
    aomsRelations->addRelation("itsWeatherUpdate", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsWeatherUpdate);
    OMAnimatedWMFSystemInterface::serializeRelations(aomsRelations);
    OMAnimatedWMFSystemSatelliteDataInterface::serializeRelations(aomsRelations);
}

static AOMClass* _WMFSystemSuper[2] = {
OMAnimatedWMFSystemInterface::staticGetClass(),
OMAnimatedWMFSystemSatelliteDataInterface::staticGetClass()};
//#]

IMPLEMENT_REACTIVE_META_M_SIMPLE_P(WMFSystem, SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission, false, _WMFSystemSuper, 2, OMAnimatedWMFSystem)

OMINIT_SUPERCLASS(WMFSystemInterface, OMAnimatedWMFSystemInterface)

OMINIT_SUPERCLASS(WMFSystemSatelliteDataInterface, OMAnimatedWMFSystemSatelliteDataInterface)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WMFSystem.cpp
*********************************************************************/
