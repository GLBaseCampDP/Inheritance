#include <iostream>
using namespace std;


struct A {
  void out() { cout << "class A" << endl; }
};


struct B : public A {
  // переозначена функція базового класу
  void out() { cout << "class B" << endl; }
};


void F(A& a) { a.out(); } 	//Функція - шлюз
void F(A* p) { p->out(); } 	//Функція - шлюз
void FF(B* p) { p->out(); } 	// Звичайна функція
void FF(B& a) { a.out(); } 	// Звичайна функція


int main() {
  A a;   B b;
  // дозволені виклики через шлюз
  F(a); F(&a);  F(b); F(&b);
  // Вказівниковий шлюз
  A* p = &a; p->out();
  p = &b;    p->out();
  // дозволені виклики функції FF
  FF(&b); FF(b); FF((B*)&a);
  // заборонені виклики функції FF
  //FF(&a); FF(a);
}
