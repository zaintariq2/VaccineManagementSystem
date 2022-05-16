#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H
#include "Center.h"
#include "Citizen.h"

class MyLinkedList
{
	Center* head;
	Center* tail;
	int cnt;
public:
	MyLinkedList();
	~MyLinkedList();
	void append();
	void append(char* name, double id);
	void prepend();
	bool empty();
	void removeLast();
	void removeFirst();
	Center* getLast();
	Center* getFirst();
};


#endif