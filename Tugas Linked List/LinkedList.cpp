#include <iostream>
#include "Linkedlist.h"
using namespace std;

bool LinkedList::isEmpty()
{
	if (head == NULL){
		
		return true;
	}else{
		return false;
	}
}

void LinkedList::insertToHead(int input)
{
	Node *newNode  = new Node();
	newNode->data  = input;
	newNode->next  = head;
	head		   = newNode;
	
	if (tail == NULL)
	{
		tail = head;
	}
	
	cout << ">> Data [" << input << "] telah ditambahkan";
} 

void LinkedList::insertAfter(int item, int input)
{
	if (isEmpty())
	{
		cout << ">> Linked List masih kosong";
	
	}else{
		Node *newNode	= new Node();
		newNode->data	= input;
	
		Node *tmp = head;
		while (tmp->data != item)
		{
			tmp = tmp->next;
		}
		newNode->next = tmp->next;
		tmp->next	  = newNode;
			
		cout << ">> Data [" << input << "] telah ditambahkan";
	}
}

void LinkedList::insertToTail(int input)
{
	if (isEmpty())
	{
		cout << ">> Linked List masih kosong";
	
	}else{
		
		Node *newNode  = new Node();
		newNode->data  = input;
		newNode->next  = NULL;
		tail->next	   = newNode;
		tail		   = newNode;
		
		cout << ">> Data [" << input << "] telah ditambahkan";
	}
}

void LinkedList::deleteFromHead()
{
	if (isEmpty())
	{
		cout << ">> Linked List masih kosong";
	}else{
		Node *delNode = head;
		head		  = head->next;
		delete delNode;
	}
	
}

void LinkedList::deleteByValue(int input)
{
	if (isEmpty())
	{
		cout << ">> Linked List masih kosong";
		
	}else{
		
		if (input == head->data)
		{
			deleteFromHead();
		}
		else{
			
			Node *delNode = head->next;
			Node *tmp = head;
			while (delNode->data != input)
			{
				tmp = delNode;
				delNode = delNode->next;
			}
			
			tmp->next = delNode->next;
			delete delNode;
		}
	}
}

void LinkedList::deleteFromTail()
{
	if (isEmpty())
	{
		cout << ">> Linked List masih kosong";
	}
	else{
		
		Node *delNode;
		Node *tmp = head;
		
		while (tmp->next->next != NULL)
		{
			tmp = tmp->next;
		}
		delNode    = tmp->next ;
		tail	   = tmp;
		tail->next = NULL;
		delete delNode;
	}
	
}

void LinkedList::printAll(){
	
	Node *tmp = head;
	
	cout << ">> ";
	while (tmp != NULL){
		cout << tmp->data;
		if (tmp->next != NULL)
		{
			cout << " => ";
		
		}else{
			
			cout << " ";
		}
		tmp = tmp->next;
	}
	cout << endl;
}