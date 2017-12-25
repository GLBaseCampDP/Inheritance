// Inheritance.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

class A
{
protected:
	int a_pr;
public:
	int a_pub;
};
class B : public A
{
protected:
	int b_pr;
public:
	int b_pub;
};


int main()
{
    return 0;
}

