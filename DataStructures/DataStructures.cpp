#include "pch.h"
#include <iostream>
#include "DLinkedList.h"
#include <list>

using namespace std;

int main()
{
	cout << "*** STL List ***" << endl << endl;

	list<int> l;
	l.push_back(2);
	l.push_back(3);

	for (int n : l) {
		cout << n << endl;
	}

	cout << endl;

	cout << "*** My DLinkedList ***" << endl << endl;

	DLinkedList<int> l1;
	l1.push_back(2);
	l1.push_back(3);

	cout << l1[0] << endl;
	cout << l1[1] << endl;

	return 0;
}
