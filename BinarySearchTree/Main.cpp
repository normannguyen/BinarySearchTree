//Main App: Contains the main function
#include <iostream>
#include "BSTree.h"
#include "BSTree.cpp"

//Standard Library
using namespace std;

//Main Function is where everything is listed here.
int main()
{
	//BSTree access from the BSTree.cpp file commands
	BSTree<int> BST = BSTree<int>();

	//Node
	Node<int>* root = NULL;

	//Integers for Value for the number and choices where 7 is exit.
	int choice = 0;
	int value = 0;
	do
	{
		cout << "\n**************\n";
		cout << "\n1. Insert";
		cout << "\n2. Preloaded Insert, 6 is the root";
		cout << "\n3. Delete Node";
		cout << "\n4. Minimum Value";
		cout << "\n5. Maximum Value";
		cout << "\n6. Inorder, Postorder, Preorder Traversal";
		cout << "\n7. Exit";
		cout << "\n\nPlease enter the # listed above: ";
		cin >> choice;
		switch (choice)
		{
			//Insert
			case 1:
			{
				cout << "Enter the value you wanted to add: ";
				cin >> value;
				root = BST.insertNode(root, value);
				break;
			}
			//Preloaded Insert
			case 2:
			{
				cout << "Numbers Loaded, go check on Traversal Method.";
				root = BST.insertNode(root, 50);
				BST.insertNode(root, 20);
				BST.insertNode(root, 30);
				BST.insertNode(root, 40);
				root = BST.insertNode(root, 10);
				BST.insertNode(root, 50);
				BST.insertNode(root, 70);
				BST.insertNode(root, 90);
				BST.insertNode(root, 80);
				break;
			}
			
			//Delete
			case 3:
			{
				cout << "Enter the value you wanted to delete: ";
				cin >> value;
				BST.Delete(root, value);
				break;
			
			}
			//Mininum
			case 4:
			{
				cout << "Min = " << BST.FindMin(root)->key;
				break;
			}
			//Maximum
			case 5:
			{
				BST.FindMax(root)->key;
				cout << "Max = " << BST.FindMax(root)->key;
				break;
			}
			//Inorder, Postorder, and Preorder Traversal
			case 6:
			{
				cout << "\nYour Inorder Traversal list:";
				BST.InOrder(root);
				cout << "\nYour Postorder Traversal list:";
				BST.PostOrder(root);
				cout << "\nYour Preorder Traversal list:";
				BST.PreOrder(root);
				break;
			}
		}
	} 
	while (choice != 7);
	system("pause");
	return 0;
}