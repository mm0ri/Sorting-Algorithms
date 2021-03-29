#include "Functions.h"
#include "Input.h"
#include <iostream>
using namespace std;

void PrintData()
{
	for (int i = 0; i < Size; i++)
	{
		cout << Arr[i] << " | ";
	}
}

void ArrayGenerator()
{
	for (int i = 0; i < Size; i++)
	{
		Arr[i] = 1 + rand() % 50;
	}
}

void SelectionSort()
{
	for (int k = 0; k < Size; k++)
	{
		minimum = k;

		for (int j = k + 1; j < Size; j++)
		{
			minimum = (Arr[j] < Arr[minimum]) ? j : minimum;
		}

		if (k != minimum)
		{
			buff = Arr[k];
			Arr[k] = Arr[minimum];
			Arr[minimum] = buff;
		}
	}
}

void BubbleSort()
{
	for (int i = 0; i < Size - 1; i++)
	{
		for (int j = Size - 1; j > i; j--)
		{
			if (Arr[j] < Arr[j - 1])
			{
				buff = Arr[j - 1];
				Arr[j - 1] = Arr[j];
				Arr[j] = buff;
				//PrintData();
				//cout <<'\n' << '\n';
			}
		}
	}
}

void InsertionSort()
{
	int k = 0, i = 0;
	for (int j = 1; j < Size; j++)
	{
		k = Arr[j];
		i = j - 1;
		while (i >= 0 && Arr[i]>k)
		{
			Arr[i + 1] = Arr[i];
			i = i - 1;
			Arr[i + 1] = k;
		}
	}
} 

