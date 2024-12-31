#include <iostream>

#include "BinarySearchTree.h"

using namespace std;

int main()
{
    BinarySearchTree bst;

    // Test: isEmpty
    cout << "Testing isEmpty on an empty tree: " << (bst.isEmpty() ? "Pass" : "Fail") << std::endl;

    // Test: Insert nodes
    bst.insert(new BSTNode(50, 1.1f)); // Root node
    bst.insert(new BSTNode(30, 2.2f)); // Left child of root
    bst.insert(new BSTNode(70, 3.3f)); // Right child of root
    bst.insert(new BSTNode(20, 4.4f)); // Left child of 30
    bst.insert(new BSTNode(40, 5.5f)); // Right child of 30
    bst.insert(new BSTNode(60, 6.6f)); // Left child of 70
    bst.insert(new BSTNode(80, 7.7f)); // Right child of 70
    cout << "Inserted nodes into the tree." << endl;

    // Test: isEmpty after insertions
    cout << "Testing isEmpty on a non-empty tree: " << (!bst.isEmpty() ? "Pass" : "Fail") << std::endl;

    // Test: Print tree
    cout << "Tree contents (in-order):" << endl;
    bst.printTree();

    // Test: Search for existing key
    BSTNode* foundNode = bst.search(30);
    cout << "Testing search for key 30: " << (foundNode != NULL && foundNode->key == 30 ? "Pass" : "Fail") << endl;
    if (foundNode) delete foundNode; // Cleanup copy returned by search

    // Test: Search for non-existing key
    foundNode = bst.search(100);
    cout << "Testing search for key 100 (non-existing): " << (foundNode == NULL ? "Pass" : "Fail") << endl;

    // Test: Delete node with no children (20)
    bool deleteResult = bst.deleteNode(20);
    cout << "Testing delete node 20 (no children): " << (deleteResult ? "Pass" : "Fail") << endl;

    // Test: Delete node with one child (30)
    deleteResult = bst.deleteNode(30);
    cout << "Testing delete node 30 (one child): " << (deleteResult ? "Pass" : "Fail") << endl;

    // Test: Delete node with two children (50)
    deleteResult = bst.deleteNode(50);
    cout << "Testing delete node 50 (two children): " << (deleteResult ? "Pass" : "Fail") << endl;

    // Test: Print tree after deletions
    cout << "Tree contents (in-order) after deletions:" << endl;
    bst.printTree();

    // Test: Destructor cleanup
    cout << "Deleting the tree..." << endl;

    bst.~BinarySearchTree();

    return 0;
}