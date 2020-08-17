#include "functionality/Core.h"
#include "functionality/Calculator_Base.h"

int main()
{
	std::cout << "===============================================" << std::endl;
	std::cout << "===============Advance_Calculator==============" << std::endl;
	std::cout << "======================By=======================" << std::endl;
	std::cout << "==================Mar_Dev_GE===================" << std::endl;
	std::cout << "===============================================" << std::endl;
	std::cout << std::endl;

	int NumA, NumB;
	char Signe;
	int Number = 0;
	int Result;

	do
	{
		std::cout << "Please enter statement in FORM[Num1 signe Num2] : ";
		std::cin >> NumA >> Signe >> NumB;

		if (isdigit(NumA) && isalpha(Signe) && isdigit(NumB))
		{
			std::cout << "Please enter the correct form : " << std::endl;
		}
		else
		{
			Result = Calculator::Switch_On_Signe(Signe, NumA, NumB);
			std::cout << "Result : " << Result << std::endl << std::endl;

			std::cout << "======================================================" << std::endl;
			std::cout << "=============Enter Any number to quit=================" << std::endl;
			std::cout << "=============Enter 1 to recalculate===================" << std::endl;
			std::cout << "=============Enter 2 to use the result as num1========" << std::endl;
			std::cout << "=============Enter 3 to use the result as num2========" << std::endl;
			std::cout << "======================================================" << std::endl;
			std::cout << std::endl;

			std::cout << "Please enter a number from the list up : "; std::cin >> Number;
			std::cout << std::endl;

			Calculator::Switch_On_Number(Number, NumA, NumB, Signe, Result);
		}

	} while (!Calculator::toQuit);

	return 0;
}