#include <iostream>
using namespace std;

int addition(int X, int Y)
{
	int Sum = 0;
	Sum = X + Y;
	return Sum;
}

int subtraction(int X, int Y)
{
	int Dif = 0;
	Dif = X - Y;
	return Dif;
}

int multiplication(int X, int Y)
{
	int Pro = 0;
	Pro = X * Y;
	return Pro;
}

double division(double X, double Y)
{
	double Quo = 0;
	Quo = X / Y;
	return Quo;
}

int modulo(int X, int Y)
{
	int Rem = 0;
	Rem = X % Y;
	return Rem;
}

int main()
{
	int choice;
	double a, b, res;
	char pick;
	bool quit = true;

		cout << "\t\t***Calculator***\n";

		do
		{
			cout << "\nMENU: \n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Modulus";
			cout << "\nEnter your choice: ";
			cin >> choice;

			switch (choice)
			{
			case 1:
			{
				cout << "\nEnter your two numbers:";
				cin >> a >> b;

				res = addition(a, b);

				cout << "Result: " << res;
				break;
			}

			case 2:
			{
				cout << "\nEnter your two numbers:";
				cin >> a >> b;

				res = subtraction(a, b);

				cout << "Result: " << res;
				break;
			}

			case 3:
			{
				cout << "\nEnter your two numbers:";
				cin >> a >> b;

				res = multiplication(a, b);

				cout << "Result: " << res;
				break;
			}

			case 4:
			{
				cout << "\nEnter your two numbers:";
				cin >> a >> b;

				if (b == 0)
				{
					cout << "\nEnter a second number which is not 0";
				}
				else
				{
					res = division(a, b);
					cout << "Result: " << res;
				}
				break;
			}

			case 5:
			{
				cout << "\nEnter your two numbers:";
				cin >> a >> b;

				if (b == 0)
				{
					cout << "\nEnter a second number which is not 0";
				}
				else
				{
					res = modulo(a, b);
					cout << "Result: " << res;
				}
				break;
			}

			default:
			{
				cout << "Enter a number from 1 to 5." << endl;
				break;
			}
			}
			
			cout << "\nDo you want to continue? \n[Y]es \n[N]o \n";
			cin >> pick;

			switch (pick)
			{
			case 'Y':
			case 'y':
			{
				quit = false;
				break;
			}

			case 'N':
			case 'n':
			{
				quit = true;
				break;
			}

			default:
			{

				quit = true;
				break;
			}

			}

		} while (quit != true);

	cout << "Press any key to leave";

	system("pause");
	return 0;

}