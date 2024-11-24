#include"LibraryStore.h"
#include<list>
#include<string>
#include<iostream>
using std::cout;using std::cin;
using std::endl; using std::list;
using std::iterator; using std::string;
//creating a two genres, with their subgenres.


Librarystore::Librarystore(string na, string auth)
{
  name = na;
  author = auth;
}

string Librarystore::autobiography_and_memoir()
{
  string n, aa;
  list<string>am;
  cout<<"What is the Book name?: ";
  getline(cin,n);
  am.push_back(n);
  cout<<"What is the name of the Author?: ";
  getline(cin,n);
  am.push_back(aa);
}

void Librarystore:
{

}

string Librarystore::genre()
{
  cout<<"Pick:(A) for fiction or (B) non-fiction"
   <<" to add your book(s) to genres: "<<endl;
  
  cout<<"Please pick from these genres: "<<endl;

}
