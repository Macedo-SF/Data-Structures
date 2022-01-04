#pragma once
#include "Node.h"
class linkedList
{
public:
	//attributes
	Node* head;
	//methods
	linkedList();
	~linkedList();
	void append(Client inp);
	void print();
};

