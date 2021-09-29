/*
	Banh, Alex

	CS A250
	February 10, 2018

	Lab 1
*/

#include <cstdlib>
#include <iostream>
using namespace std;

const int CAPACITY = 10;

// Declaration function insertAtIndex
void insertAtIndex(int a[], int& numElements, int num, int index);

#include "Testing.hxx"

int main( )
{
	testCases();

	cout << endl;
	system("Pause");
    return 0;
}

// Definition function insertAtIndex
void insertAtIndex(int a[], int& numElements, int num, int index)
{
	int insertNum = 0;
	if(numElements >= CAPACITY)
	{
		cerr << "Array is full. Cannot insert another element." << endl;
	}
	else if (index > numElements)
	{
		cerr << "You can only insert contiguous elements in the array."  << endl;
	}
	else if (index > CAPACITY)
	{
		cerr << "The array cannot have more than " << CAPACITY << " elements." << endl;
	}
	else
	{
		++numElements;
		for (int i = index; i <= numElements; i++)
		{
			insertNum = a[i];
			a[i + 1] = insertNum;
		}
		a[index] = num;
	}
}