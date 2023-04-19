#include <iostream>


using namespace std;

int main()
{
  int n = 10;

  for(int i = 1; i <=n; i++)
  {
    
    for(int j = n-i; j >0; j--)
    
      cout << " ";

    for(int k = 1; k <= i; k++)
    
      cout <<"@ ";

     cout << "\n";

  }


  for(int a = n; a >= 1; a--)
  {
    for(int b = n-a; b >0; b--)

      cout<<" ";

   for(int c = 0; c <= a; c++)
    cout<<"+ ";
    cout<<"\n";
  }

}



