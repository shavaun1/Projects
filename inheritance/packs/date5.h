#ifndef DATER_H
#define DATER_H

class DateR
{
  private:
    int month;
    int day;
    int year;
  public:
    DateR(int = 7, int = 4, int = 2012);
    DateR(const DateR&);
    void showDate();
};

#endif
