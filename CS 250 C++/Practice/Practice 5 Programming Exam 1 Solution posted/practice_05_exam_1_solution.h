/*
	(name header)
*/

#pragma once

#include "DoublyList.h"

class DoublyListChild : public DoublyList
{
public:
	// Definition insertBeforeLast
	/*
		Parameter: An integer storing new data to insert in the list.
		Restrictions: Can create only 1 pointer.
		Assumptions: The calling object has at least 2 nodes.			
	*/
	// Your code here...
	void insertBeforeLast(int newData)
	{
		/*
			Point out:
				No need to check if list is empty (assumption).
				A pointer is NOT a node.
		*/

		Node *ptr = last->getPrev();
		ptr->setNext(new Node(newData, ptr, last));
		last->setPrev(ptr->getNext());
		++count;
	}

	// Definition printBackwards
	/*
		Restrictions: Can create only 1 pointer.
		Assumptions: The calling object has at least one node.
	*/
	// Your code here...
	void printBackwards() const
	{
		/*
			Point out:
				No need to check if list is empty (assumption).
				A pointer is NOT a node.
		*/

		Node *ptr = last;
		while (ptr != nullptr)
		{
			cout << ptr->getData() << " ";
			ptr = ptr->getPrev();
		}
	}

	// Do NOT write below this line.
	DoublyListChild() {}
	~DoublyListChild() {}
};