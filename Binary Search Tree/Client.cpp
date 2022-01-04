#include "Client.h"
//constructors
Client::Client() {
	Key = NULL;
	Name = "";
}
Client::Client(const unsigned int& k, const std::string& n) {
	Key = k;
	Name = n;
}
//destructor
Client::~Client() {
	//static, no use
}
//getters
unsigned int Client::getKey() const {
	return Key;
}
std::string Client::getName() const {
	return Name;
}
//prints
void Client::print()const {
	if (Key != 0) {
		std::cout << Key << ", " << Name << std::endl;
	}
	else { std::cout << 0 << ", " << "dummy" << std::endl; }
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
bool operator <=(const Client& left, const Client& right) {
	if (left.Key <= right.Key) { return true; }
	else { return false; }
}
bool operator >=(const Client& left, const Client& right) {
	if (left.Key >= right.Key) { return true; }
	else { return false; }
}