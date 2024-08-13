//class implementation section

#include<iostream>
#include"elevator.h"
using std::cout;
using std::endl;

Elevator::Elevator(int idnum, int cfloor, int maxfloor)
{
  elNum = idnum;
  currentFloor = cfloor;
  higestFloor = maxfloor;
}

void Elevator::request(int newfloor)
{
  if(newfloor< 1 || newfloor > higestFloor || newfloor == currentFloor)
    ;// do nothing
    else if(newfloor > currentFloor) // move elevator up
    {
      cout<<"\nElevator "<<elNum
        <<" starting at floor "<< currentFloor << endl;
      while(newfloor > currentFloor)
      {
        currentFloor++; //add one to current floor
        cout<<" Going up - now at floor "<< currentFloor << endl;
      }
      cout<<"Elevator "<< elNum
        <<" stopping at floor "<< currentFloor<< endl;
    }
  else // move elevator down
  {
    cout <<" \nElevator "<< elNum
      <<" starting at floor "<< currentFloor << endl;
    while(newfloor < currentFloor)
    {
      currentFloor--; //subtract one from current floor
      cout<<" Going Down - now at floor "<< currentFloor<<endl;
    }
    cout<<"Elevator "<<elNum
      <<" Stopping at floor "<<currentFloor << endl;
  }
  return;
}
