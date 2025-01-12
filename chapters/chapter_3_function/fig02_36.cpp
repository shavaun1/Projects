//Using a function template
#include<iostream>

using std::cout; using std::cin; using std::endl;

template< class T >
T maximum(T value1, T value2, T value3)
{
  T max = value1;

  if(value2 > max)
    max = value2;

  if(value3 > max)
    max = value3;

  return max;
}

int main()
{
  int int1, int2, int3;

  cout<<"Input three integer values: ";
  cin>> int1 >> int2 >> int3;
  cout<<"The maximum inetger value is: "
    << maximum(int1, int2, int3);

  double double1, double2, double3;
  
  cout<<"\nInput three double values: ";
  cin>>double1>> double2 >> double3;
  cout<<"The maximum double value is: "
    <<maximum(double1, double2, double3);

  char char1, char2, char3;

  cout<<"\nInput three characters: ";
  cin >> char1 >> char2 >> char3;
  cout<<"The maximum characters value is: "
    <<maximum(char1,char2,char3)
    <<endl;

  return 0;
}
