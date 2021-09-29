/*
	CodeLovers

	Nguyen, Da
	Banh, Alex
	Ton, An

	CS A250
	April 29, 2018

	Lab 5
*/

#include "DoublyList.h"

// Definition function print
void DoublyList::print() const
{
	Node *current = first;

	while (current != nullptr)
	{
		cout << current->getData() << "  ";
		current = current->getNext();
	}
}

// Definition function reversePrint
void DoublyList::reversePrint() const
{
	Node *current = last;

	while (current != nullptr)
	{
		cout << current->getData() << "  ";
		current = current->getPrev();
	}
}

// Definition function front
int DoublyList::front() const
{
	return first->getData();
}

// Definition function back
int DoublyList::back() const
{
	return last->getData();
}

// Definition function copyToList
void DoublyList::copyToList(DoublyList& otherList) const
{
	Node *temp = last;

	while (temp != nullptr)
	{
		otherList.insertFront(temp->getData());
		temp = temp->getPrev();
	}
}

// Definition function insertInOrder 
void DoublyList::insertInOrder(int insertElement)
{	
	if (first == nullptr || first->getData() > insertElement)
	{
		insertFront(insertElement);	
	}
	else
	{
		Node *newNode = new Node(insertElement, nullptr, nullptr);

		if (last->getData() < insertElement)
		{
			last->setNext(newNode);
			newNode->setPrev(last);
			last = newNode;
			count++;
		}
		else
		{
			Node *current = first->getNext();
			bool found = false;

			while (current != nullptr && !found)
			{
				if (current->getData() >= insertElement)
				{
					newNode->setNext(current);
					newNode->setPrev(current->getPrev());
					current->getPrev()->setNext(newNode);
					current->setPrev(newNode);	

					count++;
					found = true;
				}
				else
					current = current->getNext();
			}
		}
	}
}