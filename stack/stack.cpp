#include <iostream>
#include <cstddef>
#include "stack.h"
using namespace std;

namespace stacksavitch
{
  Stack::Stack(): top(NULL)
  {

  }

  Stack::Stack(const Stack& aStack)
  {
    if(aStack.top == NULL)
      top = NULL;
    else
    {
      StackFramePtr temp = aStack.top; //temp moves through the nodes from top to bottom of aStack.
      StackFramePtr end;

      end = new StackFrame;
      end->data = temp->data;
      top = end;
      //First node created and filled with with data.
      //New nodes are now added AFTER this first node.

      temp = temp->link;
      while(temp != NULL)
      {
        end->link = new StackFrame;
        end = end->link;
        end->data = temp->data;
        temp = temp->link;
      }
      end->link = NULL;
    }
  }

  Stack::~Stack()
  {
    char next;
    while(! empty())
      next = pop(); //pop calls delete.
  }

  //use cstddef:
  bool Stack::empty() const
  {
    return(top == NULL);
  }

  void Stack::push(char theSymbol)
  {
    StackFramePtr tempPtr;
    tempPtr = new StackFrame;
    tempPtr->data = theSymbol;
    tempPtr->link = top;
    top = tempPtr;
  }

  char Stack::pop()
  {
    if(empty())
    {
      cout<<"Error: popping an empty stack.\n";
      exit(1);
    }
      char result = top->data;

      StackFramePtr tempPtr;
      tempPtr = top;
      top = top->link;

      delete tempPtr;

      return result;
    
  }


}


