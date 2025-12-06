#pragma 

//class Integer purposely throws an exception from its constructor

class Integer
{
  public:
    explicit Integer(int i);

  private:
    int value{};
};

class ResourceManager
{
  public:
  ResourceManager(int i);
  
  
  private:
  Integer myInteger;
};
