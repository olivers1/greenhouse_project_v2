#pragma once

#include <Arduino.h>

class FlagRegisterHandler
{
public:
	enum class States : byte	// byte type to enable bitwise operation
	{
		RESET = 0x00,
		PUMP_ENABLED = 0x01,
		FAN_ENABLED = 0x02,
		LED_ENABLED = 0x04,
		WATER_LEVEL_LOW = 0x08,
		TEMP_LOW = 0x10,
		TEMP_HIGH = 0x20,
		WIFI_CONNECTED = 0x40,
		RTC_SYNCED = 0x80
	};
private:
	byte m_flagRegister;
public:
	FlagRegisterHandler();
	void SetFlag(States);
	void ClearFlag(States);
};