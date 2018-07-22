// Cast in Inheratance.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
struct A {
	void out() { cout << "class A" << endl; }

};
struct B : public A {
	// переозначена функція базового класу
	void out() { cout << "class B" << endl; }

};

//Функції - шлюзи
void F(A& a) { a.out(); }
void F(A* p) { p->out(); }


// Звичайні функції
void FF(B* p) { p->out(); }
void FF(B& a) { a.out(); }

void main()
{

	A a;   B b;
	// дозволені виклики через шлюз
	F(a); F(&a);
	F(b); F(&b);
	// Вказівниковий шлюз
	A* p = &a; p->out();
	p = &b;    p->out();
	// дозволені виклики функції FF
	FF(&b); FF(b); FF((B*)&a);
	// заборонені виклики функції FF
	//FF(&a); FF(a);
}