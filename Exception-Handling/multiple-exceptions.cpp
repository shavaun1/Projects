#include<iostream>
#include<string>
using namespace std;

class NegativeNumber
{
  public:
    NegativeNumber();
     NegativeNumber(string takemeToYourCatchBlock);
    string getMessage();
  private:
    string message;
};

class DivideByZero
{};

int main()
{
  int jeMHadar, klingons;
  double portion;

  try
  {
    cout<<"ENter number of jeMHadar worriros:\n";
    cin >> jeMHadar;
    if(jeMHadar < 0 )
      throw NegativeNumber("jeMHadar");

    cout<<"How many klingons worriors do you have?\n";
    cin >> klingons;
    if(klingons < 0)
      throw NegativeNumber("klingons");
    if(klingons != 0)
      portion = jeMHadar / static_cast<double>(klingons);
    else
      throw DivideByZero();
    cout << "Each klingons ,ust fight "
      <<portion << " jeMHadar.\n";
  }
  catch(NegativeNumber e)
  {
    cout<<"Cannot have a Negative number of "
      <<e.getMessage()<< endl;
  }
  catch(DivideByZero)
  {
    cout<<"Send for help.\n";
  }

  cout <<"End of program.\n";
  return 0;
}

NegativeNumber::NegativeNumber()
{}

NegativeNumber::NegativeNumber(string takemeToYourCatchBlock)
  : message(takemeToYourCatchBlock)
{}

string NegativeNumber::getMessage()
{
  return message;
}
