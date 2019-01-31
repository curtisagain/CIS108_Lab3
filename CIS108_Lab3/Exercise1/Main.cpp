
#include <iostream>
#include <conio.h>
#include "Calculator.h"
using namespace std;


int main()
{
	double num1 = 0.0;
	double num2 = 0.0;
	double solution = 0.0;
	char op;
	
	cout << ">";
	// from https://tutorials.visualstudio.com/cpp-calculator/add
	
	while (true) 
{
	
	cin >> num1 >> op >> num2;
	solution = Calculate(num1, op, num2);
	cout << "<" << solution << "/n";

}
return 0;
}