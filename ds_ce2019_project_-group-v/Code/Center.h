#ifndef CENTER_H
#define CENTER_H

class Center
{
private:
	//int capacity;
	//int count;
	Center* next;
public:
	Center();
	~Center();
	void setRecord(char* name, double id, int t);
	void getRecord();
	void setNext(Center* c);
	Center* getNext();
	void search(double id);
};


#endif