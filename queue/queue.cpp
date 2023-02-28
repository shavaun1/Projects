#include <iostream>
#include<cstdlib>
#include<cstddef>
#include  "queue.h"

using namespace std;

namespace queuesavitch
{
  Queue::Queue():front(NULL), back(NULL)
  {

  }

  Queue::Queue(const Queue& aQueue)
  {
    if(aQueue.empty())
      front = back = NULL;
    else
    {
      QueueNodePtr tempPtrOld = aQueue.front;
      QueueNodePtr temPtrNew;
      back = new QueueNode;
      back->data = tempPtrOld->data;
      back->link = NULL;
      front = back;
      tempPtrOld = tempPtrOld->link;
      while(tempPtrOld != NULL)
      {
        temPtrNew = new QueueNode;
        temPtrNew->data = tempPtrOld->data;
        temPtrNew->link = NULL;
        back->link = temPtrNew;
        back = temPtrNew;
        tempPtrOld = tempPtrOld->link;
      }
    }
  }

  Queue::~Queue()
  {
    char next;
    while(!empty())
      next = remove();
  }

  bool Queue::empty() const
  {
    return(back == NULL);
  }

  void Queue::add(char item)
  {
    if(empty())
    {
      front = new QueueNode;
      front->data = item;
      front->link = NULL;
      back = front;
    }
    else
    {
      QueueNodePtr temPtr;
      temPtr = new QueueNode;
      temPtr->data = item;
      temPtr->link = temPtr;
      back = temPtr;
    }
  }

  char Queue::remove()
  {
    if(empty())
    {
      cout<<"Error: Removing an item from an empty queue.\n";
      exit(1);
    }

    char result = front->data;

    QueueNodePtr discard;
    discard = front;
    front = front->link;

    if(front == NULL)
      back = NULL;

    delete discard;
    return result;
  }
}
