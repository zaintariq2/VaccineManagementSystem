#ifndef CITIZENLIST_H
#define CITIZENLIST_H
#include "Citizen.h"


class CitizenList
{
private:
	Citizen* head;
	Citizen* tail;
	int capacity;
	int count;
public:
	CitizenList();
	void append(char* name, double id, int t);
	int getCount();
	int getCapacity();
	Citizen* getLast();
	Citizen* getFirst();
};



#endif