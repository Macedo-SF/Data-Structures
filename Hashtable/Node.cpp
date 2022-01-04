#include "Node.h"
Node::Node() {
	next = NULL;
}
Node::Node(Client inp) {
	next = NULL;
	data = inp;
}
Node::~Node() {

}
void Node::print() {
	data.print();
}