// CtorsAnd Dtors 2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct A
{
	int i;
};

struct B : public A {
	B(int) {}
};

struct C : public A
{
	~C()	{	}
};

int main()
{
	B b; 
	
	// неможливо створити об'єкт - потрібен явно визначений ctor класу A
	C c;
	// неможливо знищити об'єкт - потрібен явно визначений dtor класу A
	delete c;

	return 0;
}
