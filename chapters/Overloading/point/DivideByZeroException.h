#include<stdexcept> //stdexcept header contains runtime_error
using std::runtime_error;

//DividebyZeroException objects should be thrown
//by functions upon detecting division-by-zero

class DividebyZeroException: public runtime_error
{
  public:
  //constructor specifies default error message
  DividebyZeroException()
    :runtime_error{"attempted to divide by zero"}{}
};
