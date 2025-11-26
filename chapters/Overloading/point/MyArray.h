#pragma once
#include<initializer_list>
#include<iostream>
#include<memory>

using std::cout; using std::initializer_list; using std::istream;

class MyArray final
{
  //overloaded stream extraction operator
  friend istream& operator >>(istream& in, MyArray& a);

  //used by copy assignment operator to implement copy-and-swap idiom
  friend void swap(MyArray& a, MyArray& b) noexcept;

  public:
  explicit MyArray(size_t size);// contruct a MyArray of size elements

  //contruct a MyArray with a braced-initializer_list of ints
  explicit MyArray(initializer_list<int> list);
};
