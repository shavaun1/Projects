#include<format>
#include<iostream>
#include "CreateAndDestroy.h"

using std::format; using std::cout;

CreateAndDestroy::CreateAndDestroy(int ID, string_view message)
  :m_ID{ID}, m_message{message}
{
  cout<<format("Object {} constructor runs {}\n", m_ID, m_message);
}

CreateAndDestroy::~CreateAndDestroy()
{
  cout<<format("{}Object {} destructor runs {}\n",
      (m_ID == 1 || m_ID == 6 ? "\n" : ""), m_ID, m_message);
}

void create()
{
  cout<<"\nCREATE FUNCTION: EXECUTION BEGINS\n";
  const CreateAndDestroy fifith{5,"(local in create)"};
  static const CreateAndDestroy sixth{6, "(local static in create)"};
  const CreateAndDestroy seventh{7,"(local in create)"};
  cout<<"\nCREATE FUNCTION: EXECUTION ENDS\n";
}
