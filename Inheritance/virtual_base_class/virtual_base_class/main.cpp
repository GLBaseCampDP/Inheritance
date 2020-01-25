#include <iostream>
#define OUT(S)  { std::cout << S << "\n";}
struct A { void show() OUT('A') };

struct B : public A {};
struct C : public A {};
struct D : public B, public C {
void show() OUT('C')
};

void f_1(A a) { a.show(); }
void f_2(A& a) { a.show(); }
void f_3(A* a) { a->show(); }
void F(B b) { b.show(); }

int main() {
D d;
//f_1(d);   - неодназначність приведення
//явне приведеня типів
f_1(B(d));

// f_2(B(d));  - потрібне посиланя
//явне приведеня типів при передаванні адреси
f_3((B*)&d);
//автоматичне приведенні типів
F(d);
//явне приведеня типів при створенні вказівника
A *p_a = (B*) new D; f_1(*p_a);
//явне приведеня типів при передавання
// значення-вказівника
D *p_d = new D; F((B)*p_d);
//явне приведеня типів при передавання вказівника
f_3((B*)p_d);
}
