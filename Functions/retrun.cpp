#include <iostream>
using namespace std;

void iceCreamDivision(int number, double totalWeight);
//outputs instructions for dividing totalweight once of ice cream
//among number customers. If number is 0, only error.

  int main()
  {
    int number;
    double totalWeight;

    cout <<"Enter the number of customers: ";
    cin >> number;
    cout <<"Enter weight of ice cream to divide(in ounce): ";
    cin >> totalWeight;

    iceCreamDivision(number, totalWeight);
     
    return 0;
  }

void iceCreamDivision(int number, double totalWeight)
{
  double portion;

  if(number == 0)
  {
    cout << "Cannot divide amoung zero customer.\n";
    return ;
  }
  portion = totalWeight/number;
  cout <<"Each one receives"
    <<portion <<" once of ice cream."<< endl;
}

