#include <iostream>
#include "BinaryTree.h"
#include "TNode.h"

using namespace std;

int main()
{

	BinaryTree newTree;

	newTree.addNode(10);
	newTree.addNode(5);
	newTree.addNode(12);
	newTree.addNode(1);
	newTree.addNode(23);
	newTree.addNode(51);
	newTree.addNode(92);
	newTree.addNode(7);
	newTree.addNode(17);
	newTree.addNode(8);
	newTree.addNode(62);
	newTree.addNode(101);

	newTree.printTree("", newTree.getRoot(), false);

}
