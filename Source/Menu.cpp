#include <iostream>
#include "Functions.h"

using namespace std;

int Variant;
int FirstVariant;

void ShowMenu()
{
	cout << "=============================" << endl;
	cout << "Selection menu" << endl << "\n";
	cout << "1.Selection Sort" << endl;
	cout << "2.Buuble Sort" << endl;
	cout << "3.Insertion Sort" << endl;
	cout << "4.Quick Sort" << endl << "\n";
	cout << "5.Exit" << endl;
	cout << "=============================" << endl;
	cout << "\n" << "Enter your selection" << endl;
	cin >> Variant;
	cout << endl;
}

void MenuSelection()
{
	do
	{
		ShowMenu();

		switch (Variant)
		{
		case 1:
			ArrayGenerator();
			system("cls");

			cout << "Generated Array:" << '\n';
			PrintData();

			SelectionSort();

			cout << '\n' << "Selection Sort:" << '\n';
			PrintData();

			cout << "\n";
			break;

		case 2:
			ArrayGenerator();
			system("cls");

			cout << "Generated Array:" << '\n';
			PrintData();
			BubbleSort();

			cout << '\n' << "Buuble Sort:" << '\n';
			PrintData();

			cout << "\n";
			break;

		case 3:
			ArrayGenerator();
			system("cls");

			cout << "Generated Array:" << '\n';
			PrintData();
			InsertionSort();

			cout << '\n' << "Insertion Sort:" << '\n';
			PrintData();

			cout << "\n";
			break;

		case 4:
			ArrayGenerator();
			system("cls");

			cout << "Generated Array:" << '\n';
			PrintData();
			QuickSort(0,9); // Here first num is 0 and last 9 (cuz Size of arr 10) Idk how i can use size in this function yet.

			cout << '\n' << "Quick Sort:" << '\n';
			PrintData();

			cout << "\n";
			break;

		case 5:
			cout << "Good Bye. Stopping programm.";
			Variant = 5;
			break;

		default: cout << "Wrong input. Exit";
			Variant = 5;
		}

	} while (Variant != 5);

}
