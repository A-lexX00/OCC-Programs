/*
	(name header)
*/

#include <iostream>
using namespace std;

const int CAPACITY = 10;

// Declaration function insertAtIndex
void insertAtIndex(int a[], int& numOfElements, int element, int idx);

#include "Testing.hxx"

int main( )
{
	testCases();

	cout << endl;
	system("Pause");
    return 0;
}

// Definition function insertAtIndex
void insertAtIndex(int a[], int& numOfElements, int element, int idx)
{
	if (numOfElements == CAPACITY)
		cerr << "Array is full. Cannot insert another element." << endl;
	else if (idx >= CAPACITY)
		cerr << "The array cannot have more than " << CAPACITY << " elements." << endl;
	else if (idx > numOfElements)
		cerr << "You can only insert contiguous elements in the array." << endl;
	else
	{
		// shift numbers 
		for (int i = numOfElements - 1; i >= idx; --i)
			a[i + 1] = a[i];

		// insert element
		a[idx] = element;

		// update number of elements in the array
		++numOfElements;
	}
}

