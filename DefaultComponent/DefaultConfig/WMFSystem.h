/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: WMFSystem
//!	Generated Date	: Thu, 9, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\WMFSystem.h
*********************************************************************/

#ifndef WMFSystem_H
#define WMFSystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Mission.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## classInstance itsStormDetection
#include "StormDetection.h"
//## classInstance itsWeatherDashboard
#include "WeatherDashboard.h"
//## classInstance itsWeatherUpdate
#include "WeatherUpdate.h"
//## class WMFSystem
#include "WMFSystemInterface.h"
//## class WMFSystem
#include "WMFSystemSatelliteDataInterface.h"
//## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission

//## class WMFSystem
class WMFSystem : public OMReactive, public WMFSystemInterface, public WMFSystemSatelliteDataInterface {
public :

//#[ ignore
    //## package SMSWTD::DESIGN::WeatherMonitoringAndForcasting::Mission
    class WMFSystemPort_C : public WMFSystemInterface, public WMFSystemSatelliteDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        WMFSystemPort_C(void);
        
        //## auto_generated
        virtual ~WMFSystemPort_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        virtual void SendToWMFStormAndWeatherData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr);
        
        //## auto_generated
        void connectWMFSystem(WMFSystem* part);
        
        //## auto_generated
        WMFSystemInterface* getItsWMFSystemInterface(void);
        
        //## auto_generated
        WMFSystemSatelliteDataInterface* getItsWMFSystemSatelliteDataInterface(void);
        
        //## auto_generated
        virtual void sendToWMFSatelliteData(double lat, double lng);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsWMFSystemInterface(WMFSystemInterface* const p_WMFSystemInterface);
        
        //## auto_generated
        void setItsWMFSystemSatelliteDataInterface(WMFSystemSatelliteDataInterface* const p_WMFSystemSatelliteDataInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        WMFSystemInterface* itsWMFSystemInterface;		//## link itsWMFSystemInterface
        
        WMFSystemSatelliteDataInterface* itsWMFSystemSatelliteDataInterface;		//## link itsWMFSystemSatelliteDataInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedWMFSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit WMFSystem(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~WMFSystem(void);
    
    ////    Operations    ////
    
    //## operation SendToWMFStormAndWeatherData(double,double,double,double,double,double,double)
    virtual void SendToWMFStormAndWeatherData(double temprature, double humidity, double windSpeed, double windDirection, double precipitation, double area, double precipitationHr);
    
    //## operation sendToWMFSatelliteData(double,double)
    virtual void sendToWMFSatelliteData(double lat, double lng);
    
    ////    Additional operations    ////
    
    //## auto_generated
    WMFSystemPort_C* getWMFSystemPort(void) const;
    
    //## auto_generated
    WMFSystemPort_C* get_WMFSystemPort(void) const;
    
    //## auto_generated
    const double getArea(void) const;
    
    //## auto_generated
    void setArea(const double p_area);
    
    //## auto_generated
    const double getHumidity(void) const;
    
    //## auto_generated
    void setHumidity(const double p_humidity);
    
    //## auto_generated
    const double getLat(void) const;
    
    //## auto_generated
    void setLat(const double p_lat);
    
    //## auto_generated
    const double getLng(void) const;
    
    //## auto_generated
    void setLng(const double p_lng);
    
    //## auto_generated
    const double getPrecipitation(void) const;
    
    //## auto_generated
    void setPrecipitation(const double p_precipitation);
    
    //## auto_generated
    const double getPrecipitationHr(void) const;
    
    //## auto_generated
    void setPrecipitationHr(const double p_precipitationHr);
    
    //## auto_generated
    const double getRainIntensity(void) const;
    
    //## auto_generated
    void setRainIntensity(const double p_rainIntensity);
    
    //## auto_generated
    const double getStormIntensity(void) const;
    
    //## auto_generated
    void setStormIntensity(const double p_stormIntensity);
    
    //## auto_generated
    const OMString getStormPrediction(void) const;
    
    //## auto_generated
    void setStormPrediction(const OMString p_stormPrediction);
    
    //## auto_generated
    const OMString getStormTracking(void) const;
    
    //## auto_generated
    void setStormTracking(const OMString p_stormTracking);
    
    //## auto_generated
    const double getTemprature(void) const;
    
    //## auto_generated
    void setTemprature(const double p_temprature);
    
    //## auto_generated
    const double getWindDirection(void) const;
    
    //## auto_generated
    void setWindDirection(const double p_windDirection);
    
    //## auto_generated
    const double getWindSpeed(void) const;
    
    //## auto_generated
    void setWindSpeed(const double p_windSpeed);
    
    //## auto_generated
    const StormDetection* getItsStormDetection(void) const;
    
    //## auto_generated
    const WeatherDashboard* getItsWeatherDashboard(void) const;
    
    //## auto_generated
    const WeatherUpdate* getItsWeatherUpdate(void) const;
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Attributes    ////

private :

    double area;		//## attribute area
    
    double humidity;		//## attribute humidity
    
    double lat;		//## attribute lat
    
    double lng;		//## attribute lng
    
    double precipitation;		//## attribute precipitation
    
    double precipitationHr;		//## attribute precipitationHr
    
    double rainIntensity;		//## attribute rainIntensity
    
    double stormIntensity;		//## attribute stormIntensity
    
    OMString stormPrediction;		//## attribute stormPrediction
    
    OMString stormTracking;		//## attribute stormTracking
    
    double temprature;		//## attribute temprature
    
    double windDirection;		//## attribute windDirection
    
    double windSpeed;		//## attribute windSpeed
    
    ////    Relations and components    ////
    
//#[ ignore
    WMFSystemPort_C WMFSystemPort;
//#]

    StormDetection itsStormDetection;		//## classInstance itsStormDetection
    
    WeatherDashboard itsWeatherDashboard;		//## classInstance itsWeatherDashboard
    
    WeatherUpdate itsWeatherUpdate;		//## classInstance itsWeatherUpdate
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWMFSystem : public OMAnimatedWMFSystemInterface, public OMAnimatedWMFSystemSatelliteDataInterface {
    DECLARE_META(WMFSystem, OMAnimatedWMFSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\WMFSystem.h
*********************************************************************/
