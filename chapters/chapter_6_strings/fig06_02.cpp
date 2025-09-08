#include"Head/fig06_02.cpp"
#include<iostream>
#include<string>


 using std::string; using std::cout;

int main()
{
  const string s1{"Testing th comparison functions."};
  const string s2{"Hello"};
  const string s3{"stringer"};
  const string s4{s2};

  if(s1 > s4)
  {
    cout<<"\n\ns1 > s4\n";
  }

  displayResult("s1.compare(s2)", s1.compare(s2));
  displayResult("s1.compare(2,3,s3,0,5)",s1.compare(2,5,s3,0,5));
  displayResult("s4.compare(0,s2,size(),s2)",s4.compare(0,s2.size(),s2));
  displayResult("s2.compare(0,3,s4)", s2.compare(0,3,s4));
}
