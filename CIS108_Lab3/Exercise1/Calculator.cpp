#include <iostream>
#include <conio.h>
#include "Calculator.h"
using namespace std;
double saved_answer;

double Calculate::add(double num1, double num2)
{
	return num1 + num2;
}
// adds, returns new number
double Calculate::subtract(double num1, double num2)
{
	return num1 - num2;;
}
// subtracts, returns new number
double Calculate::multiply(double num1, double num2)
{
	return num1 * num2;
}
// multiplies, returns new number
double Calculate::divide(double num1, double num2)
{
	return num1 / num2;
}
// divides, returns new number
double Calculate::power(double num1, double num2)
{
	return pow(num1, num2);;
}
// power function for ^
void Calculate::save(double input_number)
{
	saved_answer = input_number;
}
// third double saved outside loop
double Calculate::recall()
{
	return saved_answer;
}
// brings saved_answer back in as current double
void Calculate::memClear()
{
	saved_answer = 0;
}
// clears saved_answer
double Calculate::invertSign(double input_number)
{
	return 0.0 - input_number;;
}
// subtracts current double from 0 to reverse -
