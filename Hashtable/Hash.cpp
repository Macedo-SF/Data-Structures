#include "Hash.h"
//constructor
Hash::Hash() {
	//size=inp; size=(default)
	//table = new linkedList(size);
}
//destructor
Hash::~Hash() {
	//
}
//insert
void Hash::insertItem(Client inp) {
	table[hashFunction(inp.getKey())].append(inp);
	//a chave é lida apenas uma vez
	//há somente uma escrita com o new
	//o número de leituras e escritas é igual ao número de colisões
}
//deletion auxiliary
void Hash::deleteItem(int inp) {
	if (table[hashFunction(inp)].head) {
		Node* current = table[hashFunction(inp)].head;
		Node* aux = NULL;
		if (!current) { return; }
		if (current->data.getKey() == inp) {
			aux = current;
			this->table[hashFunction(inp)].head = current->next;
			delete aux;
			return;
		}
		while (current->next) {
			if (current->next->data.getKey() == inp) {
				aux = current->next;
				current->next = current->next->next;
				delete aux;
				return;
			}
			else { current = current->next; }
		}
	}
}
//hashing
int Hash::hashFunction(int inp) {
	return (inp % SIZE);
}
//search
void Hash::displayItem(int inp) {
	//o número de leituras e escritas é igual ao número de colisões
	if (table[hashFunction(inp)].head) {
		Node* current = table[hashFunction(inp)].head;
		while (current) {
			if (current->data.getKey() == inp) {
				current->data.print();
				return;
			}
			current = current->next;
		}
	}
}
//getter
Client Hash::getItem(int inp) {
	if (table[hashFunction(inp)].head) {
		Node* current = table[hashFunction(inp)].head;
		while (current) {
			if (current->data.getKey() == inp) {
				return current->data;
			}
			current = current->next;
		}
	}
}
//display
void Hash::displayHash() {
	for (unsigned int i = 0; i < 5; i++) {
		std::cout << "Index " << i << ":" << std::endl;
		table[i].print();
	}
}