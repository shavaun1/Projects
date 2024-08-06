#include"packs/roomtype.h"
#include<iostream>
using std::cout;
using std::endl;

int main()
{
  RoomType roomOne(12.5,18.2);

  cout<<"The values for this room are:\n";
  roomOne.showRoomValues();          //use a class method on this object
  cout<<"\nThe floor area of this room is: ";
  roomOne.calculateRoomArea();      //use another class method on this objec

  roomOne.setNewRoomValues(5.5, 9.3);   //call the mutator
  
  cout<<"\n\nThe values for this room have been changed to:\n";
  roomOne.showRoomValues();
  cout<<"\nThe floor area of this room is: ";
  roomOne.calculateRoomArea();

  cout<<endl;

  return 0;
}
