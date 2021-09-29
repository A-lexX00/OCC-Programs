/*
Banh, Alex

CS A250
March 14, 2018

Lab 8
*/

/*
After you completed the implementation, answer the following questions.

1) Why are the parameter lists in the testCopyConstructor and
testOverloadedAssignment functions passed by VALUE and not reference?

Answer:  They are being called by value because the stuff in the link list needs 
		 to be changed directly when the calling list is different than the 
		 parameter list.


2) When the function testOverloadedAssignment is called, why is it being
re-directed to the copy constructor instead of the overloaded assignment
operator?

Answer: It needs to use it's fuctions to copy the data over into the 
		calling list.


3) The first testing case for the overloaded assignment operator compares
a list to itself (line 6). Shouldn't an error message be displayed?
Why is it not displaying?

Answer: 


*/

#include "DoublyList.h"

// overloaded insertion operator


ostream& operator<<(ostream& out, const DoublyList& list)
{
	// List is Empty
	if (list.first == nullptr)
	{
		cerr << "List is empty";
	}
	else
	{
		Node * current = list.first;
		while (current->getNext() != nullptr)
		{
			out << current->getData() << " ";
			current = current->getNext();
		}
	}
	return out;
}

// copy constructor
DoublyList::DoublyList(const DoublyList& otherList)
{
	count = 0;
	first = NULL;
	last = NULL;
	if (otherList.count == 0)
	{
		cout << "List is empty";
	}
	else
	{
		Node * current = otherList.first;
		while (current->getNext() != nullptr)
		{
			insertBack(current->getData);
			current = current->getNext();
		}
	}
}

// overloaded assignment operator
DoublyList& DoublyList::operator=(const DoublyList& rightSide)
{
	// Calling List and Parameter List are the same
	if (&rightSide == this)
	{
		cerr << "Attempted assignment to itself.";
	}
	// Calling List is empty
	else if (first == nullptr)
	{
		Node * current = rightSide.first;
		while (current != nullptr)
		{
			insertBack(current->getData);
			current = current->getNext();
		}
	}
	// Calling object has more nodes than parameter object
	else if (count > rightSide.count)
	{
		Node * current = first;
		Node * rightCurrent = rightSide.first;

		//Copy the overlapping nodes
		while (rightCurrent != nullptr)
		{
			insertBack(rightCurrent->getData());
			rightCurrent = rightCurrent->getNext();
			current = current->getNext();
		}

		// delete Nodes
		Node * deleteNode = last;
		last = deleteNode->getPrev();
		while (deleteNode != current)
		{
			last = deleteNode->getPrev();
			delete deleteNode;
			deleteNode = last;
		}
		deleteNode = nullptr;
		last->setNext(nullptr);
	}
	// Calling object has fewer nodes than the parameter object
	else if (count < rightSide.count)
	{
		Node * current = first;
		Node * rightCurrent = rightSide.first;

		//Copy the overlapping nodes
		while (current != nullptr)
		{
			current->setData(rightCurrent->getData());
			current = current->getNext();
			rightCurrent = rightCurrent->getNext();
		}

		// insert back Nodes
		while (rightCurrent != nullptr)
		{
			insertBack(rightCurrent->getData());
			rightCurrent = rightCurrent->getNext();
		}
	}
	// Calling object has the same number of nodes
	else if (count = rightSide.count)
	{
		Node * current = first;
		Node * rightCurrent = rightSide.first;
		while (current != nullptr)
		{
			current->setData(rightCurrent->getData());
			current = current->getNext();
			rightCurrent = rightCurrent->getNext();
		}
	}
	// Parameter List is empty
	else 
	{
		destroyList();
	}

	return *this;
}