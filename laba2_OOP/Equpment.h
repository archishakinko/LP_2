#pragma once
class Equpment 
{

private:
	char* name;
public:
	Equpment *next;
	virtual void print();
	Equpment(void);
	char* getName();
	void setName(char* name);
	~Equpment(void);

}; 
