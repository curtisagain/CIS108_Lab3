

#include <iostream>
#include <conio.h>
#include "Calculator.h"
#include <string>
using namespace std;




	double num1;	
	double num2;	
	char op;		
	int num_now = 1;
	char char_key;
	string entry1 = "";
	string entry2 = "";


int main()
{
	
	cout << "> ";
	do
	{
		char_key = char(_getch());

		switch (char_key)
		{// use string for numbers at this point so adding them concatenates into longer number.
			case '1': case '2': case'3': case '4': case '5': case '6': case '7': case '8': case '9': case '0': case'.':
				cout << char_key;
				if (num_now == 1)
					entry1 += char_key;
				else
					entry2 += char_key;
				break;

			case '*': case '+': case '-': case '/': case '^':
				if (num_now == 1)
				{
					num1 = stod(entry1);
					num_now = 2;
					entry1 = "";
					entry2 = "";
				}
				cout << char_key;
				op = char_key;
				break;

			case 's': case 'S':
				cout << endl << "> Saved.";
				Calculate::save(num1);
				break;

			case 'r': case 'R':
				cout << endl << "> Recalled.";
				num1 = Calculate::recall();
				cout << endl << num1;
				break;

			case 'm': case 'M':
				cout << endl << "> Memory Clear.";
				Calculate::memClear();
				break;

			case 'i': case 'I':
				cout << endl << "> Inverted";
				num1 = Calculate::invertSign(stod(entry1));
				cout << endl << num1;
				break;

			case 'c': case 'C':
				cout << endl << "> Clear.";
				entry1 = "";
				entry2 = "";
				num1 = 0;
				num2 = 0;
				num_now = 1;
				break;

			case char(13) :
							cout << endl;
							if (entry2 != "")
							{// stod reads string for input that can be converted to a float
									num2 = stod(entry2);
									switch (op)
									{// calls functions from the namespace in header, goes through function in calculator.cpp.
										case '+':
											num1 = Calculate::add(num1, num2);
											break;
										case '-':
											num1 = Calculate::subtract(num1, num2);
											break;
										case '*':
											num1 = Calculate::multiply(num1, num2);
											break;
										case '/':
											num1 = Calculate::divide(num1, num2);
											break;
										case '^':
											num1 = Calculate::power(num1, num2);
											break;
										default:
											break;
									}
							}
						cout << num1 << endl << "> ";
						entry1 = to_string(num1);
						entry2 = "";
						num_now = 1;
						break;

				default:
						break;
		}

	} while (char_key != 'x' && char_key != 'X');
	// do above loop while char does not equal x.
		cout << "Goodbye.";
		return 0;
}
