# Binary Search Tree (BST) Implementation

## Overview
This project provides a comprehensive C++ implementation of a **Binary Search Tree (BST)**. The BST is a hierarchical data structure optimized for efficient operations such as search, insertion, deletion, and traversal. The tree ensures that:
- Values in the left subtree are smaller than the node's value.
- Values in the right subtree are greater than the node's value.

## Implementation Files
- [Test Driver](https://github.com/EricDelgado993/Binary-Search-Tree/blob/main/BinarySearchTree/BinarySearchTree/TestDriver.cpp)
- [BinaryTree.h](https://github.com/EricDelgado993/Binary-Search-Tree/blob/main/BinarySearchTree/BinarySearchTree/BinarySearchTree.h)
- [BinaryTree.cpp](https://github.com/EricDelgado993/Binary-Search-Tree/blob/main/BinarySearchTree/BinarySearchTree/BinarySearchTree.cpp)
    
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
