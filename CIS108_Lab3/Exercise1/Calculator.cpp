#include <iostream>
#include <conio.h>
#include "Calculator.h"
using namespace std;

float Calculate (double num1, char op, double num2)
{
	switch (op)
	{
	case '+':
		return num1 + num2;
	case '-':
		return num1 - num2;
	case '*':
		return num1 * num2;
	case '/':
		return num1 / num2;
	default:
		return 0;
	}
}