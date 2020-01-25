#include <iostream>
using namespace std;
#define OUT(S,N) { cout << S << N << endl; }

struct A  {
 int num;
 static int i;
 void out() OUT(" class A - ", num);
 void set() { i++; num = i; }
 A() { set(); OUT(" ctor A - ", num); }
 ~A() { i--; OUT(" dtor A - ", num); }
};

int A::i = 0;

struct B : public A {
 int numB;
 static int j;
 void set() { j++; numB = j; }
 void out() OUT(" class B - ", numB);
 B() { set(); OUT(" ctor B - ", numB);}
 ~B() { j--; OUT(" dtor B - ", numB); }
};

int B::j = 0;

int main() {
A* p = new B;  B* p2 = new B;

p->out();
delete p2;  delete p;
p2->out();
p2->A::out();
p->out();
system("pause");
}
