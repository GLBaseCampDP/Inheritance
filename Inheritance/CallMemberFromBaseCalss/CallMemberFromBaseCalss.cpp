// CallMemberFromBaseCalss.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
#define OUT(S)  { std::cout << S << "\n";}
struct A {
	void show() OUT(' A ')
};

struct B : public A {};
struct C : public A {};
struct D : public B, public C {
	void show() OUT(' C ')
};

void f_1(A a) { a.show(); }
void f_2(A& a) { a.show(); }
void f_3(A* a) { a->show(); }
void F(B b) { b.show(); }

void main() {
	D d;
	// �������������� ���������� 
	//f_1(d);	  
	//���� ��������� ����
	f_1(B(d));
	//���� ��������� ���� � ����������� �� ��'����
	f_2(B(d));
	//���� ��������� ���� ��� ���������� ������
	f_3((B*)&d);
	//����������� ��������� ����
	F(d);
	//���� ��������� ���� ��� �������� ���������
	A *p_a = (B*) new D; f_1(*p_a);
	//���� ��������� ���� ��� ����������� 
	// ��������-���������
	D *p_d = new D; f_2((B)*p_d);
	//���� ��������� ���� ��� ����������� ���������
		f_3((B*)p_d);
	system("pause");

}