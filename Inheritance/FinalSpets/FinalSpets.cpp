// FinalSpets.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
struct A final
{
	void f()
	{
		std::cout << "A" ;
	}
};

struct B : A
{ };

int main()
{
    return 0;
}

