/*
	(name header)
*/

#include "AnyList.h"

//Declaration function search
bool AnyList::search(int key) const
{
	if (count == 0) //can also use: if (ptrToFirst == nullptr)
	{
		cerr << "The list is empty.";
		return false;
	}
	else
	{
		Node *current = ptrToFirst;

		while (current != nullptr)
		{
			if (current->getData() == key)
				return true;
			else
				current = current->getPtrToNext();
		}

		return false;
	}
}

//Definition function commonEnds
bool AnyList::commonEnds(const AnyList& otherList) const
{
	if (count == 0 || otherList.count == 0)
		return false;
	else if (count == 1 && otherList.count == 1)
		return (ptrToFirst->getData() == otherList.ptrToFirst->getData());
	else
	{
		if (ptrToFirst->getData() == otherList.ptrToFirst->getData()) 
		{
			Node *callingObj = ptrToFirst;
			while (callingObj->getPtrToNext() != nullptr)
				callingObj = callingObj->getPtrToNext();
			
			Node *paramObj = otherList.ptrToFirst;			
			while (paramObj->getPtrToNext() != nullptr)
				paramObj = paramObj->getPtrToNext();

			return (callingObj->getData() == paramObj->getData());
		}
		return false;
	}
}
