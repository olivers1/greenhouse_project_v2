#pragma once

#include "Arduino.h"

class Sensor
{
private:
	const byte m_inPin;
	const byte m_outPin;
	float m_measuredValue;
	const unsigned int m_thresholdValue;
	bool m_isAboveThreshold;
	unsigned int ReadSensorValue();
public:
	Sensor(const byte inPin, const byte outPin, const unsigned int thresholdValue);
	bool GetMeasuredValueStatus();
	unsigned int GetMeasuredValue();
};

