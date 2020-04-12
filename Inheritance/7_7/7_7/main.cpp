#define CTORS(DC, BC) DC() { set(0); }\
  DC(DC& c) : BC(c) { set(0); }


class XY {
  double d;
  protected:
    void set(XY& p) { set (p.d); }
    void set(double p) { d = p; }
    double get() { return d; }
  public:
    XY()  { set((double)0);}
    XY(XY& p) { set(p); }
};


class Circle : public XY {
  public:
   void set_radius(double r) { set(r); }
   double get_radius() { return get(); }
   double square () {double r = get();return 3.14*r*r;}
  CTORS(Circle, XY)
};


class Quadrate  : public XY {
 public:
  void set_side(double a) { set(a);  }
  double get_side() { return get(); }
  double square () {double a = get();return a*a;}
  CTORS(Quadrate, XY)
};


int main() {
    Quadrate  q; q.set_side(1);
    Circle c; c.set_radius(100);
}
