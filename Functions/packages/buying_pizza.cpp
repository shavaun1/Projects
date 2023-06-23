#include"buying_pizza.h"
#include<iostream>

void getData(int& smallDiameter, double& priceSmall, int& largeDiameter, double& priceLarge)
{
  using std::cin;
  using std::cout;
  using std::endl;

  cout<<"Welcome to the pizza Consumer Union.\n";
  cout<<"ENter diamter of a small pizza (in inches): ";
  cin >> smallDiameter;
  cout<<"Enter the price of a small pizza: $";
  cin >> priceSmall;
  cout<<"Enter diamter of a large pizza (in inches)";
  cin >> largeDiameter;
  cout <<"Enter the price of a large pizza: $";
  cin >> priceLarge;
}

void giveResults(int smallDiameter, double priceSmall, int largeDiameter, double priceLarge)
{
  using std::cout;
  using std::endl;
  double unitPriceSmall, unitPriceLarge;

  unitPriceSmall = unitPrice(smallDiameter, priceSmall);
  unitPriceLarge =  unitPrice(largeDiameter,priceLarge );
  cout.setf(std::ios::fixed);
  cout.setf(std::ios::showpoint);
  cout.precision(2);
  cout<<"Small pizza:\n"
    <<"Diameter = "<<smallDiameter <<" inches\n"
    <<"Prices = $"<<priceSmall
    <<" per square inch = $"<< unitPriceSmall<< endl
    <<"Large pizza:\n"
    <<"Diameter = "<< largeDiameter <<" inches\n"
    <<"Price = $"<< priceLarge
    <<" Per square inches = $"<<unitPriceSmall << endl;
  if(unitPriceLarge < unitPriceSmall)
    cout<<"The Large one is the better buy.\n";
  else
    cout<<"The small one is the better buy.\n";
  cout<<"Buon Appetito!\n";

}

double unitPrice(int diameter, double price)
{
  const double PI = 3.4159;
  double radius, area;

  radius = diameter/static_cast<double>(2);
  area = PI * radius * radius;
  return(price/area);
}
