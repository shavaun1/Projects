//Using if statements, relational operators, and equality operators

#include<iostream>
using std::cout; using std::endl; using std::cin;

int main()
{
  int num1, num2;

  cout<<"Enter two integers, and I will tell you\n"
    <<"the relationships they satisfy: ";
  cin>>num1 >> num2;

  if(num1 == num2)
    cout<< num1 <<" is equal to "<< num2 <<endl;
  if(num1 != num2)
    cout<< num1 << " is not equal to "<< num2 <<endl;
  if(num1 < num2)
    cout<< num1 <<" is less than "<<num2<< endl;
  if(num1 > num2)
    cout<< num1 <<" is greater than "<<num2 << endl;
  if(num1 <= num2)
    cout<< num1 <<" is less than or equal to "
      <<num2 << endl;
  if(num1 >= num2)
    cout<< num1 << " is greater than or equal to "
      <<num2 << endl;

  return 0;
}
