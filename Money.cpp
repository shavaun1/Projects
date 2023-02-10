#include <cstddef>
#include <cstddef>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<cmath>
#include<string>
#include<fstream>
#include<cctype>
#include<climits>
#include <iostream>
#include <type_traits>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<vector>



//Bank account..


using namespace std;

class MOney
{
  public:
    friend MOney add(const MOney& amount1, const MOney& amount2);
    //Precondtion: amount1 and amount2 have been given values.
    //Return the sum of the values of amount1 and amount2.

    friend bool equal (const MOney& amount1, const MOney& amount2);
    //Precondtion: amount1 and amount 2 have been given values.
    //Return true if the amount1 and amount2 have the same value;
    //otherwise, return false.

    MOney(long dollars,int cents);
    //Initializes the object so its value represents an amount with the 
    //dollars and cents given by the arguments. If the mount is negative,
    //then both dollars and cents must be negative

    MOney(long dollars);
    //Initializes the object so its value represents $dollars.00.

    MOney();
    //Initializes the object so its value represnts $0.00.

    double getValue() const;
    //Precondtion: The callling object has been given a value.
    //Rturn the amount of money recorded in the data of the calling object.

    void input(istream& ins);
    //Precondtion: If ins is a file input stream, then ins has already been 
    //connected to a file. An amount of moeny, including a dollars sign, has been 
    //entered in the input streams ins. Notation for negative amount is- $100.00
    //PostConditin: The value of the valling object has been set to 
    //the amount of money read from the input stream ins.
    
    void outPut(ostream& outs) const;
    //Precondtion:If outs is a file output stream, then outs has already been 
    //connectd to a file.
    //PostConditin: A dollar sign and the amount of money recorded
    //in the  calling object have been sent to the output stream outs.

 private:
    long allCents;
};

int ditiToInt(char c);
//Function declaration for function used in the definition of money::input:
//Precondtion: c is one of the digits '0' through '9'.
//Return the integer for the digits; for example, ditiToInt('3') return 3.

int main()
{
  MOney yourAmout, myAmount(10,9), ourAmount;
  cout<<"Enter an amount of money: ";
  yourAmout.input(cin);
  cout<<"Your amount is ";
  yourAmout.outPut(cout);
  cout << endl;
  cout<<"My amount is ";
  myAmount.outPut(cout);
  cout << endl;

  if(equal(yourAmout,myAmount))
    cout<<"We have the same amounts.\n";
  else
    cout<<"One of us is richer.\n";
  ourAmount = add(yourAmout, myAmount);
  yourAmout.outPut(cout);
  cout<<" + ";
  myAmount.outPut(cout);
  cout<<" equals ";
  ourAmount.outPut(cout);
  cout<<endl;
  return 0;
}

MOney add(const MOney& amount1, const MOney& amount2)
{
  MOney temp;
   
  temp.allCents = amount1.allCents + amount2.allCents;
  return temp;
}

bool equals(const MOney& amount1, const MOney& amount2)
{
  return (amount1.allCents == amount2.allCents);
}


MOney::MOney(long dollars, int cents)
{
  if(dollars * cents < 0)
  {
    cout<<"Illegal values for dollars and cents.\n";
    exit(1);
  }
  allCents = dollars * 100 + cents;
}

MOney::MOney(long dollars):allCents(dollars * 100)
{

}

MOney::MOney():allCents(0)
{

}

double MOney::getValue() const
{
  return(allCents * 0.01);
}

void MOney::input(istream& ins)
{
  char oneChar, decimalPoint, digit1, digit2;
  long dollars;
  int cents;
  bool negative;

  ins >> oneChar;
  if(oneChar == ' ')
  {
    negative = true;
    ins >> oneChar;
  }
  else
    negative = false;

  ins >> dollars >> decimalPoint >> digit1 >> digit2;

  if(oneChar != '$' || decimalPoint != '.' || !isdigit(digit1) || !isdigit(digit2))
  {
    cout<<"Error illegal form for money input\n";
    exit(1);
  }
  cents =  ditiToInt(digit1) * 10 + ditiToInt(digit2);

  allCents = dollars * 100 + cents;
  if(negative)
    allCents = -allCents;
}

void MOney::outPut(ostream& outs) const
{
  long positiveCents, dollars, cents;
  positiveCents = labs(allCents);
  dollars = positiveCents / 100;
  cents = positiveCents % 100;

  if(allCents < 0)
    outs << "-$" << dollars << '.';
  else
    outs<<"$"<< dollars << '.';

  if(cents < 10)
    outs << '0';
  outs << cents;
}

int ditiToInt(char c)
{
  return (static_cast<int>(c) - static_cast<int>('0'));
}















