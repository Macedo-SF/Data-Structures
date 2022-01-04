#include "linkedList.h"
linkedList::linkedList() {
	head = NULL;
}
linkedList::~linkedList() {
	Node* current = head;
	while (current) {
		head = current->next;
		delete current;
		current = head;
	}
	delete head;
}
void linkedList::append(Client inp) {
	if (head == NULL) { head = new Node(inp); return; }
	Node* current = head;
	while (current->next) {
		current = current->next;
	}
	current->next = new Node(inp);
}
void linkedList::print() {
	Node* current = head;
	while (current) {
		current->print();
		current = current->next;
	}
}