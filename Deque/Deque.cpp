#include "Deque.h"
//constructor ---------------------------------------------------------------------------------------
Deque::Deque() {
	head = tail = NULL;
}
//destructor ---------------------------------------------------------------------------------------
Deque::~Deque() {
	Node* current = head;
	while (current != NULL) {
		current = head->next;
		delete head;
		head = current;
	}
	//head = NULL;
	tail = NULL;
}
//prints ---------------------------------------------------------------------------------------
void Deque::print() const {
	Node* current = head;
	while (current != NULL) {
		std::cout << current->client.getKey() << ", " << current->client.getName() << std::endl;
		current = current->next;
	}
	std::cout << "______________________________" << std::endl;
	current = tail;
	while (current != NULL) {
		std::cout << current->client.getKey() << ", " << current->client.getName() << std::endl;
		current = current->previous;
	}
}
void Deque::printH() const {
	Node* current = head;
	while (current) {
		current->client.print();
		current = current->next;
	}
}
void Deque::printT() const {
	Node* current = tail;
	while (current) {
		current->client.print();
		current = current->previous;
	}
}
//push ---------------------------------------------------------------------------------------
void Deque::push_front(const Client& new_client) {
	Node* temp = new Node(new_client);
	if (head) {
		head->previous = temp;
		temp->next = head;
		head = temp;
		//if (tail->previous == NULL) { tail->previous = head; }
	}
	else {
		head = tail = temp;
	}
}
void Deque::push_back(const Client& new_client) {
	Node* temp = new Node(new_client);
	if (tail) {
		tail->next = temp;
		temp->previous = tail;
		tail = temp;
		//if (head->next == NULL) { head->next = tail; }
	}
	else {
		head = tail = temp;
	}
}
//pop  ---------------------------------------------------------------------------------------
void Deque::pop_front() {
	if (head and head != tail) {
		Node* temp = head->next;
		temp->previous = NULL;
		delete head;
		head = temp;
	}
	else if (head) {
		delete head;
		head = NULL;
		tail = NULL;
	}
}
void Deque::pop_back() {
	if (tail and tail != head) {
		Node* temp = tail->previous;
		temp->next = NULL;
		delete tail;
		tail = temp;
	}
	else if (tail) {
		delete tail;
		head = NULL;
		tail = NULL;
	}
}
//catch  ---------------------------------------------------------------------------------------
Client Deque::catch_front() {
	Client ret;
	if (head and head != tail) {
		ret = head->client;
		Node* temp = head->next;
		temp->previous = NULL;
		delete head;
		head = temp;
	}
	else if (head) {
		ret = head->client;
		delete head;
		head = tail = NULL;
	}
	return ret;
}
Client Deque::catch_back() {
	Client ret;
	if (tail and tail != head) {
		ret = tail->client;
		Node* temp = tail->previous;
		temp->next = NULL;
		delete tail;
		tail = temp;
	}
	else if (tail) {
		ret = head->client;
		delete tail;
		head = tail = NULL;
	}
	return ret;
}
//peek  ---------------------------------------------------------------------------------------
Client Deque::front()const {
	if (head) {
		return head->client;
	}
	else { return Client(); }
}
Client Deque::back()const {
	if (tail) {
		return tail->client;
	}
	else { return Client(); }
}