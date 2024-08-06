#ifndef DATE_H
#define DATE_h

class Date
{
  private:
    int month;
    int day;
    int year;

  public:
    Date(int=7, int = 4, int =2012);
    void setDate(int, int, int);
    void showDate();
};

#endif
