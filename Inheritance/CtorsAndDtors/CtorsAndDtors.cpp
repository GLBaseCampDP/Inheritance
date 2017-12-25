// CtorsAndDtors.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
#define MESCtor(s) cout << "Конструктор класу " << s << "\n";
#define MESDtor(s) cout << "Деструктор класу " << s << "\n";
#define CtorBody(O)  { O::c = c; MESCtor(c); }
#define DtorBody  { MESDtor(c); }


class A {
	char c;
public:
	A(char c) CtorBody(A);
	~A() DtorBody;
};

class B : public A {
	char c;
public:
	B(char c, char c1) : A(c1) CtorBody(B);
	~B() DtorBody;
};

class C :public B
{
	char c;
public:
	C(char c, char c1, char c2) :B(c1, c1) CtorBody(C);
	~C() DtorBody;
};

void main()
{
	C* c = new C('C', 'B', 'C');
	delete c;
}



