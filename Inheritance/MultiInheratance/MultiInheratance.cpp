// MultiInheratance.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

#define OUT(S) { std::cout << S; }

struct A {
	void show() OUT("Клас A "); 
};

struct B {
	void show() OUT("Клас B ");
};
// клас C породжений від A i B
struct C : public A, public B {
	void show() {
		A::show(); B::show(); OUT("Клас C ");
	}
};

void main() {
	C c; c.show();
}



