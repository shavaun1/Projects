#include<iostream>
#include "header/searching.h"
 

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;

  const int DECLARED_SIZE = 20;

  int arr[DECLARED_SIZE], listsize, target;

  fillArray(arr, DECLARED_SIZE, listsize);

  char ans;
  int result;
  do
  {
    cout<<"Enter a number search for: ";
    cin >> target;

    result = search(arr, listsize, target);
    if(result == -1)
      cout<<target << " is not on the list.\n";
    else
      cout<< target <<" is stored in array position "
        <<result << endl
        <<"(Remember: The first position is 0.)\n";
    cout<<"Search again?(y/n followed by Return): ";
    cin >> ans;
  }while((ans != 'n') &&(ans != 'N'));
  cout<<"End of program.\n";
  return 0;
}

