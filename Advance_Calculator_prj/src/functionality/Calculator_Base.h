#include "Core.h"

ADVANCE_CALCULATOR_BEGIN

int Switch_On_Signe(char signe, int Num1, int Num2)
{
	switch (signe)
	{
	case '+' :
		return Num1 + Num2;
		break; 			 
	case '-':  			 
		return Num1 - Num2;
		break; 			 
	case '*':  			 
		return Num1 * Num2;
		break; 			
	case '/':  			 
		return Num1 / Num2;
		break; 			 
	case '^':  			 
		return Num1 ^ Num2;
		break;
	default:
		std::cerr << "The signe in not yet supported !" << std::endl;
		break;
	}
}

void Switch_On_Number(int number, int Num1, int Num2)
{
	switch (number)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		break;
	}
}

ADVANCE_CALCULATOR_END
