#include <iostream>
#include "BST.h"

using namespace std;

//Get Node
template<typename T>
TreeNode<T>* BSTree<T>::getNode(T val)
{
	TreeNode<T>* newNode = new TreeNode<T>;
	newNode->key = val;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

template <typename T>
//Insert Node
TreeNode<T> BSTree<T>::insertNode(TreeNode<T>* node, T value)
{
	if (root == NULL)
		return getNode(value);

	if (root->key < value)
		root->right = insertNode(root->right, value);

	if (root->key < value)
		root->left = insertNode(root->left, value);

	return root;
}
//Delete Function
template<typename T>
TreeNode<T>* BSTree<T>::Delete(TreeNode<T>* node, T key)
{
	if (node == NULL)
	{
		return node;
	}
	if (node->key > key)
	{
		node->left = deleteNode(node->left, key);
	}
	else if (key > root->key)
	{
		node->right = deleteNode(node->right, key);
	}
	if (node->left == NULL)
	{
		TreeNode<T>* newNode = node->right;
		delete node;
		return newNode;
	}
	else if (node->right == NULL)
	{
		TreeNode<T>* newNode = node->left;
		delete node;
		return newNode;
	}

}

//Create The Max
template<typename T>
TreeNode<T>* BSTree<T>::FindMax(TreeNode<T>* node)
{
	if (root == NULL)
		return NULL;

	while (root->right != nullptr)
	{
		root = root->right;
	}
	return root;
}

//Inorder Function
template<typename T>
void BSTree<T>::inorder(TreeNode<T>* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->key);
		inorder(root->right);
	}
}


