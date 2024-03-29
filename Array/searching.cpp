#include<iostream>
using namespace std;

const int DECLARED_SIZE = 20;
 
void fillArray(int a[], int size, int& numberUsed);
//Preconditioned:size is the deckared size of the array a.
//Postcondition: numberUsed is the number of values stored in a.
//a[0] through a[numberUsed-1] have been filled with
//nonnegative integers read from the keyboard.

int search(const int a[], int numberUsed, int taarget);
//Preconditioned: numberUsed is <= decleared size of
//Also, a[0] through a[numberUsed-1] have values.
//Returns the first index such that a[index] == target,
//provided there is such an index; otherwise, return -1.

int main()
{
  int arr[DECLARED_SIZE], listsize, target;

  fillArray(arr, DECLARED_SIZE, listsize);

  char ans;
  int result;
  do
  {
    cout<<"Enter a number search for: ";
    cin >> target;

    result = search(arr, listsize, target);
    if(result == -1)
      cout<<target << " is not on the list.\n";
    else
      cout<< target <<" is stored in array position "
        <<result << endl
        <<"(Remember: The first position is 0.)\n";
    cout<<"Search again?(y/n followed by Return): ";
    cin >> ans;
  }while((ans != 'n') &&(ans != 'N'));
  cout<<"End of program.\n";
  return 0;
}

void fillArray(int a[], int size, int& numberUsed)
{
  cout<<"Enter up to "<<size <<" nonnegative whole numbers.\n"
    <<"Mark the end of the list with a nonnegative number.\n";
  int next, index = 0;
  cin >> next;
  while((next >= 0) &&(index < size))
  {
    a[index] = next;
    index++;
    cin >> next;
  }
  numberUsed = index;
}

int search(const int a[], int numberUsed, int target)
{
  int index = 0;
  bool found = false;
  while((!found) && (index < numberUsed))
    if(target == a[index])
      found = true;
    else
      index++;

  if(found)
    return index;
  else
    return -1;
}
