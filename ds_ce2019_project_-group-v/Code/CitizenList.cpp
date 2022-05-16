#include <iostream>
#include "Citizen.h"
#include "CitizenList.h"
using namespace std;

CitizenList::CitizenList()
{
	head = nullptr;
	tail = nullptr;
	capacity = 10;
	count = 0;
}
void CitizenList::append(char* name, double id, int t)
{
	Citizen* temp = new Citizen();
	temp->setData(name, id, t);
	temp->setNext(nullptr);
	if (head == nullptr)
	{
		head = temp;
		tail = temp;
		temp = nullptr;
		count++;
	}
	else
	{
		tail->setNext(temp);
		tail = temp;
		count++;
	}
}
Citizen* CitizenList::getLast()
{
	return tail;
}
Citizen* CitizenList::getFirst()
{
	return head;
}
int CitizenList::getCount()
{
	return count;
}
int CitizenList::getCapacity()
{
	return capacity;
}