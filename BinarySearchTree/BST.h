#pragma once

#include <iostream>

template <typename T>

class TreeNode {
public:

	T key;
	TreeNode* left = NULL;
	TreeNode* right = NULL;
	TreeNode(T key)
	{
		this->key = key;
		left = NULL;
		right = NULL;
	}
};

template <typename T>

class BSTree
{
public:
	TreeNode<T>* root;
	BSTree() {
		root = NULL;
	}
	//Insert Node
	TreeNode<T> insertNode(TreeNode<T>* node, T newData);
	//Delete node function
	TreeNode<T>* Delete(TreeNode<T>* node, T newData);
	//Preorder traversal
	TreeNode<T>* FindMax(TreeNode<T>* node);
	void inorder(TreeNode<T>* root);
	TreeNode<T>* getNode(T val);

private:
	

	

};
