//Binary Search Tree Program: Contains the functions that are made.

#include <iostream>
#include "BSTree.h"

using namespace std;
// Init a new Node
template <typename T>
Node<T>* BSTree<T>::newNode(T value) {
	Node<T>* temp = new Node<T>();
	temp->key = value;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

// Insert a Node
template <typename T>
Node<T>* BSTree<T>::insertNode(Node<T>* root, T value) {
	if (root == NULL)
	{
		return newNode(value);
	}
	if (value > root->key)
	{
		root->right = insertNode(root->right, value);
	}
	else if (value < root->key)
	{
		root->left = insertNode(root->left, value);
	}
	return root;
}

//Delete Function: Delete a number/node from the BST
template<typename T>
Node<T>* BSTree<T>::Delete(Node<T>* root, T value)
{
	if (root == NULL)
	{
		return root;
	}
	if (value < root->key)
	{
		root->left = Delete(root->left, value);
	}
	else if (value > root->key)
	{
		root->right = Delete(root->right, value);
	}
	//If the data is the same, 
	else {
		if (root->left == NULL) {
			Node<T>* temp = root->right;;
			delete root;
			return temp;
		}
		//
		else if (root->right == NULL) {
			Node<T>* temp = root->left;;
			delete root;
			return temp;
		}
		else {
			Node<T>* temp = FindMin(root->right);
			root->key = temp->key;
			root->right = Delete(root->right, temp->key);
		}
	}
	return root;
}
//Find the mininum
template <typename T>
Node<T>* BSTree<T>::FindMin(Node<T>* root)
{
	if (root == NULL)
		return NULL;
	while (root->left != NULL)
	{
		root = root->left;
	}
	return root;
}
//Find the maximum
template<typename T>
Node<T>* BSTree<T>::FindMax(Node<T>* root)
{
	if (root == NULL)
		return NULL;

	while (root->right != NULL)
	{
		root = root->right;
	}
	return root;
}

//Inorder Function: Start the root between left and right.
template<typename T>
void BSTree<T>::InOrder(Node<T>* root)
{
	if (root != NULL) {
		//First traverse to left
		InOrder(root->left);
		cout << root->key << ", ";
		//Then traverse to right
		InOrder(root->right);
	}

}

//PostOrder Function: Starts from left, right, and root
template<typename T>
void BSTree<T>::PostOrder(Node<T>* root)
{
	if (root != NULL) {
		//First traverse to left
		PostOrder(root->left);
		//Then traverse to right
		PostOrder(root->right);
		//Lastly print
		cout << root->key << ", ";
	}

}

//PreOrder Function: Starts the root,left, and right
template<typename T>
void BSTree<T>::PreOrder(Node<T>* root)
{
	if (root != NULL) {
		cout << root->key << ", ";
		//Second, traverse to the left
		PreOrder(root->left);
		//Then, traverse to the right.
		PreOrder(root->right);
	}
	
}

