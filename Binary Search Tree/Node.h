#pragma once
#include "Client.h"
class Node
{
public:
	Node* previous, * left, * right; //points to nodes before and after it, left and right
	Client client; //content of node
	Node(); //default constructor
	Node(const Client& client_input); //receives and client and assigns it to the node, points nowhere ***
	~Node(); //default destructor
	void preorder(); //prints to base, left to right
	void postorder(); //prints to root, left to right ***
	void toRoot(); //prints single path to root
	void operator =(const Node& right); //assignement operator ***
	friend bool operator ==(const Node& left, const Node& right); //bool equality operator ***
	friend bool operator !=(const Node& left, const Node& right); //bool equality operator ***
};

