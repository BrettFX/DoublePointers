#ifndef DPLINKEDLIST_H
#define DPLINKEDLIST_H

#include <iostream>
#include <string>

class DPLinkedList{
private:
	struct Node{
		int data;
		Node* next;
	};
	
	Node** head;
	
public:
	DPLinkedList();	
};

#endif