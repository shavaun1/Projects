#include<iostream>
#include"hide/CreateAndDestroy.h"

using std::cout;

void cretae();
const CreateAndDestroy first{1, "(global before main)"};
int main()
{
  cout<<"\nMAIN FUNCTION: EXECUTION BEGINS\n";
  const CreateAndDestroy second{2, "(local in main)"};
  static const CreateAndDestroy third{3, "(local static in main)"};
  
  create(); // call function to create objects

  cout<<"\nMAIN FUNCTION: EXECUTION: EXECUTION RESUMES\n";
  const CreateAndDestroy forth{4, "(local in main)"};
  cout<<"\nMAIN FUNCTION: EXECUTION ENDS\n";

}


