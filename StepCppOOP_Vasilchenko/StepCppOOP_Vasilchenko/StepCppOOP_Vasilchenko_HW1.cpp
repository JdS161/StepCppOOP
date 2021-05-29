#include <iostream>
#include <iomanip>

#include "Task1.h"
#include "Task2.h"

using namespace std;

//#define Task1
#define Task2

int main()
{

#ifdef Task1

	double numA, numB;


	Fraction fraction(numA, numB);
	fraction.Sum(numA, numB);
	fraction.Division(numA, numB);
	fraction.Subtraction(numA, numB);
	fraction.Multiplication(numA, numB);

#endif // Task1

	
#ifdef Task2

	Contact first((char*)"Alex Smith", 123456789, 23456, 41343123, (char*)"Engineer");
	first.Print();

	Contact second;
	second.Print();

	system("pause");

#endif // Task2




}

