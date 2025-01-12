/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: block_1
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\block_1.h
*********************************************************************/

#ifndef block_1_H
#define block_1_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <OMDefaultReactivePort.h>
//## package Default

//## class block_1
class block_1 {
public :

//#[ ignore
    //## package Default
    class port_0_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_0_C(void);
        
        //## auto_generated
        virtual ~port_0_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectBlock_1(block_1* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
    
    //## package Default
    class port_3_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_3_C(void);
        
        //## auto_generated
        virtual ~port_3_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectBlock_1(block_1* part);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedblock_1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    block_1(void);
    
    //## auto_generated
    ~block_1(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    port_0_C* getPort_0(void) const;
    
    //## auto_generated
    port_0_C* get_port_0(void) const;
    
    //## auto_generated
    port_3_C* getPort_3(void) const;
    
    //## auto_generated
    port_3_C* get_port_3(void) const;
    
    ////    Relations and components    ////

private :

//#[ ignore
    port_0_C port_0;
    
    port_3_C port_3;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedblock_1 : virtual public AOMInstance {
    DECLARE_META(block_1, OMAnimatedblock_1)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\block_1.h
*********************************************************************/
