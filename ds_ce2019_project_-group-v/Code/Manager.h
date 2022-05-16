#ifndef MANAGER_H
#define MANAGER_H
#include "Center.h"

class Manager
{
private:
	int time;
public:
	Manager();
	void citizenRecord(char* name, double id, Center* c);
	void registeredCitizenList(Center* c);
	void cancelRegistration(Center* c);
	void message();
};


#endif