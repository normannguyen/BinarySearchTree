//YOU MUST INCLUDE the ifndef, define and endif!!!!!!
//IF NOT IT WON'T WORK!!

#ifndef __BSTree_H__
#define __BSTree_H__
#include <iostream>

//Node Class
template <typename T>
class Node {
public:
	T key;
	Node<T>* left = NULL;
	Node<T>* right = NULL;
};

//Template
template <typename T>

//BST Class
class BSTree
{
public:
	Node<T>* node;
	//Constructor
	BSTree()
	{
		node = NULL;
	}
	//Insert Node
	Node<T>* insertNode(Node<T>* node, T value);
	Node<T>* FindMin(Node<T>* root);
	//Delete node function
	Node<T>* Delete(Node<T>* node, T value);
	//Find Max function
	Node<T>* FindMax(Node<T>* node);
	//Inorder traversal: Display using Inorder
	void InOrder(Node<T>* node);
	//PostOrder traversal: Display using PostOrder
	void PostOrder(Node<T>* node);
	//Preorder traversal: Display using Preorder
	void PreOrder(Node<T>* node);
	Node<T>* newNode(T value);
};
#endif
