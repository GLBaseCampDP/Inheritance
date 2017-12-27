// ctor and dtor.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>

#define OUT(S) { std::cout << S << "\n"; }

struct O {
	// ���������� ������
	O() OUT(" ctor O ");
	O(int) OUT(" ctor O(int) ");
	// ���������� �������
	~O() OUT(" dtor O ");
};

struct A : public O {
	A() OUT(" ctor A ");
	A(int) OUT(" ctor A(int) ");
	~A() OUT(" dtor A ");
};

struct B {
	B() OUT(" ctor B ");
	~B() OUT(" dtor B ");
};

struct C : public A, public B {
	// ���������� �������
	C() :B(), A() OUT(" ctor C ");
	C(int) : A(1) OUT(" ctor C(int) ");
	// ���������� ������
	~C() OUT(" dtor C ");
};

void main()
{
	C* c = new C; delete c;
	C* c2 = new C(1); delete c2;
	system("pause");
}



