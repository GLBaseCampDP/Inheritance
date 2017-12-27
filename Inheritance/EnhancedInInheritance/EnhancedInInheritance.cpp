// EnhancedInInheritance.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
struct A {
	char c_A;
	A(char i) { c_A = i; }
	// ���� �������� �����
	void show() { cout << " -> "; cout << c_A; }
};

struct B : public A {

	char c_B;
	B(char j, char i) :A(i)	{
		c_B = j; cout << "�������� ����� : ";
	}
	void show();	// ���� ��������� �����
};

// ������������� ������� �������� �����
// � ���������� ����� ������������ �����
void B::show() {
	cout << c_B;
	A::show();
}

void main() {
	B b('B', 'A'); b.show();
}

