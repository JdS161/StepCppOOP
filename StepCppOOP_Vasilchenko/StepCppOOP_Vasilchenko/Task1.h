#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

//Реализуйте класс Дробь.Необходимо хранить числитель
//и знаменатель в качестве переменных - членов.Реализуйте
//функции - члены для ввода данных в переменные - члены,
//для выполнения арифметических операций(сложение,
//	вычитание, умножение, деление, и т.д.).

class Fraction
{
private:
	double	numerator;
	double	denominator;
	

public:
	Fraction();
	Fraction(double, double);
	//~Fraction();


	void Sum(double, double);
	void Subtraction(double, double);
	void Multiplication(double, double);
	void Division(double, double);

};






//Fraction::~Fraction()
//{
//}



