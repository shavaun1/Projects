#pragma once
#include <string>

using std::string;

class CompensationModel
{
  public:
    virtual ~CompensationModel() = default; //generated destructor
    virtual double earnings() const = 0; //pure virtual
    virtual string toString() const = 0; //pure virtual 
};
