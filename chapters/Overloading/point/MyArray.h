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

  MyArray(const MyArray& original);// copy constructor
  MyArray& operator=(const MyArray& right);//copy assignment operator

  MyArray(MyArray&& original) noexcept; //move constructor
  MyArray& operator=(MyArray&& right) noexcept; // move assignment 

  ~MyArray(); //destructor

  size_t size() const noexcept{return m_size;};//return size
  std::string toString() const; //create string representation

  //equality operator
  bool operator ==(const MyArray& right) const noexcept;

  //subscript operator for non-const objects returns modifiable lvalue
  int& operator[](size_t index);

  //subscript operator for const objects return non-modifiable lvalue
  const int& operator[](size_t index) const;
  
  //convert MyArray to bool value: true if non-empty; false if empty
  explicit operator bool() const noexcept{return size() != 0;}

  //preincrement every elements, then return updated MyArray
  MyArray& operator++();

  //postincrement every element, and return copy of original MyArray
  MyArray operator++(int);

  //add value to every element, then return update MyArray
  MyArray& operator+=(int value);
  private:
  size_t m_size{0}; //pointer-base array size
  std::unique_ptr<int[]> m_ptr; //smart pointer to integer array 

};
std::ostream& operator <<(std::ostream& out, const MyArray& a);
