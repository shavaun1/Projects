#pragma once//

#include<string>
#include<string_view>

using std::string; using std::string_view;

class CreateAndDestroy
{
  public:
    CreateAndDestroy(int ID, string_view message); //constructor
  ~CreateAndDestroy(); //destructor
  private:
  int m_ID; //ID number for object
  string m_message;
};

void create();
