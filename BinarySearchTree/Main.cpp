//Main App: 

#include <iostream>
#include "BST.h"

using namespace std;

int main()
{
	int choice = 0;
	do
	{
		cout << "\n**************\n";
		cout << "\n1. Find";
		cout << "\n2. Insert";
		cout << "\n3. Delete Node";
		cout << "\n4. Maximum Value";
		cout << "\n5. Inorder Traversal";
		cout << "\n\nPlease enter the # listed above: ";
		cin >> choice;
		switch (choice)
		{
			//Find
			case 1:
			cout << "Enter the value you wanted to find: ";
			break;
			//Insert
			case 2:
			{
				break;
			
			}

			case 3:
			{
				break;
			}
			//Display
			case 4:
			{

			}
		}
	} 
	while (choice != 6);
	system("pause");
	return 0;
}