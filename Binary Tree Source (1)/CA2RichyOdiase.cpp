#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

int main() {
	BinaryTree<int> tree;
	int items[] = { 5, 3, 7, 2, 4, 6, 8 };
	for (int i = 0; i < 7; i++) {
		tree.add(items[i]);
	} 

	cout << "In-order traversal: ";
	tree.printInOrder();

	int key = 4;
	if (tree.containsKey(key)) {
		cout << "Tree contains key: " << key << endl;
	}
	else {
		cout << "Tree does not contain key: " << key << endl;
	}

	tree.clear();
	cout << "Count after clearing: " << tree.count() << endl
		return 0;
}