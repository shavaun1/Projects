//using an inline function to calculate the volume of a cube

#include<iostream>

using std::cout; using std::cin; using std::endl;

inline float cube(const float s) {return s * s * s;}

int main()
{
  cout<<"Enter the side length of your cube: ";

  float side;

  cin >> side;
  cout<<"Volume of cube with side "
    <<side << " is "<<cube(side)<<endl;

  return 0;
}
