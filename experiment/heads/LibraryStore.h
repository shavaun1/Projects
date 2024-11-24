#ifndef LIBRARYSTORE_H
#define LIBRARYSTORE_H
#include<string>
#include"non_fiction.h"
#include"fiction.h"
using std::string;

class Librarystore:public fiction, public non_fiction {
  private:
    string name;
    string author;


  public:
    Librarystore(string = "n", string = "aut");
    string genre();
    string getname();
    string getauthor();
    string autobiography_and_memoir();
    string biography(string, string);
    string essays(string, string);
    string non_fiction_novel(string, string);
    string self_help(string, string);

};



#endif 
