#include <iostream>
using namespace std;
struct A {
  char c_A;
  A(char i) { c_A = i; }
  // член базового класу
  void show() { cout << " -> "; cout << c_A; }
};


struct B : public A {
  char c_B;
  B(char j, char i) :A(i){
    c_B = j; cout << "Ієрархія класів : ";
  }
  void show();// член похідного класу
};


// перевизначення функції базового класу
// і розширення члена батьківського класу
void B::show() {
  cout << c_B;
  A::show();
}


int main() {
  B b('B', 'A');
  b.show();
}
