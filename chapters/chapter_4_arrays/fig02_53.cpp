#include"header/fig02_53.h"
#include<iostream>
#include<iomanip>

using std::cout; using std::endl; using std::setw; using std::ios;
using std::setiosflags; using std::setprecision; using std::showpoint; using std::fixed;

int main()
{
  int studentGrades[students][exams] = 
    { { 77, 68, 86, 73 },
{ 96, 87, 89, 78 },
{ 70, 90, 86, 81 } };
  
   cout<<"The array is:\n";
   printArray(studentGrades, students, exams);
   cout<<"\n\nLowest grade: "
   <<minimum(studentGrades,students,exams)
  <<"\nHighest grade: "
  <<maximum(studentGrades, students, exams)<<'\n';

  for(int person = 0; person <  students; person++)
  cout<<"The average grade  for studnet "<< person << " is "
  <<setiosflags(ios::fixed | ios::showpoint)
  <<setprecision(2)
  <<average(studentGrades[person], exams)<< endl;

  return 0;
  
}
