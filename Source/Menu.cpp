#include <iostream>
#include "Functions.h"

using namespace std;

int Variant;
int FirstVariant;

void ShowMenu()
{
	cout << "=============================" << endl;
	cout << "Selection menu" << endl;
	cout << "1.Selection Sort" << endl;
	cout << "2.Buuble Sort" << endl;
	cout << "3.-" << endl;
	cout << "4.-" << endl;
	cout << "5. Exit" << endl;
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
			system("clear");

			cout << "Generated Array:" << '\n';
			PrintData();

			SelectionSort();

			cout << '\n' << "Selection Sort:" << '\n';
			PrintData();

			cout << "\n";
			break;

		case 2:
			ArrayGenerator();
			system("clear");

			cout << "Generated Array:" << '\n';
			PrintData();
			BubbleSort();

			cout << '\n' << "Buuble Sort:" << '\n';
			PrintData();

			cout << "\n";
			break;

		/*case 3:
			cout << "Third";
			cout << "\n";
			break;

		case 4:
			cout << "Fourth";
			cout << "\n";
			break;*/

		case 5:
			cout << "Good Bye. Stopping programm.";
			Variant = 5;
			break;

		default: cout << "Wrong input. Exit";
			Variant = 5;
		}

	} while (Variant != 5);

}
