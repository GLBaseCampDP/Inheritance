// InheritanceExample.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#define CTORS(DC, BC) DC() { set(0); }\
  DC(DC& c) : BC(c) { set(0); }

class Point {
	int x, y;
protected:
	void set(Point& p) { x = p.x, y = y; }
public:
	Point() : x(0), y(0) {}
	Point(Point& p) { set(p); }
};

class Circle : public Point {
	double r;
public:
	void set(double R) { r = (R >= 0) ? R : -1; }
	double get() { return r; }
	void set(double r, Point p)
	{
		Point::set(p); set(r);
	}
	CTORS(Circle, Point)
};

class Square : public Point {
	double d;
public:
	void set(double D) { d = (D >= 0) ? D : -1; }
	double get() { return d; }
	void set(double d, Point p)
	{
		Point::set(p); set(d);
	}
	CTORS(Square, Point)
};

void main() {
	Square r; r.set(1);
	Circle c; c.set(100);
}




