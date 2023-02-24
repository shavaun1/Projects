namespace linkedlistofclasses
{
  class Node
  {
    public:
      Node();
      Node(int value, Node * next);
      //constructors to initialize a node
      
      int getData() const;
      //Retrieve value for this node

      Node *getLink() const;
      //Retrieve next Node in the list

      void setData(int value);
      //Use to modify the value stored in the list

      void setLink(Node *next);
      //Use to change the reference to the next node

    private:
      int data;
      Node *link;

  };
  typedef Node* NodePtr;
}
