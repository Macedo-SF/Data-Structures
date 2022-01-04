#include "pQueue.h"
//constructor
pQueue::pQueue() {
	size = 0;
}
//destructor
pQueue::~pQueue() {

}
//insertion
void pQueue::push(Client input) {
	if (size == SIZE) { return; }
	size++;
	items[size-1] = input;
	push2top(size-1);
}
//getter
Client pQueue::top() const {
	return items[0];
}
//deletion
void pQueue::pop() {
	items[0] = items[size - 1];
	items[size - 1] = Client();
	size--;
	push2bot(0);
}
//display
void pQueue::print() const {
	for (unsigned int i = 0; i < size; i++) {
		items[i].print();
	}
}
//change piority
void pQueue::push2top(int input) {
	int parent = (input - 1) / 2;
	if (items[input] > items[parent]) {
		swap(input, parent);
		push2top(parent);
	}
}
void pQueue::push2bot(int input) {
	int largest = input;
	int left = (2 * input) + 1;
	int right = (2 * input) + 2;
	if (left<size and items[left]>items[largest]) {
		largest = left;
	}
	if (right<size and items[right]>items[largest]) {
		largest = right;
	}
	if (largest != input) {
		swap(input, largest);
		push2bot(largest);
	}
}
//check empty/full
bool pQueue::isEmpty() const {
	if (size == 0) { return true; }
	return false;
}
bool pQueue::isFull() const {
	if (size == SIZE) { return true; }
	return false;
}
//swap
void pQueue::swap(int a, int b) {
	Client aux = items[a];
	items[a] = items[b];
	items[b] = aux;
}