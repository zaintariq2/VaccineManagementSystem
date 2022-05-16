#include<iostream>
#include "MyLinkedList.h"
using namespace std;

MyLinkedList::MyLinkedList()
{
	head = nullptr;
	tail = nullptr;
	cnt = 0;
}
MyLinkedList::~MyLinkedList()
{

}
void MyLinkedList::append()
{
	Center* temp = new Center();
	temp->setNext(nullptr);
	if (head == nullptr)
	{
		head = temp;
		tail = temp;
		temp = nullptr;
		cnt++;
	}
	else
	{
		tail->setNext(temp);
		tail = temp;
		cnt++;
	}
}
void MyLinkedList::prepend()
{
	Center* temp = new Center();
	temp->setNext(head);
	head = temp;
}
bool MyLinkedList::empty()
{
	return (head == nullptr);
}
void MyLinkedList::removeLast()
{
	MyLinkedList l1;

}
void MyLinkedList::removeFirst()
{

}
Center* MyLinkedList::getLast()
{
	return tail;
}
Center* MyLinkedList::getFirst()
{
	return head;
}