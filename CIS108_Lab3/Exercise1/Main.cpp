

#include <iostream>
#include <conio.h>
#include "Calculator.h"
using namespace std;


double Calculate::add(double num1, double num2);

int main()
{
	double num1;	
	double num2;	
	char op;		
	double answer;
	
	cout << '>' << endl;
	cin >> num1 >> op >> num2;

	while (true)
	{
		

		if (op == '+') {
			Calculate::add(num1, num2);
		}

		else if (op == '-')
		{
			Calculate::subtract(num1, num2);
		}

		else if (op == '*')
		{
			Calculate::multiply(num1, num2);
		}

		else if (op == '/')
		{
			Calculate::divide(num1, num2);

		}
		

		cin >> op >> num2;
		
	}
	
}
