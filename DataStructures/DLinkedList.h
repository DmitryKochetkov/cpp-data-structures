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

	~DLinkedList() {
		//std::cout << "Destructor for DLinkedList called" << std::endl;
		
		//Option 1
		
		
		for (ListNode<T>* ptr = head; head; head = head->next)
		{
			delete ptr;
		}
		
		

		//Option 2 (requires recursive destructor for ListNode)
		//delete head;
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
			head->next = head; //cycle. review!
			head->prev = head; //cycle. review!
		}
		else {	
			// implementation with no tail

			/*
			ListNode<T>* current = head;
			while (current->next != nullptr)
				current = current->next;
				temp->prev = current;
				temp->next = head;
			*/ 

			//implementation with tail ( O(1) )


			temp->prev = tail; //here we mean an old tail
			tail->prev = tail;
			tail->next = temp; //and here
		}
		tail = temp; //changing a tail
		tail->next = head; //cycle
		head->prev = tail; //cycle
		size++;
	}

	void pop_front() {
		head = head->next;
		head->next->prev = tail;
		tail->next = head;
		size--;
	}
	

private:
	size_t size;
	ListNode<T> *head;
	ListNode<T> *tail; //optional, but required for Queue
};

