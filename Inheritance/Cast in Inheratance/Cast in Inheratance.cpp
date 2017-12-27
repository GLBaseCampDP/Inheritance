// Cast in Inheratance.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
struct A {
	void out() { cout << "class A" << endl; }

};
struct B : public A {
	// ������������ ������� �������� �����
	void out() { cout << "class B" << endl; }

};

//������� - �����
void F(A& a) { a.out(); }
void F(A* p) { p->out(); }


// ������� �������
void FF(B* p) { p->out(); }
void FF(B& a) { a.out(); }

void main()
{

	A a;   B b;
	// �������� ������� ����� ����
	F(a); F(&a);
	F(b); F(&b);
	// ������������ ����
	A* p = &a; p->out();
	p = &b;    p->out();
	// �������� ������� ������� FF
	FF(&b); FF(b); FF((B*)&a);
	// ��������� ������� ������� FF
	//FF(&a); FF(a);
}