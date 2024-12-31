//====================================================================================
// File:	BinarySearchTree.h
// Author:	Eric Delgado
// Date:	03/12/22
// 
// Description:
// This header file defines the BinarySearchTree class and its associated structures.
// It includes the definition of the BSTNode structure used for the binary search tree
// and the declaration of various operations, such as insertion, deletion, search,
// and tree traversal.
//====================================================================================

#pragma once

#include <iostream>

struct BSTNode
{
	int key;
	float item;
	BSTNode* left;
	BSTNode* right;

	// Default constructor to initialize the node
	BSTNode() : key(NULL), item(NULL), left(NULL), right(NULL) {}

	// Constructor to initialize the node
	BSTNode(int k, float i) : key(k), item(i), left(NULL), right(NULL) {}
};

class BinarySearchTree
{
private:
	BSTNode* root;
	void deleteNodes(BSTNode* node);

public:
	BinarySearchTree();
	~BinarySearchTree();
	bool isEmpty();
	BSTNode* search(int key);
	bool insert(BSTNode* newNode);
	bool deleteNode(int key);
	void printTree();
	void printTree(BSTNode* root);
};