#include "FlagRegisterHandler.h"

FlagRegisterHandler::FlagRegisterHandler()
	: m_flagRegister((byte)States::RESET)
{
	Serial.println("flagRegister is cleared");
}

void FlagRegisterHandler::SetFlag(States flag)
{
	m_flagRegister |= (byte)flag;
}

void FlagRegisterHandler::ClearFlag(States flag)
{
	m_flagRegister &= (0xFF ^ (byte)flag);
}

bool FlagRegisterHandler::CheckFlag(States flag)
{
	bool status;
	if (m_flagRegister & (byte)flag)
	{
		status = true;	// flag bit is set '1'
	}
	else
	{
		status = false;		// flag bit is cleared '0'
	}
	return status;
}
