//Find
#include<iostream>
using std::cout; using std::endl; using std::cin;
int main()
{
  int total, gradeCounter, grade, average;

  total = 0;
  gradeCounter = 1;

  while( gradeCounter <= 10 ){
    cout<<"Enter grade: ";
    cin >> grade;
    total = total + grade;
    gradeCounter = gradeCounter + 1;
  }

  average = total / 10;
  cout<<"class average is "<< average << endl;

  return 0;
}