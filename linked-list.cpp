#include <cstddef>
#include <cstddef>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<cmath>
#include<string>
#include<fstream>
#include<cctype>
#include<climits>
#include <iostream>
#include <type_traits>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<vector>



using namespace std;

struct Node
{
  int data;
  Node *link;
};

typedef Node* NodePtr;

void headInsert(NodePtr& head, int theNumber);



void headInsert(NodePtr& head, int theNumber)
{
  NodePtr = tempPtr;
  tempPtr = new Node;

  tempPtr->data = theNumber;

  tempPtr->link = head;
  head = tempPtr;
}
