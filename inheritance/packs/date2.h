#ifndef DATESS_H
#define DATESS_H

class Datess
{
  private:
    int month;
    int day;
    int year;
  public:
    Datess(int = 7, int = 4, int = 2012);
    Datess(long);
    void showDatess();
};

#endif
