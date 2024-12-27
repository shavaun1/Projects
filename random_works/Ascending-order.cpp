#include <cstddef>
#include <cstddef>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<cmath>
#include<string>
#include<fstream>
#include<cctype>
#include<climits>
#include <iostream>
#include <type_traits>
#include<iomanip>
#include<cstring>
#include<cstdlib>



//Reads in three int values. The numbers should then
//be output in ascending order from smallest to largest.
//Use if and if-else.


int main()
{
  
  using namespace std;
  
 int a, b, c;
 char n;

 do
 {

 cout<<"Ascending order from smallest to largest.\n\n";
 cout<<"Enter three numbers in random order of values: ";
 cin>> a>> b >> c;


 if((a<b) && (a<c) && (b>a) && (b<c) && (c>a) && (c>b))
 {
   cout<<a<<" "<<b<<" "<<c;
 }

 else if((a<b) && (a<c) && (b>a) && (b>c) && (c>a) && (c<b))
 {
   cout<<a<<" "<<c<<" "<<b;
 }

 else if((a>b) && (a>c) && (b<a) && (b<c) && (c<a) && (c>b))
 {
   cout<<b<<" "<<c<<" "<<a;
 }

 else if((a>b) && (a>c) && (b<a) && (b>c) && (c<a) && (c<b))
 {
   cout<<c<<" "<<b<<" "<<a;
 }
 
 else if((a<b) && (a>c) && (b>a) && (b>c) && (c<a) && (c<b))
 {
   cout<<c<<" "<<a<<" "<<b;
 }

 else if((a>b) && (a<c) && (b<a) && (b<c) && (c>a) && (c>b))
 {
   cout<<b<<" "<<a<<" "<<c;
 }

 else if((a<b) && (a<c) && (b>a) && (b==c) && (c>a) && (c==b))
 {
   cout<<a<<" "<<b<<" "<<c;
 }

 else if((a>b) && (a == c) && (b<a) && (b<c) && (c==a) && (c>b))
 {
   cout<<b<<" "<<a<<" "<<c;
 }

 else if((a==b) && (a>c) && (b==a) && (b>c) && (c<a) && (c<b))
 {
   cout<<c<<" "<<a<<" "<<b;
 }

 else if((a<b) && (a<c) && (b>a) && (b==c) && (c>a) && (c==b))
 {
   cout<<a<<" "<<b<<" "<<c;
 }

 else if((a>b) && (a==c) && (b<a) && (b<c) && (c==a) && (c<b))
 {
   cout<<b<<" "<<a<<" "<<c;
 }

 else if((a==b) && (a>c) && (b==a) && (b>c) && (c<a) && (c<b))
 {
   cout<<c<<" "<<a<<" "<<b;
 }


 else
   cout<<"YOu have input three identical numbers.\n\n";

 cout<<"\n\n";

 cout<<"Do you want to try again?";
 cin>>n;
 cout<<"\n\n";
  
 }

 while(n == 'y' || n == 'Y');
  return 0;
}





