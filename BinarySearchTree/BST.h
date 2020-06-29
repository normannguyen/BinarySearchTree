#include <iostream>

template <typename T>

class Node {
public:
	int key;
	Node* left;
	Node* right;
};

template <typename T>

class BinarySearchTree
{
public:
	Node <T>* head;
	Node <T>* tail;
	int linkSize;
	BinarySearchTree() {
		head = nullptr;
		tail = nullptr;
		linkSize = 0;
	}
	void InsertNode(T newData);

};