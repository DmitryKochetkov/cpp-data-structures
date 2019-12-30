#pragma once
#include "ListNode.h"

template<typename T>
class DLinkedList
{
	
public:

	DLinkedList() {
		size = 0;
		head = nullptr;
	}

	size_t get_size() { return size; }
	
	const T & operator[](unsigned index) {
		ListNode<T>* temp = head;
		while (index > 0 && temp->next != nullptr) {
			temp = temp->next;
			index--;
		}
		return temp->data;
	}

	void push_front(const T & data) {
		ListNode<T>* temp = new ListNode<T>(data);
		temp->next = head;
		head = temp;
		size++;
	}

	void push_back(const T & data) {
		ListNode<T>* temp = new ListNode<T>(data);
		if (head == nullptr) {
			head = temp;
		}
		else {
			ListNode<T>* current = head;
			while (current->next != nullptr)
				current = current->next;
			current->next = temp;
		}
	}
	

private:
	size_t size;
	ListNode<T> *head;
};

