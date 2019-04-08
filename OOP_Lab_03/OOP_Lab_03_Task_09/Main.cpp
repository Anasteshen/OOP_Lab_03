/*ѕеревантажити операц≥њ <= (пор≥вн€нн€ двох к≥л за площею), Ц(р≥зниц€ двох к≥л(координат центру та рад≥ус≥в)), 
в≥дсортувати масив екземпл€р≥в класу к≥л за зростанн€м площ з використанн€м алгоритму сортуванн€ вставками.*/

#include <iostream>
#include <cmath>
#include "Circle.h"
using namespace std;

int main()
{
	Circle** c = new Circle*[4];
	//(r,x,y)
	c[0] = new Circle(5.0, 4, 3);
	c[1] = new Circle(5.0, 4, 3);
	c[2] = new Circle(5.0, 4, 3);
	c[3] = new Circle(5.0, 4, 3);

	for (int i = 0; i < 4; i++)
	{
		double sqr = c[i]->Square();
		c[i]->SetSqr(&sqr, i);
	}
	for (int i = 0; i < 4; i++)
	{
		c[i]->Sort(4);
	}
	cout << (c[0] <= c[1]) << endl;
	cout << (c[0] - c[1]) << endl;
	
	for (int i = 0; i < 4; i++)
	{
		cout << c[i]->GetSqr()<< endl;
	}
	
	
	delete c[0];
	delete c[1];
	delete c[2];
	delete c[3];

	delete[] c;
	system("pause");

	return 0;

}