#include "Node.h"
//constructors
Node::Node() {
	next = NULL;
	previous = NULL;
	//default is null/empty
}
Node::Node(const Client& client_input) {
	client = client_input;
	next = NULL;
	previous = NULL;
}
//destructor
Node::~Node() {
	//
}
//operators
void Node::operator=(const Node& right) {
	client = right.client;
	next = right.next;
	previous = right.previous;
}
bool operator ==(const Node& left, const Node& right) {
	if (left.client == right.client and left.next == right.next and left.previous == right.previous) {
		return true;
	}
	return false;
}
bool operator !=(const Node& left, const Node& right) {
	if (left.client == right.client and left.next == right.next and left.previous == right.previous) {
		return false;
	}
	return true;
}