#include "Sensor.h"

Sensor::Sensor(const byte inPin, const byte outPin, const unsigned int thresholdValue)
	: m_inPin(inPin), m_outPin(outPin), m_thresholdValue(thresholdValue)
{

}

unsigned int Sensor::ReadSensorValue()
{

}

bool Sensor::GetMeasuredValueStatus()
{

}

unsigned int Sensor::GetMeasuredValue()
{

}