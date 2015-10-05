#include"stdafx.h"
#include"Equpment.h"
#include<iostream>
#include"Ball.h"
void Ball::setSize(int x)
{
	size = x;
}
int Ball::getSize()
{
	std::cout << "size of ball is: " << size << std::endl;
	return size;
}
void Ball::print()
{
	std::cout<<"Ball:" << size << std::endl;
}
