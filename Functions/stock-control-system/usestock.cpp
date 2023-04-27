#include<iostream>
#include<initializer_list>
#include "stock.h"

using namespace std;

int main()
{
  char option;
  int item, level;
  init_levels();

  do
  {
    option = get_option();
    switch (option)
    {
      case '1': set_levels();
                break;
      case '2': cout << "Enter item no.(1-3): ";
                cin >> item;
                level = get_level(item);
                if(level != -1)
                  cout << "Level= "
                    <<level<<'\n';
                else
                  cout<<"INvalid item!\n";
                break;
      case '3' : cout << "Enter item no(1-3): ";
                 cin >> item;
                 cout <<"Enter new level : ";
                 cin >> level;
                 if(!changes_level(item, level))
                   cout<<"\a*INvalid item!*\n";
                 
    }

  } while(option != '4');

  return 0;


  
  
}
