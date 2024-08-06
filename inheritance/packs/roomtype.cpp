#include"roomtype.h"
#include<iostream>
using std::cout;
using std::endl;

RoomType::RoomType(double l, double w)// constructor
{
  length = l;
  width = w;
  cout<<"Created a new room object using default constructor.\n\n";
}

void RoomType::showRoomValues() // this is an accessor
{
  cout<<"  length = "<< length 
    <<"\n   width = "<<width <<endl;
}

void RoomType::setNewRoomValues(double l, double w) // this is a mutator
{
  length = l;
  width = w;
}

double RoomType::calculateRoomArea()//this performs a calculation
{
  return(length*width);
}
