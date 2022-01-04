#include "bst.h"
//constructor
bst::bst() {
	//root = NULL;
}
//destructor
bst::~bst() {
	if (root) {
		clean(root);
	}
}
//aux to destructor
void bst::clean(Node* input) {
	if (input->left) {
		clean(input->left);
	}
	if (input->right) {
		clean(input->right);
	}
	delete input;
}
//preorder
void bst::preorder() {
	if (root) {
		root->preorder();
	}
}
//postorder
void bst::postorder() {
	if (root) {
		root->postorder();
	}
}
void bst::toRoot(Node* input) {
	if (input) {
		input->toRoot();
	}
}
//insert
void bst::insert(const Client& input) {
	Node* temp = new Node(input);
	if (root) {
		Node* aux = root;
		while (true) {
			if (aux->client < input) {
				if (aux->right) {
					aux = aux->right;
				}
				else {
					temp->previous = aux;
					aux->right = temp;
					return;
				}
			}
			else {
				if (aux->left) {
					aux = aux->left;
				}
				else {
					temp->previous = aux;
					aux->left = temp;
					return;
				}
			}
		}
	}
	else {
		root = temp;
	}
}
//getter
Node* bst::getNode(const unsigned int& input) {
	Node* ret = root;
	while (ret) {
		if (ret->client.getKey() == input)
			return ret;
		else if (ret->client.getKey() < input)
			ret = ret->right;
		else
			ret = ret->left;
	}
	return NULL;
}
//rotation
void bst::rotateLeft() {
	Node* temp = root;
	if (root) {
		root = root->right;
		root->previous = NULL;
		temp->previous = root;
		temp->right = root->left;
		temp->right->previous = temp;
		root->left = temp;
	}
}
void bst::rotateRight() {
	Node* temp = root;
	if (root) {
		root = root->left;
		root->previous = NULL;
		temp->previous = root;
		temp->left = root->right;
		temp->left->previous = temp;
		root->right = temp;
	}
}