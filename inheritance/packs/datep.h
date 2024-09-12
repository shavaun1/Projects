#ifndef DATEP_H
#define DATEP_H

class Datep
{
  private:
    int month;
    int day;
    int year;
  public:
    Datep(int =7, int = 4, int = 2012);
    bool operator == (Datep&);

};

#endif
