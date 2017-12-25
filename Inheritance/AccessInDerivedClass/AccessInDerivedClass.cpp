// AccessInDerivedClass.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
class A {
protected:
	int a_pr;
public:
	int a_pub;
};

class B : public A {
protected:
	int b_pr;
public:
	int b_pub;
	void F(int i1, int i2)
	{
		//доступ до власного члена
		b_pr = 1;
		//доступ до наслідуваного члена як до власного
		a_pr = 1;

		//доступ до наслідуваного члена через ОДД 
		A::a_pr = 2;
	}
};

void main()
{
	B b; b.F(1, 2);
	//доступ до наслід. членів через об'єкт і ОД
	b.a_pub = 1;
	//доступ до наслід. членів через об'єкт і ОДД
	b.A::a_pub = 2;
}

