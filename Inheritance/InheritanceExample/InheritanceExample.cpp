// InheritanceExample.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
class Point {
	//в окремий клас винесено усі спільні харак-
	//теристики - в даному випадку координати по- 
	//чатку фігури
	int x, y;
	public:
		void setPoint(int x, int y) { setX(x); setY(y); }
		int getX() { return x; }
		int getY() { return y; }
		int setX(int x) { this->x = x; }
		int setY(int y) { this->y = y; }
		Point() { setPoint(0, 0); }
};

class Circle : public Point
{
public:
	double radius;
	void setRadius(double r) { radius = (radius >= 0) ? radius: -1; }
	unsigned getRadius() { return radius; }
	void setCenter (unsigned x, unsigned y) { setPoint(x, y); }
	Point getCenter() { return *this; }
	
	Circle() { setCenter(0, 0);  setRadius(1); }
};

class Rectangle : public Point
{
	Point size;
	public:
		void setSize(unsigned x, unsigned y) { setPoint(x, y); }
		int getWidth() { return size.getX(); }
		void setWidth(unsigned x) { size.setX(x); }
		int getHeight() { return size.getY(); }
		void setHeight(unsigned y) { size.setY(y); }

		void setCenter(unsigned x, unsigned y) { setPoint(x, y); }
		Point getCenter() { return *this; }

		Rectangle() { setCenter(0, 0);  setSize(0, 0); }
};

void main() {
	Rectangle r;
	r.setCenter(2, 2); r.setSize(5, 6);
	Circle c;
	c.setCenter(100, 100);  c.setRadius(1);
}



