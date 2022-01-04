#pragma once
#include "Client.h"
class Node
{
public:
	//attributes
	Node* next;
	Client data;
	//methods
	Node();
	Node(Client inp);
	~Node();
	void print();
};

