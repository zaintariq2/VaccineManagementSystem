#include <iostream>
#include "Manager.h"
#include "Organization.h"
#include "Citizen.h"
#include "CitizenList.h"
using namespace std;

Manager::Manager()
{
	time = 0;
}
void Manager::citizenRecord(char* name, double id, Center* c)
{
	CitizenList c1;
	if (c1.getCount() > 10)
	{
		Organization o1;
		o1.createCenter();
		c = c->getNext();
	}
	c->setRecord(name, id, time);
	
}
void Manager::registeredCitizenList(Center* c)
{
	c->getRecord();
}
void Manager::cancelRegistration(Center* c)
{
	double id;
	cout << "\n\tCancel Registration: \n";
	cout << "Enter the CNIC of the Citizen: ";
	cin >> id;
	c->search(id);
}
void Manager::message()
{
	cout << "You have been registered for Vaccination! Your time for Vaccination is " << time << " HRS \n";
	time++;
}