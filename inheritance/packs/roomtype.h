#ifndef ROOMTYPE_H
#define ROOMTYPE_H

class RoomType
{
  private:
    double length;
    double width;

  public:
    RoomType(double = 0.0, double = 0.0);
    void showRoomValues();
    void setNewRoomValues(double, double);
    double calculateRoomArea();
};

#endif
