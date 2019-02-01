#include <iostream>
#include <conio.h>
#include "Calculator.h"
using namespace std;
double answer;


double Calculate::add(double num1, double num2)
{
	cout << num1 + num2;
	answer = num1 + num2;
	return answer;
}

double Calculate::subtract(double num1, double num2)
{
	cout  << num1 - num2;
	answer = num1 - num2;
	return answer;
	
}

double Calculate::multiply(double num1, double num2)
{
	
	cout << num1 * num2;
	answer = num1 * num2;
	return answer;
	
}

double Calculate::divide(double num1, double num2)
{
	cout << num1 / num2;
	answer = num1 / num2;
	return answer;
}
