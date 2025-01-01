# Binary Search Tree (BST) Implementation

## Overview
This project provides a comprehensive C++ implementation of a **Binary Search Tree (BST)**. The BST is a hierarchical data structure optimized for efficient operations such as search, insertion, deletion, and traversal. The tree ensures that:
- Values in the left subtree are smaller than the node's value.
- Values in the right subtree are greater than the node's value.

---

## 📂 Implementation Files
- [Test Driver](https://github.com/EricDelgado993/Binary-Search-Tree/blob/main/BinarySearchTree/BinarySearchTree/TestDriver.cpp)
- [BinaryTree.h](https://github.com/EricDelgado993/Binary-Search-Tree/blob/main/BinarySearchTree/BinarySearchTree/BinarySearchTree.h)
- [BinaryTree.cpp](https://github.com/EricDelgado993/Binary-Search-Tree/blob/main/BinarySearchTree/BinarySearchTree/BinarySearchTree.cpp)

---

## Key Features
### Core Functionalities
- **Insertion**: Adds new elements while maintaining the BST property.
- **Search**: Efficiently finds elements using the binary search algorithm.
- **Deletion**: Removes elements, including cases where nodes have two children.
- **Traversal**: Supports multiple traversal methods:
  - **In-order**: Visits nodes in ascending order.
  - **Pre-order**: Visits nodes in depth-first order.
  - **Post-order**: Visits children before the parent node.
### Advanced Features
- **Dynamic Node Management**: Utilizes a custom `BSTNode` structure with support for keys and additional data.
- **Tree Printing**: Outputs the tree structure in ascending order.
- **Memory Management**: Implements recursive deletion to free all nodes and prevent memory leaks.

---

## TestDriver Output
```plaintext
Testing isEmpty on an empty tree: Pass
Inserted nodes into the tree.
Testing isEmpty on a non-empty tree: Pass
Tree contents (in-order):
20
30
40
50
60
70
80
Testing search for key 30: Pass
Testing search for key 100 (non-existing): Pass
Testing delete node 20 (no children): Pass
Testing delete node 30 (one child): Pass
Testing delete node 50 (two children): Pass
Tree contents (in-order) after deletions:
40
60
70
80
Deleting the tree...
