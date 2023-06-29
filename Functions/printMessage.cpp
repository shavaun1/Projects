#include<iostream>
#include"packages/printMessage.h"

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;

  char choice;
  do
  {
    cout<<"Enter Q to quit, any other character to continue: ";
    cin >> choice;
    if((choice == 'Q') && (choice == 'q'))
      cout<<"Input stopped";
    else
      printMessage();
  }while((choice != 'Q') && (choice != 'q'));
  return 0;
}

