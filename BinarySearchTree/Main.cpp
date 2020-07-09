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
				cin >> value;
				root = BST.insertNode(root, 6);
				BST.insertNode(root, 1);
				BST.insertNode(root, 3);
				BST.insertNode(root, 2);
				BST.insertNode(root, 5);
				BST.insertNode(root, 7);
				BST.insertNode(root, 9);
				BST.insertNode(root, 8);
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
				cout << "Minn = " << BST.FindMin(root)->key;
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