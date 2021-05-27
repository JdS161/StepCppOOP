#include "Task1.h"


Fraction::Fraction()
{
	numerator		= 0;
	denominator		= 0;
}

Fraction::Fraction(double _numerator, double _denominator)
{
	numerator = _numerator;
	denominator = _denominator;
}

void Fraction::Sum(double _numerator, double _denominator)
{
	numerator = _numerator;
	denominator = _denominator;
	cout << "Sum: " << numerator << " + " << denominator << " = " 
		<< numerator + denominator << endl;

}

void Fraction::Subtraction(double _numerator, double _denominator)
{
	numerator = _numerator;
	denominator = _denominator;
	cout << "Subtraction: " << numerator << " - " << denominator << " = " 
		<< numerator - denominator << endl;

}

void Fraction::Multiplication(double _numerator, double _denominator)
{
	numerator = _numerator;
	denominator = _denominator;
	cout << "Multiplication: " << numerator << " * " << denominator << " = " 
		<< numerator * denominator << endl;

}

void Fraction::Division(double _numerator, double _denominator)
{
	numerator = _numerator;
	denominator = _denominator;
	if (denominator == 0)
	{
		cout << "Division by zero is PROHIBITED!" << endl;
		return;
	}

	cout << "Division: " << numerator << " / " << denominator << " = "
		<< numerator / denominator << endl;

}

