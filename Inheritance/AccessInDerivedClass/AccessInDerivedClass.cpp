// AccessInDerivedClass.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
class A {
protected:
	int a_pr;
public:
	int a_pub;
};

class B : public A {
protected:
	int b_pr;
public:
	int b_pub;
	void F(int i1, int i2)
	{
		//������ �� �������� �����
		b_pr = 1;
		//������ �� ������������ ����� �� �� ��������
		a_pr = 1;

		//������ �� ������������ ����� ����� ��� 
		A::a_pr = 2;
	}
};

void main()
{
	B b; b.F(1, 2);
	//������ �� �����. ����� ����� ��'��� � ��
	b.a_pub = 1;
	//������ �� �����. ����� ����� ��'��� � ���
	b.A::a_pub = 2;
}

