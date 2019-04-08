#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle()
{
	this->r = 0;
	this->x = 0;
	this->y = 0;
	cout << "Circle::Circle()" <<this << endl;
}

Circle::Circle(double r, double x, double y)
{
		this->r = new double(r);
		this->x = new double(x);
		this->y = new double(y);
		this->sqr = new double[4];
		cout << "Circle::Circle(double r, double x, double y)"<<this << endl;
}

Circle::~Circle()
{
	delete r; 
	delete x;
	delete y;
	delete[4] sqr;
	cout << "Circle::~Circle()" << endl;
}

void Circle::SetR(double *r)
{
	this->r = r;
}

void Circle::SetSqr(double *sqr, int i)
{
	*this->sqr = sqr[i];
}

double Circle::GetR() const
{
	return *r;
}

double Circle::GetX() const
{
	return *x;
}

double Circle::GetY() const
{
	return *y;
}

double Circle::GetSqr() const
{
	return *sqr;
}

double Circle::Square() const
{
	*this->sqr = 3.14* GetR()*GetR();
	return *sqr;
}

bool operator<=(const Circle & c1, const Circle & c2)
{
	double square1 = c1.Square();
	double square2 = c2.Square();
	
		return square1 <= square2;
}

Circle  operator-(const Circle & c1,const Circle & c2)
{
	Circle temp;
	*temp.r =c1.GetR()- c2.GetR();
	*temp.x =c1.GetX()- c2.GetX();
	*temp.y =c1.GetY()- c2.GetY();
	return temp;
}

void Circle::Sort( int length)
{
	int  temp, item;
	for (int i = 1; i < length; i++)
	{
		temp = this->sqr[i];
		item = i - 1;
		while (item >= 0 && this->sqr[item] > temp)
		{
			this->sqr[item + 1] = this->sqr[item];
			this->sqr[item] = temp;
			item--;
		}
	}
}
