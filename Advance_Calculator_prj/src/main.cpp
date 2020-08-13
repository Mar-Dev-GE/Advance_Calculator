#include "functionality/Core.h"

int NumA, NumB;
char Signe;
int Result;

int main()
{
	std::cout << "===============================================" << std::endl;
	std::cout << "===============Advance_Calculator==============" << std::endl;
	std::cout << "======================By=======================" << std::endl;
	std::cout << "==================Mar_Dev_GE===================" << std::endl;
	std::cout << "===============================================" << std::endl;
	std::cout << std::endl;

	std::cout << "Please enter statement to calculat [FORM][Num1 Signe Num2] : ";
	std::cin >> NumA >> Signe >> NumB;

	if (isdigit(NumA) && isalpha(Signe) && isdigit(NumB))
	{
		std::cerr << "Wrong form statemnt ! Please enter right form statemnt !" << std::endl;
	}

	while (Signe != 'Q')
	{
		std::cout << "Please enter statement to calculat [FORM][Num1 Signe Num2] : ";
		std::cin >> NumA >> Signe >> NumB;
	}
	

	/*
	std::cout << "===========================================" << std::endl;
	std::cout << "====Enter '1' to enter other statement=====" << std::endl;
	std::cout << "====Enter '2' to use the result as Num1====" << std::endl;
	std::cout << "====Enter '3' to use the result as Num2====" << std::endl;
	std::cout << "=====Enter '0' to terminat the program=====" << std::endl;
	std::cout << "===========================================" << std::endl;
	*/

	return 0;
}