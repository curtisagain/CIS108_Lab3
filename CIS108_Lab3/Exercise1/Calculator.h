#pragma once
#include <iostream>
#include <conio.h>
namespace Calculate
{
	double add(double num1, double num2);
	double subtract(double num1, double num2);
	double multiply(double num1, double num2);
	double divide(double num1, double num2);
	double power(double num1, double num2);
	void save(double input_number);
	double recall(); //these two functions don't need outputs.
	void memClear();
	double invertSign(double input_number);
}
