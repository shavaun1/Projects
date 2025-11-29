#include<algorithm>
#include<format>
#include<initializer_list>
#include<iostream>
#include<memory>
#include<span>
#include<sstream>
#include<stdexcept>
#include<utility>
#include"MyArray.h"

using std::format; using std::make_unique; using std::cout; using std::initializer_list;
using std::copy; using std::begin; using std::end; using std::span; using std::exchange; using std::move;
//MyArray constructor to create a MyArray of size elements constructor 0

MyArray::MyArray(size_t size)
  :m_size{size},m_ptr{make_unique<int[]>(size)}
{
  cout<<"MyArray(size_t) constructor\n"; 
}

//MyArray constructor that accepts an initializer list
MyArray::MyArray(initializer_list<int> list)
  :m_size{list.size()}, m_ptr{make_unique<int[]>(list.size())}
{
  //copy list argument's elements into m_ptr's underlying int array
  //m_ptr.get() returns the int array's starting memory location
  copy(begin(list), end(list), m_ptr.get());
}

  //copy constructor: must receive a reference to a MyArray
  MyArray::MyArray(const MyArray& original)
    :m_size{original.size()}, m_ptr{make_unique<int[]>(original.size())}
  {
    cout<<"MyArray copy constructor\n";

    //copy original's elements into m_ptr's underlying int array
    const span<const int> source
    {
      original.m_ptr.get(), original.size()
    };
    copy(begin(source),end(source),m_ptr.get()); 
  }

//copy assigment operator: implemented with copy-and-swap idiom
 MyArray& MyArray::operator=(const MyArray& right)
{
  cout<<"MyArray copy assigment operator\n";
  MyArray temp{right}; //invoke copy constructor
  swap(*this,temp); //exchange contents of this object and temp
  return *this;
}

//move constructor: must receive an rvalue reference to MyArray
MyArray::MyArray(MyArray&& original) noexcept
:m_size{exchange(orginal.m_size,0)},
  m_ptr{move(original.m_ptr)} //move original.m_ptr into m_ptr 
{
  cout<<"MyArray move constructor\n";
}

//move assigment operator
MyArray& MyArray::operator=(MyArray&& right) noexcept
{
  cout<<"MyArray move assigment operator\n";

  if(this != &right)//avoid self-assigment
  {
      //move right's data into this MyArray
      m_size = exchange(right.m_size,0); //indicate right is empty
      m_ptr = move(right.m_ptr);
  }

  return *this; //enables x = y = z, for example
}

//destructor: This could be compiler-generated. We included it here so 
//we could output when each MyArray is destroyed.
MyArray::~MyArray()
{
  cout<<"MyArray destructor\n";
}
