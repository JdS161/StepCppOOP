#pragma once

class Fraction
{
private:
	double	numerator;
	double	denominator;
	double	result;


public:
	Fraction();
	~Fraction();


	void Sum(double, double);
	void Subtraction(double, double);
	void Multiplication(double, double);
	void Division(double, double);

};




Fraction::Fraction()
{
}

Fraction::~Fraction()
{
}
