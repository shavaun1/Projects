#include <format>
#include<iostream>
#include"hide/salariedemployee.h"
#include"hide/salariedcommissionemployee.h"

using std::cout; using std::format;

int main()
{
  //create base-class object
  salariedemployee salaried{"sue jones", 500.0};

  //create derive-class object
  salariedcommissionemployee salariedCommission
  {"bob lewis",300.0,5000.0,.04};

  //output objects salaried and salariedCommission
  cout<<format("{}:\n{}\n{}\n","DISPLAY BASE-CLASS AND DERIVED-CLASS OBJECT", salaried.toString(), salariedCommission.toString());

//natural: aim base-class pointer at base-class object

  salariedemployee* salariedPtr{&salaried};
  cout<<format("{}\n{}:\n{}\n","CALLING TOSTRING WITH BASE-CLASS POINTER TO","BASE-CLASS OBJECT INVOKES BASE-CLASS FUNCTIONALITY",
      salariedPtr->toString()); //base-class version

  //natural:aim derived-class pointer at derived-class object
  salariedcommissionemployee* salariedCommissionPtr{&salariedCommission};

  cout<<format("{}\n{}:\n{}\n",
      "CALLING TOSTRING WITH DERIVED-CLASS POINTER TO","DERIVED-CLASS OBJECT INVOKES DERIVED-CLASS FUNCTIONALITY",
      salariedCommissionPtr->toString()); //derived-class version

  //aim base-class pointer at derived-class object
  salariedPtr = &salariedCommission;
  cout<<format("{}\n{}:\n{}\n",
      "CALLING TOSTRING WITH BASE-CLASS POINTER TO DERIVED-CLASS","OBJECT INVOKES BASE-CLASS FUNCTIONALITY",
      salariedPtr->toString()); //baseclass version
}
