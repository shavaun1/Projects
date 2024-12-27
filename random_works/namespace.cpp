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
#include<ctime>
#include<vector>






using std::cout;

namespace shavaun
{
  void jackson();
}

namespace shavaun1
{
  void jackson();
}

void hello();

int main()
{
  {
    using namespace shavaun1;
    jackson();
  }

  {
    using namespace shavaun;
    jackson();
  }

  hello();

  return 0;
}

namespace shavaun
{
  void jackson()
  {
     cout<<"Hello from namespace shavaun.\n";
  }
}

namespace shavaun1
{
  void jackson()
  {
     cout<<"Greetings from namespace shavaun1.\n";
  }
}

void hello()
{
   cout<<"A big global hello!.\n";
}

