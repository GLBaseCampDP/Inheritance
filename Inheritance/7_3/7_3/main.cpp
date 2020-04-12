#include <iostream>
#define MESCtor(s) std::cout << " Конструктор класу " << s << '\n';
#define MESDtor(s) std::cout << " Деструктор класу " << s << '\n';
#define CtorBody(O)  { O::c = c; MESCtor(c); }
#define DtorBody  { MESDtor(c); }


struct A {   char c;
  A(char c) CtorBody(A);
  ~A() DtorBody;
};


struct B : public A {   char c;
  B(char c, char c1) : A(c1) CtorBody(B);
  ~B() DtorBody;
};
struct C :public B {   char c;
  C(char c, char c1, char c2) : B(c1, c2)
    CtorBody(C);
  ~C() DtorBody;
};


int main()  {
    C* c = new C('C', 'B', 'C');
    delete c;
}
