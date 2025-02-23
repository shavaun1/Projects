//Analysis of examination results
#include<iostream>
using std::cout; using std::cin; using std::endl;

int main()
{
  int passes{0}, failures{0}, studentCounter{1}, result;

  while(studentCounter <= 10){
    cout<<"Enter result(1 = pass, 2 = fail): ";
    cin >> result;
    
    if(result == 1)
      passes = passes + 1;
    else
      failures = failures + 1;
    studentCounter = studentCounter + 1;
  }
  cout<<"Passed "<< passes <<endl;
  cout<<"Failed "<< failures << endl;

  if (passes > 8)
    cout<<"Raise tuition "<< endl;
  
  return 0;
}

