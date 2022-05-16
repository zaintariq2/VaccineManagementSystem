#include <iostream>
#include <string>
#include "Citizen.h"
#include "Manager.h"
//#include "CitizenList.h"
using namespace std;

Citizen::Citizen()
{
	name = new char[20];
	//time = 0;
}
void Citizen::registration(Center* c)
{
	char n[20];
	double id;
	cout << "\n\tGetting Started (New Citizen Registration): \n";
	cin.ignore();
	cout << "Enter your Name: ";
	cin.getline(n, 20);
	cout << "Enter your CNIC: ";
	cin >> id;

	Manager m1;
	m1.citizenRecord(n, id, c);
	m1.message();
	//CitizenList l1;
	//l1.append(n, id);
}
void Citizen::detail()
{
	cout << "The user detail is as follow: \n";
	cout << "Name: " << name << endl;
	cout << "CNIC " << CNIC << endl;
}
void Citizen::cancelReg()
{

}
void Citizen::vaccineForum()
{
	string msg;
	cout << "\n\tVaccination Forum\n";
	cout << "Enter your message: ";
	cin >> msg;
}
void Citizen::displayRecord()
{
	cout << "display record: ";
	while (this->getNext() != nullptr)
	{
		cout << this->name << "  " << this->CNIC << endl;
		this == this->getNext();
	}
}
Citizen* Citizen::searchCitizen(double id, Citizen* c)
{
	while (c->getNext() != nullptr)
	{
		if (c->CNIC==id)
		{
			return c;
		}
		c == c->getNext();
	}
}
char* Citizen::getName()
{
	return name;
}
double Citizen::getCNIC()
{
	return CNIC;
}
void Citizen::setData(char* n, double id, int t)
{
	name = n;
	CNIC = id;
	time = t;
}
void Citizen::setNext(Citizen* c)
{
	next = c;
}
Citizen* Citizen::getNext()
{
	return next;
}
