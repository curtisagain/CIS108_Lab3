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
	string keys_typed = "";
	string second_keys_typed = "";


int main()
{
	
	cout << "> ";
	do
	{
		char_key = char(_getch());

		switch (char_key)
		{
			case '1': case '2': case'3': case '4': case '5': case '6': case '7': case '8': case '9': case '0': case'.':
				cout << char_key;
				if (num_now == 1)
					keys_typed += char_key;
				else
					second_keys_typed += char_key;
				break;

			case '*': case '+': case '-': case '/': case '^':
				if (num_now == 1)
				{
					num1 = stod(keys_typed);
					num_now = 2;
					keys_typed = "";
					second_keys_typed = "";
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
				num1 = Calculate::invertSign(stod(keys_typed));
				cout << endl << num1;
				break;

			case 'c': case 'C':
				cout << endl << "> Clear.";
				keys_typed = "";
				second_keys_typed = "";
				num1 = 0;
				num2 = 0;
				num_now = 1;
				break;

			case char(13) :
							cout << endl;
							if (second_keys_typed != "")
							{
									num2 = stod(second_keys_typed);
									switch (op)
									{
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
						keys_typed = to_string(num1);
						second_keys_typed = "";
						num_now = 1;
						break;

				default:
						break;
		}

	} while (char_key != 'x' && char_key != 'X');
		cout << "Bye.";
		return 0;
}
