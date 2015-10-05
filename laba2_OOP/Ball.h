#pragma once
#include "Equpment.h"
class Ball :public Equpment
{
private:
	int size;
public:
	virtual void print();
	Ball() : Equpment() {};
	void setSize(int x);
	int getSize();
};