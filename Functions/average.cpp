#include<iostream>
#include<string>

double average(const int size, int& sum)
{
  using std::cout;
  int data;
  using std::endl;
  cout<<"\n Enter "<< size << " integers: "<< endl;

  for(int i = 0; i < size; ++i)
  {
    using std::cin;
    cin >> data;
    sum += data;
  }
  return static_cast<double>(sum) / size;
}

double average(const int size, double& sum)
{
  double data;
  using std::cout;
  using std::endl;
  cout<<"\n Enter "<< size << " doubles: "<< endl;

  for(int i = 0; i < size; ++i)
  {
    using std::cin;
    cin >> data;
    sum += data;
  }
  return sum / size;
}

int main()
{
  using std::cout;
  using std::endl;

  int isum = 0;
  double dsum = 0.0;

  cout<< average(10, isum)<< " int aaverage"<< endl;
  cout<< average(10, dsum)<<" double average"<< endl;
}
