#include"fig02_53.h"
#include<iostream>
#include<iomanip>

using std::setiosflags; using std::ios; using std::setw; using std::cout; using std::left;

int minimum(int grades[][exams], int pupils, int tests)
{
  int lowGrade = 100;

  for(int i = 0; i < pupils; i++)
    for(int j = 0; j < tests; j++)
      if(grades[i][j] < lowGrade)
        lowGrade = grades[i][j];

  return lowGrade;
}

int maximum(int grades[][exams], int pupils, int test)
{
  int highGrades = 0;

  for(int i = 0; i < pupils; i++)
    for(int j =0; j < test; j++)
      if(grades[i][j] > highGrades)
        highGrades = grades[i][j];

  return highGrades;
}

float average(int setofGrades[], int test)
{
  int total = 0;

  for(int i = 0; i < test; i++)
    total += setofGrades[i];

  return(float)total/test;
}

void printArray(int grades[][exams], int pupils, int test)
{
  cout<<"                    [0] [1] [2] [3]";
  
  for(int i = 0; i < pupils; i++){
    cout<<"\nstudentGrades["<< i <<"]";

    for(int j = 0; j < test; j++)
      cout<<setiosflags(ios::left)<<setw(5)
        <<grades[i][j];
  }
}
