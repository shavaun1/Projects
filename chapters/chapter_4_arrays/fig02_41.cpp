//A const object must be initialized

int main()
{
  const int x; //Error: x must be initialized 

  x = 7;       //Error: cannot modify a const variable

  return 0;
}
