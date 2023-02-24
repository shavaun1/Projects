#include <iostream>
#include"Node.h"

using namespace std;
using namespace linkedlistofclasses;

void headInsert(NodePtr& head, int theNumber)
{
  NodePtr tempPtr;
    //the constructor sets tempPtr->link to head and 
    //sets the data value to theNumber
    tempPtr = new Node(theNumber, head);
    head = tempPtr;
  
}

int main()
{
  NodePtr head, tmp;

  head = new Node(0,NULL);
  for(int i = 1; i < 5; i++)
  {
    headInsert(head, i);

  }
  //iterate through the list and display each value
  tmp = head;
  while(tmp != NULL)
  {
    cout << tmp->getData() <<endl;
    tmp = tmp->getLink();
  }

  //delete all nodes in the list before exiting
  //the program.
  tmp = head;
  while(tmp != NULL)
  {
    NodePtr nodesToDelete = tmp;
    tmp = tmp->getLink();
    delete nodesToDelete;
  }

  return 0;
}
