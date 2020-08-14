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
			std::cout << Result << std::endl << std::endl << std::endl;
		}

	} while (true);

	return 0;
}