// MultiInheratance.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

#define OUT(S) { std::cout << S; }

struct A {
	void show() OUT("���� A "); 
};

struct B {
	void show() OUT("���� B ");
};
// ���� C ���������� �� A i B
struct C : public A, public B {
	void show() {
		A::show(); B::show(); OUT("���� C ");
	}
};

void main() {
	C c; c.show();
}



