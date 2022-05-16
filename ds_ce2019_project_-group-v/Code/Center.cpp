#include <iostream>
#include "Center.h"
#include "Citizen.h"
#include "CitizenList.h"
using namespace std;

Center::Center() 
{
    //count = 0;
    //capacity = 10;
    next = nullptr;
}
Center::~Center() 
{

}
void Center::setRecord(char* name, double id, int t)
{
    CitizenList c1;
    c1.append(name, id, t);
}
void Center::getRecord()
{
    cout << "Registered Citizen List: \n";
    while (this->getNext() != nullptr)
    {
        Citizen* c;
        CitizenList* c1;
        c = c1->getFirst();
        c->displayRecord();

        this == this->getNext();
    }
}
void Center::setNext(Center* c)
{
    next = c;
}
Center* Center::getNext() 
{
    return next;
}
void Center::search(double id)
{
    while (this->getNext() != nullptr)
    {
        Citizen* c;
        CitizenList* c1;
        c = c1->getFirst();
        c->searchCitizen(id, c);

        c = c->getNext();
    }
}
