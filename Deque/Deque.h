#pragma once
#include "Node.h"
class Deque
{
private:
	Node* head, * tail;
public:
	Deque(); //default constructor
	~Deque(); //destructor
	void print() const; //prints head to tail and tail to head
	void printH() const; //prints head to tail using Client::Print ***
	void printT() const; // prints tail to head using Client::Print ***
	void push_front(const Client& new_client); //pushes a new client to head
	void push_back(const Client& new_client); //pushes a new client to tail
	void pop_front(); //pops the head client ***
	void pop_back(); //pops the tail client ***
	Client catch_front(); //pops and returns the head client
	Client catch_back(); //pops and returns the tail client
	Client front() const; //peeks at head ***
	Client back() const; //peeks at tail ***
};

