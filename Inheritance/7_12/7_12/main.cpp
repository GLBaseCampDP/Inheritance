#include <iostream>
using namespace std;
#define OUT(S)  std::cout << S << "\n";
struct A { static unsigned int i;
  A() { i++; OUT(" class A"); }
};
unsigned int A::i = 0;

struct B: public A { B()
{ OUT(" class B"); } };
struct C: public A { C()
{ OUT(" class C"); } };
struct D: public B, public C
{ D() { OUT(" class D");} };


struct B1: virtual public A { B1()
{ OUT(" class B"); } };
struct C1: virtual public A { C1()
{ OUT(" class C"); } };
struct D1: public B1, public C1
{ D1() { OUT(" class D");} };





int main() {  D d; D1 d1;
cout << "Class A count - " << A::i; }

