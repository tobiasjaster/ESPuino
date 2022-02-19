#pragma once
#include "Wire.h"

extern TwoWire *pe_i2c;

void Port_Init(void);
void Port_Cyclic(void);
bool Port_Read(const uint8_t _channel);
void Port_Write(const uint8_t _channel, const bool _newState, const bool _initGpio);
void Port_Write(const uint8_t _channel, const bool _newState);
void Port_Exit(void);