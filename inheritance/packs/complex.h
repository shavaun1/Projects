#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
  friend double addreal(Complex&,Complex&);
  friend double addimag(Complex&, Complex&);
  private:
  double real;
  double imag;
  public:
  Complex(double = 0, double = 0);
  void display();
};

#endif
