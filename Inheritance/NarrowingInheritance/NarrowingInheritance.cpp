// NarrowingInheritance.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

void MARK() { cout << "(Single class)"; }

struct A {
	char c_A;
	A(char i) { c_A = i; }
	// ���� �������� �����
	void show() { cout << "\nBase clas is " << c_A; MARK(); }
};

struct B : public A {
	char c_B;
	B(char j, char i) :A(i) { c_B = j; }
	void show();	// ���� ��������� �����
};

void B::show() { // ������������� ������� �������� �����
	// ��������� �����
	cout << "\nBase clas is " << c_A ; 
}

void main() {
	A a('A'); a.show();
	B b('B', 'A'); b.show();
	system("pause");
}




