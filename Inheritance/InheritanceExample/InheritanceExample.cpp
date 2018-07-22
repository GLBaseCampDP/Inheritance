// InheritanceExample.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
class Point {
	//в окремий клас винесено усі спільні харак-
	//теристики - в даному випадку координати по- 
	//чатку фігури
	int x, y;
	public:
		void init(int x, int y) {atX() = x;  atY() = y; }
		int& atX() { return x; }
		int& atY() { return y; }	
		Point() { init(0, 0); }
		Point(Point& p) { init(p.atX(), p.atY() ); }

};

class Circle : public Point {
	double r;
public:
	void setR(double rr) { r = (rr >= 0) ? rr : -1; }
	double getR() { return r; }
	void init(double r, Point p) {Point::init(p.atX(), p.atY()); setR(r);}
	Circle() { setR(0); }
	Circle(Circle& c):Point(c) { setR(0); }
};

class Square : public Point {
	double d;
	public:
		void setD(double dd) { d = (dd >= 0) ? dd : -1; }
		double getD() { return d; }
		void init(double d, Point p) { Point::init(p.atX(), p.atY()); setD(d); }
		Square() { setD(0); }
		Square(Square& c) :Point(c) { setD(0); }
		
};

void main() {
	Square r;
	r.setD(1); 
	Circle c;
	c.setR(100);
}



