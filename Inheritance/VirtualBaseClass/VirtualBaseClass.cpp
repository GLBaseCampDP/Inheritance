// VirtualBaseClass.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

#define OUT(S)  std::cout << S << "\n"; 

struct A {
	static unsigned int i;
	A() { i++; OUT(" class A"); }
};

unsigned int A::i = 0;

struct B : public A {
	B() { OUT(" class B"); }
};

struct C : public A {
	C() { OUT(" class B"); }
};

struct D : public B, public C {
	D() { OUT(" class D"); }
};

void main() {
	D d; 
	cout << "Class A count - " << A::i << "\n";
	system("pause");
}

