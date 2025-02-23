//Find average program with sentinel-controlled repetition

#include<iostream>
#include<iomanip>
using std::cout; using std::cin; using std::endl; using std::setprecision; using std::setiosflags;
using std::ios;

int main()
{
  int total{0}, gradeCounter{0}, grade; 
  float average;


  cout<<"Enter grade, -1 to end: ";
  cin >> grade;

  while(grade != -1){
    total = total + grade;
    gradeCounter = gradeCounter + 1;
      cout<<"Enter grade, -1 to end: ";
    cin >> grade;
  }

  if(gradeCounter != 0){
    average = static_cast<float>(total) / gradeCounter;
    cout<<"Class average is "<<setprecision(2)
      <<setiosflags(ios::fixed | ios::showpoint)
      <<average<<endl;
  }
  else
    cout<<"No grades were entered"<<endl;
  return 0;

}
