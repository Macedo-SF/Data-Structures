#include "Client.h"
//constructors
Client::Client() {
	Key = NULL;
	Name = "";
}
Client::Client(unsigned int k, std::string n) {
	Key = k;
	Name = n;
}
//destructor
Client::~Client() {
	//static, no use
}
//getters
unsigned int Client::getKey() {
	return Key;
}
std::string Client::getName() {
	return Name;
}
//prints
void Client::print()const {
	std::cout << Key << ", " << Name << std::endl;
}
//operators
void Client::operator=(const Client& right) {
	Key = right.Key;
	Name = right.Name;
}
bool operator ==(const Client& left, const Client& right) {
	if (left.Key == right.Key and left.Name == right.Name) {
		return true;
	}
	return false;
}
bool operator <(const Client& left, const Client& right) {
	if (left.Key < right.Key) { return true; }
	else { return false; }
}
bool operator >(const Client& left, const Client& right) {
	if (left.Key > right.Key) { return true; }
	else { return false; }
}