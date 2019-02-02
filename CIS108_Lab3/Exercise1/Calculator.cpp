#include <iostream>
#include <conio.h>
#include "Calculator.h"
using namespace std;
double saved_answer;

double Calculate::add(double num1, double num2)
{
	return num1 + num2;
}

double Calculate::subtract(double num1, double num2)
{
	return num1 - num2;;
}

double Calculate::multiply(double num1, double num2)
{
	return num1 * num2;
}

double Calculate::divide(double num1, double num2)
{
	return num1 / num2;
}

double Calculate::power(double num1, double num2)
{
	return pow(num1, num2);;
}

void Calculate::save(double input_number)
{
	saved_answer = input_number;
}

double Calculate::recall()
{
	return saved_answer;
}

void Calculate::memClear()
{
	saved_answer = 0;
}

double Calculate::invertSign(double input_number)
{
	return 0.0 - input_number;;
}
