#ifndef ELEVATOR_H
#define ELEVATOR_H

//class declaration 
class Elevator
{
  private:
    int elNum;
    int currentFloor;
    int higestFloor;
  public:
    Elevator(int = 1, int = 1, int = 15); //constructor
    void request(int);
};

#endif
