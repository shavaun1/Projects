#include<format>
#include<iostream>
#include<string>

using std::cout; using std::string; using std::format;

int main()
{ 
  string string1{"The values in any left subtree"
"\nare less than the value in the"
"\nparent node and the values in"
"\nany right subtree are greater"
  "\nthan the value in the parent node"};

  cout<<format("Original string:\n{}\n\n", string1);

  string1.erase(62);
  cout<<format("string1 after erase:\n{}\n\n", string1);

  size_t position{string1.find(" ")};

  while(position != string::npos)
  {
    string1.replace(position,1, ".");
    position = string1.find(" ", position + 1);
  }

  cout<<format("After first replacement:\n{}\n\n", string1);

  position = string1.find(".");

  while(position != string::npos)
  {
    string1.replace(position, 2,"xxxxx;;yyy",5,2);
    position = string1.find(".", position + 2);
  }

  cout<<format("After second replacement:\n{}\n", string1);
}

