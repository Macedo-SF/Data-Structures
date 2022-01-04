#pragma once
#include "Client.h"
#define maxSize 20
class OrStaticList
{
private:
	Client List[maxSize];
	unsigned int ceiling; //used in binary search
public:
	OrStaticList(); //default constructor (1)
	~OrStaticList(); //default destructor
	void print()const; //prints whole list (5)
	void print(unsigned int); // receives index and prints ***
	void print_key(unsigned int); //receives key ***
	Client search(unsigned int); // receives key and returns Client (2)
	Client search(unsigned int, int, int); //receives key and sides, returns Client
	int bSearch(unsigned int); //receives key and returns index ***
	int bSearch(unsigned int, int, int); //receives key and sides, returns index ***
		//recursion instead of iteration
	int bSearchLI(unsigned int,  int,  int); //returns last searched index (3.b)
	void insert(Client); //inserts client into adequate index (3)
	void merge(OrStaticList); //merges two lists - improved (4)
		//merging allows two clients with same keys
	void merge_f(OrStaticList); //merges two lists ***
};

