/*
	(name header)
*/

#include "AnyList.h"

//deleteNode
void AnyList::deleteNode(int deleteData)
{
	//Case 1: List is empty
	if (ptrToFirst == nullptr)  // check if the list is empty
								// you can also use: if (count < 1)
	{
		cerr << "Cannot delete from an empty list.\n";  // use cerr, rather than cout (why?)
	}
	else
	{
		Node *current = ptrToFirst;   //create a pointer to traverse the list	
									  //this pointer will start with the first node in the list
		bool found = false;	   //set a boolean value to keep track of 
							   //   whether the item is found or not

		//Case 2: The node to be deleted is the first
		if (ptrToFirst->getData() == deleteData)
		{
			ptrToFirst = ptrToFirst->getPtrToNext(); //make the second node become 
													 //  the first in the list						
			delete current; //delete the node current is pointing to 
							//  (in this case it is the old first node)
			current = nullptr; // null the pointer to avoid dangling pointers
			--count;
			found = true;
		}
		//Case 3: The node might be somewhere in the list; keep on searching the list...
		else
		{
			Node *trailCurrent = ptrToFirst; //create a pointer trailCurrent to point to the first  
											 //   node and be right behind pointer current

			current = ptrToFirst->getPtrToNext(); //set current to point to the second node

			while ((current != nullptr) && (!found)) //while you are not to the end of the list
			{										 //   and the item has not been found
													 //we already checked the first node
													 //  and we know it does not contain 
													 //  the data we are looking for,
													 //  so we look at the second node
													 //  (pointer current is pointing to the second node)
				if (current->getData() == deleteData)	//if current is pointing to the item
				{										//  to be deleted, delete that node

														//Case 2: The item was found
					trailCurrent->setPtrToNext(current->getPtrToNext());
					delete current;
					current = nullptr;
					--count;
					found = true;
				}
				else
				{
					trailCurrent = current;	//move trailCurrent forward
					current = current->getPtrToNext();	//move current forward
				}
			}
		}
		//Case 4: Not found
		if (!found)
			cout << "Item to be deleted is not in the list." << endl;
	}
}