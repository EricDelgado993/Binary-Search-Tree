//====================================================================================
// File:	BinarySearchTree.cpp
// Author:	Eric Delgado
// Date:	03/12/22
// 
// Description:
// This source file implements the member functions of the BinarySearchTree class.
// It provides functionalities for creating, searching, inserting, deleting, and
// printing nodes in the binary search tree.
//====================================================================================

#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree()
{
	root = NULL;
}

BinarySearchTree::~BinarySearchTree()
{
	// Start deleting from the root
	deleteNodes(root);

	// Set root to NULL after all nodes are deleted.
	root = NULL;
}

void BinarySearchTree::deleteNodes(BSTNode* node)
{
	if (node != NULL)
	{
		deleteNodes(node->left);	// Delete left subtree.
		deleteNodes(node->right);	// Delete right subtree.
		delete node;				// Delete current node.
	}
}

bool BinarySearchTree::isEmpty()
{
	return (root == NULL);
}

BSTNode* BinarySearchTree::search(int key)
{
	BSTNode* temp = root;

	// Iterate through the tree to find a matching key.
	while (temp != NULL && key != temp->key)
	{
		// Move left if the search key is less than the current node's key.
		if (key < temp->key)
		{
			temp = temp->left;
		}

		// Move right if the search key is greater than the current node's key.
		else
		{
			temp = temp->right;
		}

	}

	// The search key was not found. Exit funtion.
	if (temp == NULL)
	{
		return NULL;
	}

	else
	{
		// Duplicate the found node and return the duplicate
		BSTNode* copy = new BSTNode();
		copy->item = temp->item;
		copy->left = NULL;
		copy->right = NULL;
		copy->key = temp->key;
		return copy;
	}
}

bool BinarySearchTree::insert(BSTNode* newNode)
{
	BSTNode* temp = root;
	BSTNode* prev = NULL;

	// Iterate through tree to find an available location.
	while (temp != NULL)
	{
		prev = temp;

		// Iterate to the left if newNode's key is less than the current node's key.
		if (newNode->key < temp->key)
		{
			temp = temp->left;
		}

		// Iterate to the right if newNode's ket is greater than the current node's key.
		else
		{
			temp = temp->right;
		}
	}

	// Insert newNode as the root is tree is empty.
	if (prev == NULL)
	{
		root = newNode;
		return true;
	}

	// Insert newNode as its parent's left child if its value is less than its parent's.
	else if (newNode->key < prev->key)
	{
		prev->left = newNode;
		return true;
	}

	// Insert newNode as its parent's right child if its value is greater than its parent's.
	else
	{
		prev->right = newNode;
		return true;
	}

	// newNode failed to be appended onto the tree.
	return false;
}

bool BinarySearchTree::deleteNode(int key)
{
	BSTNode* temp = root;
	BSTNode* prev = NULL;

	// Iterate through the tree to find a matching key.
	while (temp != NULL && key != temp->key)
	{
		prev = temp;

		// Move left if the search key is less than the current node's key.
		if (key < temp->key)
		{
			temp = temp->left;
		}

		// Move right if the search key is greater than the current node's key.
		else
		{
			temp = temp->right;
		}
	}

	// The search key was not found. Exit funtion.
	if (temp == NULL)
	{
		return false;
	}

	BSTNode* delNode = temp;	// The node to be deleted.
	BSTNode* delParent = prev;	// Parent of the node to be deleted.

	// Handle the case if delNode has no children or one child on the left.
	if (delNode->right == NULL)
	{
		// Case if delNode is the root.
		if (delParent == NULL)
		{
			root = delNode->left;
			delete delNode;
			return true;
		}

		// Find which side of delParent delNode is located on.
		else
		{
			if (delParent->left == delNode)
			{
				delParent->left = delNode->left;
			}

			else
			{
				delParent->right = delNode->left;
			}

			delete delNode;
			return true;
		}
	}

	// Handle the case if delNode has one child on the right.
	else if (delNode->left == NULL)
	{
		// Case if delNode is the root.
		if (delParent == NULL)
		{
			root = delNode->right;
			delete delNode;
			return true;
		}

		// Find which side of delParent delNode is located on.
		else
		{
			if (delParent->left == delNode)
			{
				delParent->left = delNode->right;
			}

			else
			{
				delParent->right = delNode->right;
			}

			delete delNode;
			return true;
		}
	}

	// Handle case where delNode has two children.
	// Finds a replacement node which is the node with the largest key value within
	// delNode's left subtree.
	else
	{
		// Step into left subtree by traversing into delNode's left node.
		temp = delNode->left;	// The replacement node for delNode.
		prev = delNode;			// Parent of the replacement node.

		// Traverse to the right until the largest value is found.
		while (temp->right != NULL)
		{
			prev = temp;
			temp = temp->right;
		}

		// Case if temp has no right subtree after control steps into
		// delNode's left node for the first time.
		// Overwrite delNode's data with temp (replacement node).
		if (prev == delNode)
		{
			delNode->item = temp->item;
			delNode->key = temp->key;
			prev->left = temp->left;
		}

		// Case if temp's right subtree exists and is fully iterated though.
		// Overwrite delNode's data with temp (replacement node).
		else
		{
			delNode->item = temp->item;
			delNode->key = temp->key;
			prev->right = temp->left;
		}

		delete temp;
		return true;
	}

	return false;

}

void BinarySearchTree::printTree()
{
	BSTNode* treeNode = root;

	printTree(treeNode);

}

void BinarySearchTree::printTree(BSTNode* node)
{
	if (node != NULL)
	{
		printTree(node->left);
		std::cout << node->key << std::endl;
		printTree(node->right);
	}
}