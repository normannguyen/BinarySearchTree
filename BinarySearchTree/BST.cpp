#include <iostream>
#include "BST.h"

using namespace std;

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

TreeNode<T> BSTree<T>::insertNode(TreeNode<T>* node, T value)
{
	if (root == NULL)  // BST was empty
		return getNode(value);  // create the first node

	TreeNode* tmpNode = root;
	while (tmpNode != NULL) {  // loop until end of tree nodes
		// process right node
		if (tmpNode->key < value) {
			if (tmpNode->right == NULL) {  // found the spot to insert
				tmpNode->right = getNode(value);
				break;
			}
			else {  // continue on the right branch
				tmpNode = tmpNode->right;
				continue;
			}
		}

		// process left node
		if (tmpNode->key > value) {
			if (tmpNode->left == NULL) {  // found the spot to insert
				tmpNode->left = getNode(value);
				break;
			}
			else {  // continue on the left branch
				tmpNode = tmpNode->left;
				continue;
			}
		}
	}
	return root;
}
template<typename T>
TreeNode<T>* BSTree<T>::Delete(TreeNode<T>* node, T key)
{
	if (root == NULL) return root;
	if (key < root->key)
		root->left = deleteNode(root->left, key);
	else if (key > root->key)
		root->right = deleteNode(root->right, key);
	else {
		if (root->left == NULL) {
			struct node* temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
			struct node* temp = root->left;
			free(root);
			return temp;
		}
		struct node* temp = minValueNode(root->right);
		root->key = temp->key;
		root->right = deleteNode(root->right, temp->key);
	}
	return root;
}


template<typename T>
TreeNode<T>* BSTree<T>::FindMax(TreeNode<T>* node)
{
	if (root == NULL)
		return NULL;

	while (root->right != NULL)
	{
		root = root->right;
	}
	return root;
}

template<typename T>
void BSTree<T>::inorder(TreeNode<T>* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->key);
		inorder(root->right);
	}
}


