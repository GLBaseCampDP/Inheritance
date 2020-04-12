class A {
  protected:
    int a_pr;
  public:
    int a_pub;
};


class B : public A {
  protected:
    int b_pr;
  public:
    int b_pub;
    void F(int, int) {
      //доступ до власного члена
      b_pr = 1;
      //доступ до наслідуваного члена
      a_pr = 1;
      //доступ до наслідуваного члена через ОДД
      A::a_pr = 2;
   }
 };


 int main() {
   B b; b.F(1, 2);
   //доступ до наслід. членів через об'єкт і ОД
   b.a_pub = 1;
   //доступ до наслід. членів через об'єкт і ОДД
   b.A::a_pub = 2;
 }


