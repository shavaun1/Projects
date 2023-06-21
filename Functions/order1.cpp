#include <iostream>

void order(int*, int*);

int main()
{
  using std::cout;
  using std::endl;

  int i = 7, j = 3;
  cout<< i << '\t' << j << endl;
  order(&i, &j);
  cout<<i <<'\t' << j << endl;
}

void order(int* p, int* q)
{
  int temp;

  if(*p > *q)
  {
    temp = *p;
    *p = *q;
    *q = temp; 
  }
}
