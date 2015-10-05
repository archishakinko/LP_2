#include"stdafx.h"
#include"Equpment.h"
#include<iostream>

Equpment::Equpment(void)
{
	std::cout << "colling konstructor" << std::endl;
}

Equpment::~Equpment(void)
{
	std::cout << "colling destructor" << std::endl;
}
void Equpment::setName(char*name)
{
	this->name = name;
}
char* Equpment::getName()
{
	std::cout << "name: " << this->name << std::endl;
	return this->name;
}
 void Equpment::print()
{
	std::cout << name << std::endl;
}