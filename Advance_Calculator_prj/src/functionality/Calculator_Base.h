#include "Core.h"

ADVANCE_CALCULATOR_BEGIN
static bool toQuit = false;

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

void Switch_On_Number(int number, int Num1, int Num2, char signe, int result)
{
	switch (number)
	{
	case 1:
		break;
	case 2:
		std::cout << "Enter statement in FORM[signe Num2] : "; std::cin >> signe >> Num2;
		if (isdigit(Num2) && isalpha(signe))
		{
			std::cout << "Please enter the correct form next time : " << std::endl;
			break;
		}
		result = Switch_On_Signe(signe, result, Num2);
		std::cout << "Result : " << result << std::endl << std::endl;
		std::cout << "======================================================" << std::endl;
		std::cout << "=============Enter Any number to quit=================" << std::endl;
		std::cout << "=============Enter 1 to recalculate===================" << std::endl;
		std::cout << "=============Enter 2 to use the result as num1========" << std::endl;
		std::cout << "=============Enter 3 to use the result as num2========" << std::endl;
		std::cout << "======================================================" << std::endl;
		std::cout << std::endl;

		std::cout << "Please enter a number from the list up : "; std::cin >> number;
		std::cout << std::endl;

		Calculator::Switch_On_Number(number, Num1, Num2, signe, result);
		break;
	case 3:
		std::cout << "Enter statement in FORM[Num1 signe] : "; std::cin >> Num1 >> signe;
		if (isdigit(Num2) && isalpha(signe))
		{
			std::cout << "Please enter the correct form next time : " << std::endl;
			break;
		}
		result = Switch_On_Signe(signe, Num1, result);
		std::cout << "Result : " << result << std::endl << std::endl;
		std::cout << "======================================================" << std::endl;
		std::cout << "=============Enter Any number to quit=================" << std::endl;
		std::cout << "=============Enter 1 to recalculate===================" << std::endl;
		std::cout << "=============Enter 2 to use the result as num1========" << std::endl;
		std::cout << "=============Enter 3 to use the result as num2========" << std::endl;
		std::cout << "======================================================" << std::endl;
		std::cout << std::endl;

		std::cout << "Please enter a number from the list up : "; std::cin >> number;
		std::cout << std::endl;

		Calculator::Switch_On_Number(number, Num1, Num2, signe, result);
		break;
	default:
		toQuit = true;
		system("exit");
		break;
	}
}

ADVANCE_CALCULATOR_END
