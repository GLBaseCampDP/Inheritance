// DomanantRule.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
class O {
protected:
	int o_pr;
public:
	// ������� �������� �����
	void F(int i) { o_pr = i; }
};

class A : public O {
protected:
	int a_pr;
public:
	// ������� ��������� �����
	void F(int i) { a_pr = i; }
};

class B : public A {
protected:
	int b_pr;
public:
	void F(int i) { b_pr = i; }
	// ������ �� ����� �������� �����
	void F1(int i) { F(i); A::F(i); A::O::F(i); O::F(i); }
};

void main()
{
	B b, *p = new B;
	// ������ �� ����� �������� �����
	b.O::F(1); b.A::F(1); b.F(1); b.F1(1);
	p->A::O::F(2); p->A::F(2);  p->F(2);  p->F1(2);
}

