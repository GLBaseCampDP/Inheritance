struct A {
  int i;
  A(int) {}
};

struct B : public A { };

struct C : public B {
  ~C(){}
};

int main() {
// C c;
// неможливо створити об'єкт –
//потрібне управління ctor класу A
// через клас В
return 0;
}
