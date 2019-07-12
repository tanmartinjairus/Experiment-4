#include <iostream>

using namespace std;

void sort(int amo, int arr[])
{
	int i, j, temp;


	for (i = 0; i < amo; i++)
	{

		for (j = 0; j < amo - i - 1; j++)
		{

			if (arr[j] > arr[j + 1])
			{

				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}

		}
	}

	cout << "After using selection or bubble sort... " << endl << "\nSorted data: ";

	for (int i = 0; i < amo; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int amo, arr[100];

	cout << "\t\tSelection sorting\n";
	cout << "Enter the array size: ";
	cin >> amo;

	cout << "\nEnter the " << amo << " elements: \n";
	for (int i = 0; i < amo; i++)
	{
		cin >> arr[i];
	}

	cout << "Your data: ";

	for (int i = 0; i < amo; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl << endl;

	sort(amo, arr);

	system("pause");
	return 0;
}