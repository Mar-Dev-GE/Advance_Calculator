#pragma once

#include "Core.h"

ADVANCE_CALCULATOR_BEGIN

struct AvailbleSignes
{
	const char AdditionSigne = '+';
	const char SubstitutionSigne = '-';
	const char MultiplicationSigne = '*';
	const char DivisionSigne = '/';

	static AvailbleSignes* GetSingleInstance(){ return AvailbleSignesSingleInstance; }

private:
	static AvailbleSignes* AvailbleSignesSingleInstance;
};

//auto I = AvailbleSignes::GetSingleInstance();


void SwitchOnSigne(char _signe)
{
	switch (_signe)
	{
	case '+':
		break;
	case '-':
		break;
	case '*':
		break;
	case '/':
		break;
	default:
		std::cerr << "Not supported yet !" << std::endl;
		break;
	}
}

ADVANCE_CALCULATOR_END
