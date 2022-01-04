#include "Node.h"
//constructors
Node::Node() {
	previous = NULL;
	left = NULL;
	right = NULL;
	//default is null/empty
}
Node::Node(const Client& client_input) {
	client = client_input;
	previous = NULL;
	left = NULL;
	right = NULL;
}
//destructor
Node::~Node() {
	//
}
//prints
void Node::preorder() {
	client.print();
	if (left) {
		left->preorder();
	}
	if (right) {
		right->preorder();
	}
}
//--
void Node::postorder() {
	if (left) {
		left->postorder();
	}
	if (right) {
		right->postorder();
	}
	client.print();
}
//--
void Node::toRoot() {
	client.print();
	if (previous) {
		previous->toRoot();
	}
}
//operators
void Node::operator=(const Node& input) {
	client = input.client;
	previous = input.previous;
	left = input.left;
	right = input.right;
}
bool operator ==(const Node& inp1, const Node& inp2) {
	if (inp1.client == inp2.client and inp1.previous == inp2.previous and inp1.left == inp2.left and inp1.right == inp2.right) {
		return true;
	}
	return false;
}
bool operator !=(const Node& inp1, const Node& inp2) {
	if (inp1.client == inp2.client and inp1.previous == inp2.previous and inp1.left == inp2.left and inp1.right == inp2.right) {
		return false;
	}
	return true;
}