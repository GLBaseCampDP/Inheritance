// CtorsAnd Dtors 2.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	
	// ��������� �������� ��'��� - ������� ���� ���������� ctor ����� A
	C c;
	// ��������� ������� ��'��� - ������� ���� ���������� dtor ����� A
	delete c;

	return 0;
}
