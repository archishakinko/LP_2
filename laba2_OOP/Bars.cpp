#include"stdafx.h"
#include"Equpment.h"
#include<iostream>
#include"Bars.h"
void Bars::setRound(int x)
{
	round = x;
}
int Bars::getRound()
{
	std::cout << "round is: " << round << std::endl;
	return round;
}
void Bars::print()
{
	std::cout <<"Bars:"<< round << std::endl;
}
