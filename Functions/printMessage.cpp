#include<iostream>

void printMessage(void);

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

void printMessage(void)
{
  using std::cout;

  int static times = 0;
  times++;
  cout<<"THis function called "<< times << " times\n";
}
