#define CTORS(DC, BC) DC() { set(0); } \
                  DC(DC& f) : BC(f) { set(f); }
#define EXEC(F) double F(double r) \
   { set(r); return F(); } \
   inline double F() { return get(); }

class Figure : public Point {
  double d;
  protected:
    void set(double r) { d = (r >= 0) ? r : -1; }
    double get() { return d; }
    void set(Figure& p)
      { set(p.get()); Point::set(p); }
    double exec() { return 0; }
  public:
  CTORS(Figure, Point)
};

struct Circle : public Figure {
 EXEC(radius) CTORS(Circle, Figure)
 double exec() { return 3.14*radius()*radius(); }
};

struct Square : public Figure {
 EXEC(side) CTORS(Square, Figure)
 double exec() { return side()*side(); }
};

int main() {
  Square r; r.side(1); r.exec();
  Circle c; c.radius(100); c.exec();
}
