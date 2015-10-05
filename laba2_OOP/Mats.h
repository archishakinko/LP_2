#pragma once
#include "Equpment.h"
class Mats :public Equpment
{
private:
	int square;
public:
	virtual void print();
	Mats() :Equpment() {};
	void setSquare(int x);
	int getSquare();

};
