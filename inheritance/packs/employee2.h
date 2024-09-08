#ifndef EMPLOYEE2_H
#define EMPLOYEE2_H

class Employee2
{
  private:
    static double taxRate;
    int idNum;
  public:
    Employee2(int = 0);
    void display();
};

#endif 
