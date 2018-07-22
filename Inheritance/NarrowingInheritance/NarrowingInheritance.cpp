// NarrowingInheritance.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

void MARK() { cout << "(Single class)"; }

struct A {
	char c_A;
	A(char i) { c_A = i; }
	// член базового класу
	void show() { cout << "\nBase clas is " << c_A; MARK(); }
};

struct B : public A {
	char c_B;
	B(char j, char i) :A(i) { c_B = j; }
	void show();	// член похідного класу
};

void B::show() { // переозначення функції базового класу
	// обмеження члена
	cout << "\nBase clas is " << c_A ; 
}

void main() {
	A a('A'); a.show();
	B b('B', 'A'); b.show();
	system("pause");
}




