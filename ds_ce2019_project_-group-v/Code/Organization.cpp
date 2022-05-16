#include <iostream>
#include "Organization.h"
#include "MyLinkedList.h"
using namespace std;

Organization::Organization()
{
	
}
void Organization::createCenter()
{
	MyLinkedList l1;
	l1.append();
	cout << "\nCenter has been Created: \n";
}
void Organization::deleteCenter()
{
	MyLinkedList l1;
	l1.removeLast();
	cout << "\n1 Center has been Removed: \n";
}
