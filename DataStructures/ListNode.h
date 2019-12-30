#pragma once
template <typename T>
class ListNode
{
public:
	const T & data;
	ListNode *next;
	ListNode *prev;

	ListNode(const T & data=T()): data(data), next(nullptr), prev(nullptr) {}
};

