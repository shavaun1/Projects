#include "fig06_05.h"
#include<iostream>
#include<string>
#include<format>

using std::cout; using std::format; using std::string;

void printStatistics(const string& s)
{
  cout<<format("capacity: {}\nmax size: {}\nsize: {}\nempty: {}",
      s.capacity(),s.max_size(),s.size(),s.empty()); 
}

