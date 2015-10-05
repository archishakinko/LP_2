// laba2_OOP.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include"Equpment.h"
#include"Ball.h"
#include"Bars.h"
#include"Mats.h"
#include<iostream>
#include<typeinfo>

int main()
{
	Equpment first;
	first.setName("something");
	first.getName();

	Bars bars;
	bars.setName("balslfls");
	bars.getName();

	Ball ball;
	ball.setName("sdfdfasdf");
	ball.getName();

	Mats mats;
	mats.setName("saldkf;;k");
	mats.getName();

	bars.setRound(10);
	bars.getRound();

	ball.setSize(15);
	ball.getSize();

	mats.setSquare(20);
	mats.getSquare();

	first.print();
	bars.print();
	ball.print();
	mats.print();
	

	//Equpment* second = new Ball();
	//Equpment* therd = new Bars();
	//second->print();
	//therd->print();
	//	Equpment* ball1 = dynamic_cast<Ball*>(second);
	//	Equpment ball2 = dynamic_cast<Ball&>(first);
	
	
	system("pause");
    return 0;
}

