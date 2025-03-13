//craps simulation

#include<format>
#include<iostream>
#include<random>

using std::cout; using std::format; using std::random_device; using std::default_random_engine; using std::uniform_int_distribution;

int rollDice();

int main()
{
  enum class Status{keepRolling, won, lost};

  int myPoint{0};
  Status gamesStatus{Status::keepRolling};

  switch(const int sumOfDice{rollDice()})
  {
    case 7:  //win with 7 first roll
    case 11: //win with 11 on first roll
        gamesStatus = Status::lost;
        break;
    default: //did not win or lose, so remember point
        myPoint =  sumOfDice;  //remember th point
        cout<< format("Point is {}\n", myPoint);
        break;
  }

  while (Status::keepRolling == gamesStatus) // not won or lost roll dice again and dtermine game  status
  {
    if(const int sumOfDice{rollDice()}; sumOfDice == myPoint)
    {
      gamesStatus =  Status::won;
    }
    else if(sumOfDice == 7)
    {
      gamesStatus == Status::lost;
    }
  }

  if(Status::won == gamesStatus)
  {
    cout<<"PLayer wins\n";
  }
  else
  {
    cout<<"PLayer loses\n";
  }
}

int rollDice()
{
  static random_device rd;
  static default_random_engine engine{rd()};
  static uniform_int_distribution randomDie{1,6};

  const int die1{randomDie(engine)};
  const int die2{randomDie(engine)};
  const int sum{die1 + die2};

  cout<<format("Player rolled {} + {} = {}\n", die1, die2, sum);

  return sum;
}

