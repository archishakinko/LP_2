#include"stdafx.h"
#include"Equpment.h"
#include<iostream>
#include"Mats.h"
void Mats::setSquare(int x)
{
	square = x;
}
int Mats::getSquare()
{
	std::cout << "squre is: " << square << std::endl;
	return square;
}
void Mats::print()
{
	std::cout << square << std::endl;
}
/*void Mats::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Equpment* q = head;
		if (q->next == NULL)
		{
			q->next = this;
			q->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			};
			q->next = this;
			this->next = NULL;
		};
	};
};*/