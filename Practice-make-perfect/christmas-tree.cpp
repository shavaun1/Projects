#include <iostream>


using namespace std;

int main()
{
  int array[] = {4,8,1,56,73,36,99,21};
  int arrayLength = sizeof(array) / sizeof(*array);

  for(int i = 0; i < arrayLength; i++)
  {
    cout << array[i] << endl;
  }
}

