#include <iostream>
#include "Organization.h"
#include "Manager.h"
#include "Citizen.h"
#include "Center.h"
#include "MyLinkedList.h"
using namespace std;


int main() {
// Write your driving code here

    int option;
	MyLinkedList l1;
	Citizen* c1;
	Manager m1;
	Organization o1;
	o1.createCenter();

	jump:
	cout << "\n\tWelcome to Covid Vaccination System: \n";
	cout << "Please select your rule: \n";
	cout << "Select 1 for Organization: \n";
	cout << "Select 2 for Manager: \n";
	cout << "Select 3 for Citizen: \n";
	cout << "And anything else for exit: \n";
	cin >> option;
	switch (option)
	{
	case 1:
		int o;
		cout << "\nYou are Enter! \n";
		cout << "1 : Add a Vaccination Center: \n";
		cout << "2 : Remove a Vaccination Center: \n";
		cout << "Select your option: \n";
		cin >> o;
		if (o == 1)
		{
			o1.createCenter();
		}
		else if (o == 2)
		{
			o1.deleteCenter();
		}
		goto jump;
		break;
	case 2:
		//Center* h;
		int m;
		cout << "\nYou are Enter! \n";
		cout << "For manage/print the registered citizen list enter 1: \n";
		cout << "For cancel the registration of any Citizen enter 2 : \n";
		cout << "Select your Option: ";
		cin >> m;
		if (m == 1)
		{
			//h = l1.getFirst();            // get head
			m1.registeredCitizenList(l1.getFirst());
		}
		else if(m == 2)
		{
			m1.cancelRegistration(l1.getFirst());
		}
		goto jump;
		break;
	case 3:
		int c;
		c1 = new Citizen;
		//Center* t;
		cout << "\nAre you Vaccinated or not: \n";
		cout << "Enter 1 for vaccinated or press any key if not: ";
		cin >> c;
		if (c == 1)
		{
			cout << "You are already vaccinated: \n";
			cout << "Enter 1 for Vaccination Forum: ";
			cin >> c;
			if (c == 1)
			{
				c1->vaccineForum();
			}
		}
		else
		{
			c1->registration(l1.getLast());
		}
		goto jump;
		break;
	default:
		break;
	}


    // Create your own classes and files in the folder AdditionalClasses.

    return 0;
}
