/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20245158
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: block_1
//!	Generated Date	: Sat, 4, Jan 2025  
	File Path	: DefaultComponent\DefaultConfig\block_1.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "block_1.h"
//#[ ignore
#define Default_block_1_block_1_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class block_1
//#[ ignore
block_1::port_0_C::port_0_C(void) : OMDefaultReactivePort(), _p_(0) {
}

block_1::port_0_C::~port_0_C(void) {
}

void block_1::port_0_C::connectBlock_1(block_1* part) {
}

block_1::port_3_C::port_3_C(void) : OMDefaultReactivePort(), _p_(0) {
}

block_1::port_3_C::~port_3_C(void) {
}

void block_1::port_3_C::connectBlock_1(block_1* part) {
}
//#]

block_1::block_1(void) {
    NOTIFY_CONSTRUCTOR(block_1, block_1(), 0, Default_block_1_block_1_SERIALIZE);
}

block_1::~block_1(void) {
    NOTIFY_DESTRUCTOR(~block_1, true);
}

block_1::port_0_C* block_1::getPort_0(void) const {
    return (block_1::port_0_C*) &port_0;
}

block_1::port_0_C* block_1::get_port_0(void) const {
    return (block_1::port_0_C*) &port_0;
}

block_1::port_3_C* block_1::getPort_3(void) const {
    return (block_1::port_3_C*) &port_3;
}

block_1::port_3_C* block_1::get_port_3(void) const {
    return (block_1::port_3_C*) &port_3;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(block_1, Default, Default, false, OMAnimatedblock_1)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\block_1.cpp
*********************************************************************/
