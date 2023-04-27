#include<iostream>
#include "stock.h"
using namespace std;

int level1, level2, level3;
//These are the variable definitions corresponding to 
//the declarations in the header file.

char get_option()
{
  char option = '0';

  cout<<"\n\n1. Set levels. \n";
  cout<<"2. Get individual level. \n";
  cout << "3. Change individual level. \n";
  cout<< "4. Quit.\n";

  do
  {
    cout<<"\n\nEnter choice (1-4) : ";
    cin >> option;
  } while((option< '1') || (option > '4'));
  return option;

}

void set_levels()
{
  cout<<"Enter starting level for item 1 : ";
  cin >> level1;
  cout << "Enter starting level for item 2 : ";
  cin>> level2;
  cout <<"Enter starting level for item 3 : ";
  cin >> level3;
}

int get_level(int item)
{
  switch (item)
  {
    case 1 : return level1; break;
    case 2: return level2; break;
    case 3: return level3; break;
            default: return 1;
  }
}

boolean changes_level(int item, int level)
{
  switch(item)
  {
    case 1 : level1 = level; break;
    case 2 : level2 = level; break;
    case 3 : level3 = level; break;
             default: return FALSE;
  }

  return TRUE;
}
