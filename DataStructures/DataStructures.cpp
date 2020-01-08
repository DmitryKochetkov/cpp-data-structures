#include "pch.h"
#include <iostream>
#include "DLinkedList.h"
#include "MyQueue.h"
#include <list>
#include <queue>

using namespace std;

int main()
{
	cout << "*** STL List ***" << endl << endl;

	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);

	for (int n : l) {
		cout << n << endl;
	}

	cout << endl << "Calling pop_front()..." << endl << endl;
	l.pop_front();

	for (int n : l) {
		cout << n << endl;
	}

	cout << endl << "Adding 6..." << endl << endl;
	l.push_back(6);

	for (int n : l) {
		cout << n << endl;
	}

	cout << endl << "Calling pop_front() twice..." << endl << endl;
	l.pop_front();
	l.pop_front();

	for (int n : l) {
		cout << n << endl;
	}

	cout << endl;

	cout << "*** My DLinkedList ***" << endl << endl;

	DLinkedList<int> l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	l1.push_back(5);

	for (int i = 0; i < l1.get_size(); i++) {
		cout << l1[i] << endl;
	}

	cout << endl << "Calling pop_front()..." << endl << endl;
	l1.pop_front();

	for (int i = 0; i < l1.get_size(); i++) {
		cout << l1[i] << endl;
	}

	cout << endl << "Adding 6..." << endl << endl;
	l1.push_back(6);

	for (int i = 0; i < l1.get_size(); i++) {
		cout << l1[i] << endl;
	}

	cout << endl << "Calling pop_front() twice..." << endl << endl;
	l1.pop_front();
	l1.pop_front();

	for (int i = 0; i < l1.get_size(); i++) {
		cout << l1[i] << endl;
	}

	cout << endl;

	cout << "*** STL Queue ***" << endl << endl;

	queue<int> q0;
	cout << "Pushing 1, 2, 3..." << endl;
	q0.push(1);
	q0.push(2);
	q0.push(3);

	cout << "Front: " << q0.front() << endl;
	cout << "Back: " << q0.back() << endl;

	cout << endl << "Calling pop()..." << endl << endl;
	q0.pop();

	cout << "Front: " << q0.front() << endl;
	cout << "Back: " << q0.back() << endl;

	cout << endl;

	cout << "Pushing 4..." << endl << endl;
	q0.push(4);

	cout << "Front: " << q0.front() << endl;
	cout << "Back: " << q0.back() << endl;

	cout << endl;

	cout << "*** My Queue ***" << endl << endl;

	MyQueue<int> q1;
	cout << "Pushing 1, 2, 3..." << endl;
	q1.push(1);
	q1.push(2);
	q1.push(3);

	cout << "Front: " << q1.front() << endl;
	cout << "Back: " << q1.back() << endl;

	cout << endl << "Calling pop()..." << endl << endl;
	q1.pop();

	cout << "Front: " << q1.front() << endl;
	cout << "Back: " << q1.back() << endl;

	cout << endl << "Pushing 4..." << endl << endl;
	q1.push(4);

	cout << "Front: " << q0.front() << endl;
	cout << "Back: " << q0.back() << endl;

	cout << endl;

	return 0;
}
