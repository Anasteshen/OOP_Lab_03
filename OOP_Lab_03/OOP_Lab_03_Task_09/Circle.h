#pragma once
class Circle
{
	private:
	double *x;
	double *y;
	double *r;
	double  *sqr;

	public:
	Circle();
	Circle(double r, double x, double y);
	~Circle();

	void SetR(double *r);
	void SetSqr(double *sqr, int i);
	double GetR() const;
	double GetX() const;
	double GetY() const;
	double GetSqr() const;
	double Square() const;
	//void Sort(double *array, int length);
	void Sort(int length);
	//double Length();

	friend bool operator<=(const Circle & c1, const Circle & c2);
	friend Circle operator-(const Circle & c1, const Circle & c2);

};

