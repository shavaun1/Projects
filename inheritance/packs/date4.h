#ifndef DATEU_H
#define DATEU_H

class DateU
{
  private:
    int month;
    int day;
    int year;
  public:
    DateU(int = 7, int = 4, int = 2012);
    DateU operator+(int);
    void showDate();
};

#endif
