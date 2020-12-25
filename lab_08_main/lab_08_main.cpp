#include "pch.h"
#include <iostream>
using namespace std;

const int maxSize = 50;

void fillArray(int arr[maxSize], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

void printArray(int arr[maxSize], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
}

void setMinimumValue(int arr[maxSize], int size, int &min)
{
	min = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

}

int mainValue(int arr[maxSize], int n)
{
	int d = 1;

	for (int i = 0; i < n; i++)
	{
		d = d * arr[i];
	}
	return d;
}


void executeTaskFor(char name, int arr[maxSize], int size, int &min) {
	fillArray(arr, size);

	cout << name <<": ";
	printArray(arr, size);
	setMinimumValue(arr, size, min);
	cout << "\nMinimum elemtn it " << name << " = " << min << endl;
}

int main()
{
	int a[maxSize], b[maxSize];
	int arrSize;
	int min;
	int amin, bmin;
	int d;

	cout << "Enter array size : ";
	cin >> arrSize;

	executeTaskFor('A', a, arrSize, amin);
	executeTaskFor('B', b, arrSize, bmin);

	if (amin > bmin)
	{
		d = mainValue(a, arrSize);
		cout << "d = " << d << endl;
	}
	else if (amin < bmin)
	{
		d = mainValue(b, arrSize);
		cout << "d = " << d << endl;
	}
	else
	{
		cout << amin << " " << bmin << endl;
	}
}
