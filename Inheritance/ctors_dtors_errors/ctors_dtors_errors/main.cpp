#include <iostream>

using namespace std;

struct A {
  int i;
};

struct B : public A {
  B(int) {}
};

struct C : public A {
  ~C(){}
};


int main() {
// B b;
// неможливо створити об'єкт –
//потрібен явно визначений ctor класу A
 C* p = new C;
 delete p;
// в нових весіях - ОК
// в старих версіях - error


 return 0;
}
