#pragma once
#include "linkedList.h"
#define SIZE 5 //SIZE > 0
class Hash
{
	//linkedList* table;
	//unsigned const int size;
	linkedList table[SIZE];
public:
	Hash(); //creates empty table (1)
	~Hash(); //deletes table (2)
	void insertItem(Client inp); //inserts a client (3)
	void deleteItem(int inp); //finds and deletes a given key
	int hashFunction(int inp); //returns an index to a key
	void displayItem(int inp); //finds and displays a given key (4)
	Client getItem(int inp); //gets client
	void displayHash(); //displays the whole hashtable (5)
};

