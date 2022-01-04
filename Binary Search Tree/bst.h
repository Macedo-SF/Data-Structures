#pragma once
#include "Node.h"
class bst
{
public:
	Node* root; //tree root
	bst(); //default constructor
	~bst(); //destructor
	void clean(Node* input); //auxiliary method to destroy tree
	void preorder(); //prints root to base, left to right
	void postorder(); //prints base to root, left to right ***
	void toRoot(Node* input); //prints base to root, single path
	void insert(const Client& input); //inserts a client inside the tree
	Node* getNode(const unsigned int& input); //searches and returns a node, returns null if ot present
	void rotateLeft(); //rotates to the left
	void rotateRight(); //rotates to the right
	//the tree isn't balanced, rotating will eventually break
};