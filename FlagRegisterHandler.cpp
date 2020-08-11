#include "FlagRegisterHandler.h"

FlagRegisterHandler::FlagRegisterHandler() :
	m_flagRegister((byte)States::RESET)
{
	
}

void FlagRegisterHandler::SetFlag(States flag)
{
	m_flagRegister |= (byte)flag;
}

void FlagRegisterHandler::ClearFlag(States flag)
{
	m_flagRegister &= (0xFF ^ (byte)flag);
}
