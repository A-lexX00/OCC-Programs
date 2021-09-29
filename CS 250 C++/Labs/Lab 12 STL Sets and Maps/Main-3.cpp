/*
CodeLovers

Nguyen, Da
Banh, Alex
Ton, An

CS A250
April 28, 2018

Lab 12
*/

#include <iostream>
#include <set>
#include <map>

using namespace std;

int countClumps(const multiset<int>& myset);
bool linearIn(const multimap<int, int>& mymap);
void multiples(set<int>& myset, int n);
void printSet(const set<int>& myset);

int main()
{
	multiset<int> mset1 = { 1, 2, 2, 3, 4, 4 };
	multiset<int> mset2 = { 1, 2, 2, 3 };
	multiset<int> mset3 = {};
	cout << "The number of clumps in each set:\n" <<
		"set 1 -> " << countClumps(mset1) <<
		"\nset 2 -> " << countClumps(mset2) <<
		"\nset 3 -> " << countClumps(mset3);
	multimap<int, int> map1 = { { 3, 3 }, { 4, 4 }, { 5, 1 }, { 6, 2 }, { 7, 3 }, { 7, 5 }
	};
	multimap<int, int> map2 = { { 3, 6 }, { 4, 6 }, { 5, 6 }, { 6, 6 } };
	multimap<int, int> map3 = { { 3, 3 }, { 3, 3 }, { 3, 4 }, { 4, 3 } };
	cout << "\n\nCheck if the map is linear\n" <<
		"map 1 -> " << (linearIn(map1) ? "True" : "False") <<
		"\nmap 2 -> " << (linearIn(map2) ? "True" : "False") <<
		"\nmap 3 -> " << (linearIn(map3) ? "True" : "False");
	set<int> set1;
	set<int> set2;
	set<int> set3;
	cout << "\n\nSet of 10 multiples of 2: ";
	multiples(set1, 2);
	printSet(set1);
	cout << "\nSet of 10 multiples of 5: ";
	multiples(set2, 5);
	printSet(set2);
	cout << "\nSet of 10 mutiples of 15: ";
	multiples(set3, 15);
	printSet(set3);
	cout << "\n";
	system("Pause");
	return 0;
}

int countClumps(const multiset<int>& myset)
{
	int count = 0;
	multiset<int> newSet;
	for (multiset<int>::const_iterator iterSet = myset.cbegin();
		iterSet != myset.cend(); iterSet++)
	{
		if (myset.count(*iterSet) >= 2 && (newSet.find(*iterSet) == newSet.end())) 
			count++;
		newSet.insert(*iterSet);
	}
	return count;
}

bool linearIn(const multimap<int,int>& mymap)
{
	for (multimap<int, int>::const_iterator iterMap = mymap.cbegin();
		iterMap != mymap.cend(); iterMap++)
	{
		pair<multimap<int, int>::const_iterator, multimap<int, int>::const_iterator> 
			newPair = mymap.equal_range(iterMap->second);
		if (distance(newPair.first, newPair.second) == 0) return false;
	}
	return true;
}

void multiples(set<int>& myset, int n)
{
	int count = 2;
	while (myset.size() < 10)
	{
		if (n*count % 10 != n)
		{
			myset.insert(n * count);
		}
		count++;
	}
}

void printSet(const set<int>& myset)
{
	for (set<int>::iterator iterSet = myset.begin(); iterSet != myset.end(); iterSet++)
	{
		cout << *iterSet << " ";
	}
}