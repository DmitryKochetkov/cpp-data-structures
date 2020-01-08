#include "DLinkedList.h"

#pragma once
template <typename T>
class MyQueue
{
public:
	MyQueue() {
		list = DLinkedList<T>();
	}

	~MyQueue() {
		//delete list;
	}

	void push(const T &data) {
		list.push_back(data);
	}

	void pop() {
		list.pop_front();
	}

	const T & front() {
		return list[0];
	}

	const T & back() {
		return list[list.get_size() - 1];
	}

private:
	DLinkedList<T> list;
};

