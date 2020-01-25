#include <iostream>

using namespace std;

struct A final {
  void f() {     std::cout << "A" ;   }
};


//struct B : A  { };
int main (){ return 1; }
