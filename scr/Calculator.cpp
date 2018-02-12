#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
	const double pi = 3.141592653;
	double num1, num2, radian, degree, result;
	int c;
	char choice;
	system("color 0A");
	cout << "|------------------WELCOME------------------| \n";
	do {
		system("cls");
		do {
			cout << "|------------------MENU-------------------| \n";
			cout << "| 1)Addition                              | \n";
			cout << "| 2)Subtraction                           | \n";
			cout << "| 3)Multiplication                        | \n";
			cout << "| 4)Division                              | \n";
			cout << "| 5)Exponential                           | \n";
			cout << "| 6)Logarithmic                           | \n";
			cout << "| 7)ln                                    | \n";
			cout << "| 8)Root                                  | \n";
			cout << "|-----------------------------------------| \n" << endl;
			cout << "Your choice : ";
			cin >> c;
		} while (c < 1 || c > 8);
		switch (c)
		{
		case 1: {
			cout << "You selected Addition Operation" << endl;
			cout << "Enter two numbers please : ";
			cin >> num1 >> num2;
			cout << "Result = " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			break;
		}


		case 2:
		{
			cout << "You selected Subtraction Operation" << endl;
			cout << "Enter two numbers please : ";
			cin >> num1 >> num2;
			cout << "Result = " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			break;
		}

		case 3:
		{
			cout << "You selected Multiplication Operation" << endl;
			cout << "Enter two numbers please : ";
			cin >> num1 >> num2;
			cout << "Result = " << num1 << " * " << num2 << " = " << num1*num2 << endl;
			break;
		}
		case 4:
		{
			cout << "You selected Division Operation" << endl;
			cout << "Enter two numbers please : ";
			cin >> num1 >> num2;
			if (num1 == 0 && num2 == 0)
			{
				cout << "Ambiguous\n";
			}
			else if (num2 == 0)
			{
				cout << "Undefined\n";
			}
			else
			{
				cout << "Result = " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			}
		}
		case 5:
		{
			cout << "You selected Exponential Operation" << endl;
			cout << "Enter the base number : ";
			cin >> num1;
			cout << "Enter the exponent number : ";
			cin >> num2;
			cout << "Result = " << pow(num1, num2) << endl;
			break;

		}
		case 6:
		{
			cout << "You selected Logarithmic Operation" << endl;
			cout << "Which number do you want to take logarithms? : ";
			cin >> num1;
			cout << "Sonuc = " << log10(num1) << endl;
			break;
		}
		case 7:
		{
			cout << "You selected ln Operation" << endl;
			cout << "Which number do you want to take ln? : ";
			cin >> num1;
			cout << "Result = " << log(num1) << endl;
			break;
		}
		case 8:
		{
			cout << "You selected Root Operation" << endl;
			cout << "Which number do you want to take root? : ";
			cin >> num1;
			cout << "Result = " << sqrt(num1) << endl;
			break;
		}

		default:
		{
			cout << "You selected wrong something." << endl;
			break;
		}

		}

		cout << "If you want to use again press 1 otherwise press any key for quit : ";
		cin >> choice;
	} while (choice == '1');


	system("pause");
	return 0;


