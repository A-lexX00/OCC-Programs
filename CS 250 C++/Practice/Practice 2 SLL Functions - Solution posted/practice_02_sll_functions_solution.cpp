// Definition function getNumberOfElements	
// Your code here...
int AnyList::getNumberOfElements() const
{
	return count;
}

// Definition function getFirstElement
// Assumption: List is non-empty.
// Your code here...
int AnyList::getFirstElement() const
{
	return ptrToFirst->getData();
}

// Definition function getLastElement	
// Assumption: List is non-empty.
// Your code here...
int AnyList::getLastELement() const
{
	Node *temp = ptrToFirst;

	while (temp->getPtrToNext() != nullptr)
		temp = temp->getPtrToNext();

	return temp->getData();
}

// Definition function insertBack
	// Create a pointer that points to a new node by
	//   using the overloaded constructor.	
	// Case 1: The list is empty.
		// IF statement...	
	// Case 2: The list already has one node.
	// ELSE statement...
		// Create a pointer to traverse the list.
		// Use a while loop to move your pointer forward
		// so that it reaches the last node in the loop
		// (careful! You need to get to the node BEFORE 
		// the last node--this requires some thinking!).
		// Once the loop reaches the end, then connect
		// the last node to the new node.	
	// What are you forgetting?

// Your code here...
void AnyList::insertBack(int newData)
{
	Node *ptrToNewNode = new Node(newData, nullptr);

	if (count == 0)
		ptrToFirst = ptrToNewNode;
	else
	{
		Node *current = ptrToFirst;

		while (current->getPtrToNext() != nullptr)
			current = current->getPtrToNext();

		current->setPtrToNext(ptrToNewNode);
	}

	++count;
}