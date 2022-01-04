#pragma once
#include <iostream>
class Client
{
private:
	unsigned int Key; //client key
	std::string Name; //client name
public:
	Client(); //creates an empty client
	Client(unsigned int, std::string); //creates a client with given key and name
	~Client(); //default destructor
	unsigned int getKey(); //returns key ***
	std::string getName(); //returns name ***
	void print()const; //prints client's data
	void operator =(const Client& right); //assignement operator ***
	friend bool operator ==(const Client& left, const Client& right); //bool equality operator ***
	friend bool operator <(const Client& left, const Client& right); //bool less than operator ***
	friend bool operator >(const Client& left, const Client& right);//bool greater than operator ***
};

