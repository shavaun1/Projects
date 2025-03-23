//Treating charcter arrays as strings
#include<iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
char string1[20], string2[] = "string literal";

  cout<<"Entera string: ";
  cin >> string1;
  cout<<"string1 is: "<<string1
    <<"\nstring2 is: "<<string2
    <<" string1 with spaces between characters is:\n";

  for(int i = 0; string1[i] !='\0'; i++)
    cout<<string1[i]<<' ';

  cin>>string1;
  cout<<"\nstring1 is: "<<string1 << endl;

  cout<<endl;
  return 0;
}
