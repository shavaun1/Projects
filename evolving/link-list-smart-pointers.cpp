#include<iostream>
#include<memory>
using std::cout;
using std::endl;
using std::shared_ptr;

class Node
{
  int num;
  shared_ptr<Node> next;
  public:
  Node();
  ~Node();
  Node(int num, shared_ptr<Node> nextPtr);
  int getNum();
  shared_ptr<Node> getNext();
  void setNext(shared_ptr<Node> nextPtr);
};
Node::Node() :num(0), next(nullptr)
{}

Node::~Node()
{
  cout <<"Deleting "<< num << endl;
}

Node::Node(int numVal, shared_ptr<Node> nextPtr): num(numVal), next(nextPtr)
{}

int Node::getNum()
{
  return num;
}

shared_ptr<Node>Node::getNext()
{
  return next;
}

void Node::setNext(shared_ptr<Node> nextPtr)
{
  next = nextPtr;
}

void listTest()
{
  shared_ptr<Node> root(new Node(10, nullptr));
  shared_ptr<Node> next1(new Node(20, nullptr));
  shared_ptr<Node> next2;
  
  next2.reset(new Node(30, nullptr));
  root->setNext(next1);
  next1->setNext(next2);

  shared_ptr<Node> temp;
  temp = root;
  while(temp != nullptr)
  {
    cout << temp->getNum() << endl;
    temp = temp->getNext();
  }
}

int main()
{
  listTest();
  cout << "Exiting program."<< endl;
}
