#pragma once
#include "Client.h"
class Node
{
public:
	Node* next, * previous; //points to nodes before and after it
	Client client; //content of node
	Node(); //default constructor
	Node(const Client& client_input); //receives and client and assigns it to the node, points nowhere ***
	~Node(); //default destructor
	void operator =(const Node& right); //assignement operator ***
	friend bool operator ==(const Node& left, const Node& right); //bool equality operator ***
	friend bool operator !=(const Node& left, const Node& right); //bool equality operator ***
};

