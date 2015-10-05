#pragma once
#include "Equpment.h"
class Bars :public Equpment
{
protected:
//	static Bars* head;
private:
	int round;
public:
//	Bars* next;
	virtual void print();
	
	Bars() :Equpment() {};
	void setRound(int x);
	int getRound();


};