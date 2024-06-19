#ifndef CARTON_H
#define CARTON_H
#include<string>
#include<string_view>
#include"Box.h"

class Carton : public Box
{
  private:
    std::string material;

  public:
    explicit Carton(std::string_view mat ="Cardboard"):material{mat}{}//Constructor
};

#endif

