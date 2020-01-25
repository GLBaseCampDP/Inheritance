#include <iostream>

using namespace std;

struct A {
  int i;
};

struct B : public A {
  B(int) {}
};

struct C : public B {
    ~C(){}
  };

  int main() {
  // C c;
  // неможливо створити об'єкт –
  //потрібне управління ctor класу В
  return 0;
  }

