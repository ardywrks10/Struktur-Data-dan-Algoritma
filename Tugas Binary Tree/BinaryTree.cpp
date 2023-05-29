#include <iostream>
#include "BinaryTree.h"

using namespace std;

void BinaryTree::insertNode(int insertVal)
{
	root = insertNodeRecursive(root, insertVal);
}

Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertValue)
{
	if (currentRoot == NULL)
	{
		currentRoot = new Node();
		currentRoot->val  = insertValue;
		return currentRoot;
	}
	
	if (insertValue < currentRoot->val)
	{
		currentRoot->left =  insertNodeRecursive(currentRoot->left, insertValue);
	}
	
	else if (insertValue > currentRoot->val)
	{
		currentRoot->right = insertNodeRecursive(currentRoot->right, insertValue);
	}
	
	return currentRoot;
}

void BinaryTree::searchNode(int insertValue)
{
	root = searchNodeRecursive(root, insertValue);
}

Node *BinaryTree::searchNodeRecursive(Node *currentRoot, int insertVal)
{
	if (currentRoot == NULL)
	{
		cout << "Binary Tree kosong atau tidak terdapat node" << endl;
	}
	else if (currentRoot->val == insertVal)
	{
		cout << "Node dengan nilai " << insertVal << " berhasil ditemukan pada tree" << endl;
	}
	else if (currentRoot->val > insertVal && currentRoot->left != NULL)
	{
		currentRoot->left  = searchNodeRecursive(currentRoot->left, insertVal);
	}
	else if (currentRoot->val < insertVal && currentRoot->right != NULL)
	{
		currentRoot->right = searchNodeRecursive(currentRoot->right, insertVal);
	}
	else{
		cout << "Node dengan nilai " << insertVal << " tidak ditemukan pada tree" << endl;
	}
	
	return currentRoot;
}

Node *BinaryTree::findMin()
{
	return findMinRecursive(root);
}

Node *BinaryTree::findMinRecursive(Node *currentRoot)
{
	if (currentRoot == NULL)
	{
		cout << "Binary Tree kosong atau tidak terdapat node" << endl;
	}
	else if (currentRoot->left == NULL)
	{
		cout << "Nilai minimum : " << currentRoot->val << endl;
	}
	else{
		currentRoot->left = findMinRecursive(currentRoot->left);
	}
	
	return currentRoot;
}

Node *BinaryTree::findMax()
{
	return findMaxRecursive(root);
}

Node *BinaryTree::findMaxRecursive(Node *currentRoot)
{
	if (currentRoot == NULL)
	{
		cout << "Binary Tree kosong atau tidak terdapat node" << endl;
	}
	else if (currentRoot->right == NULL)
	{
		cout << "Nilai maksimum : " << currentRoot->val << endl;
	}
	else{
		currentRoot->right =  findMaxRecursive(currentRoot->right);
	}
	return currentRoot;
}

void BinaryTree::InOrder()
{
	inorderRecursive(root);
}

void BinaryTree::inorderRecursive(Node *currentRoot)
{
	if (currentRoot != NULL)
	{
		inorderRecursive(currentRoot->left);
		cout << currentRoot->val << " ";
		inorderRecursive(currentRoot->right);
	}
}

void BinaryTree::PreOrder()
{
	preorderRecursive(root);
}

void BinaryTree::preorderRecursive(Node *currentRoot)
{
	if (currentRoot != NULL)
	{
		cout << currentRoot->val << " ";
		preorderRecursive(currentRoot->left);
		preorderRecursive(currentRoot->right);
	}
}

void BinaryTree::PostOrder()
{
	postorderRecursive(root);
}

void BinaryTree::postorderRecursive(Node *currentRoot)
{
	if (currentRoot != NULL)
	{
		postorderRecursive(currentRoot->left);
		postorderRecursive(currentRoot->right);
		cout << currentRoot->val << " ";
	}
}
