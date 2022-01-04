#pragma once
#define SIZE 20
#include "Client.h"
class pQueue
{
	Client items[SIZE];
	int size;
	void swap(int a, int b); //swaps two clients with given indexes
public:
	pQueue();
	~pQueue();
	void push(Client input); //inserts client into bottom *1
	Client top() const; //shows the highest priority/first client *2
	void pop(); //removes the highest priority/first client *3
	void print() const; //prints the queue to screen *4
	void push2top(int input); //pushes up client at index(input)
	void push2bot(int input); //pushes down client at index(input)
	bool isEmpty() const;
	bool isFull() const;
};