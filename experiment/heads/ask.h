#ifndef ASK_H
#define ASK_H
#include<string>
using std::string;

class Ask{

  private:
    int a;
    int b;
    string n;
  public:
  Ask(int = 29, int = 1, string = "n");
  int age();
  void quest();
  void timez();
};
#endif

