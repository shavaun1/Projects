//Integer range and arbitrary-percison integers

#include<iostream>
#include"Big/bignumber.h"

using std::cout; 

int main()
{
  const long long value1{9'223'372'036'854'775'807LL};
  cout<<"long long value1: "<< value1
    <<"\nvalue1 - 1 = "<< value1 - 1;
   // <<"\nvalue1 + 1 = "<< value1 + 1; // reslut is undefined

  //use an arbitrary-percison integer
  const BigNumber value2{value1};
  cout<<"\n\nBigNumber value2: "<< value2
    <<"\nvalue2 - 1 = "<< value2 - 1
    <<"\value2 + 1 = "<< value2 + 1; // ok

  //powers of 100,000,000 with long long
  long long value3{100'000'000};
  cout<<"\n\nvalue3: "<<value3;

  int counter{2};

  while(counter <= 5)
  {
    value3 *= 100'000'000;
    cout<<"\nvalue3 to the power "<< counter <<" : "<< value3;
    ++counter;
  }

  BigNumber value4{100'000'000};
  cout<<"\n\nvalue4: "<< value4<<"\n";

  counter = 2;

  while(counter <= 5)
  {
    cout<<"value4.pow ("<< counter <<"): "
      <<value4.pow(counter) <<"\n";
    ++counter;
  }

  cout <<"\n";

}
