//This is the header file pfarraydbak.h. This is the interface for the class
//PFArrayDBak. Objects of this type are partially filled arrays of doubles.
//This version allows the programmer to make a backup copy and restore
//to the last saved copy of the partially filled array.
#ifndef PFARRAYDBAK_H
#define PFARRAYDBAK_H
#include"pfarrayd.h"

class PFArrayDBak:public PFArrayD
{
  public:
    PFArrayDBak();
    PFArrayDBak(int capacityValue);
    PFArrayDBak(const PFArrayDBak& Object);

    void backup();
    //make a backup of the partially filled array.

    void restore();
    //Restores the partially filled array to the last saved version.
    //If baclup has ever been invoked, this empties the partially filled
    //array.

    PFArrayDBak& operator =(const PFArrayDBak& rightSide);
    ~PFArrayDBak();
  private:
    double *b;
    int usedB;
};

#endif
