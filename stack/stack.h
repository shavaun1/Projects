#ifndef STACK_H
#define STACK_H

namespace stacksavitch
{
  struct StackFrame
  {
    char data;
    StackFrame *link;
  };

  typedef StackFrame* StackFramePtr;

  class Stack
  {
    class Stack
    {
      public:
        Stack();
        //Initializes the object to an empty stack.
        Stack(const Stack& aStock);
        //Copy constructor

        ~Stack();
        //Destory the stack and returns all the memory to the freestore.

        void push(char theSymbol);
        //Postconditional: theSymbol has been added to the stack.

        char pop();
        //Precondition: The stack is not empty.
        //Return the top symbol on the stack and remove that
        //top symbol from the stack.

        bool empty() const;
        //Return true if the stack is empty. Return dalse otherwise.
        
      private:
        StackFramePtr top;
    };
  }
}
#endif
