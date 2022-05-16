#ifndef CITIZEN_H
#define CITIZEN_H
#include"Center.h"

class Citizen
{
private:
	char* name;
	double CNIC;
	int time;
	Citizen* next;
public:
	Citizen();
	void registration(Center* c);
	void detail();
	void cancelReg();
	void vaccineForum();
	void displayRecord();
	char* getName();
	double getCNIC();
	void setData(char* n, double id, int t);
	Citizen* getData();
	void setNext(Citizen* c);
	Citizen* getNext();
	Citizen* searchCitizen(double id, Citizen* c);
};


#endif