#include<iostream>
#include<iomanip>

using namespace std;
const int NUMBER_STUDENTS = 4, NUMBER_QUIZZES = 3;
void computeStAve(const int grade[][NUMBER_QUIZZES], double stAve[]);
//Precondition: Global constants NUMBER_STUDENTS and NUMBER_QUIZZES
//are the dimensions of the array grade. Each of the index variables
//grade[steNum-1, quizNum-1] contains the score for student stNUm on
//Postcondition: Each stAve[SetNum-1] contains the average for student 
//number stNum.

void computeQuizeAve(const int grade[][NUMBER_QUIZZES],double quizeAve[]);
//Precondtion: Global constants NUMBER_STUDENTS and NUMBER_QUIZZES
//are the dimensions of the array grade. Each of the indexed variables
//grade[stNum-1, quizNum-1] contains the score for student stNum in 
//quiz quizNum.
//Postcondition: Each quizeAve[quizNum-1] contains the average for 
//quiz numbered quizNum.

void display(const int grade[][NUMBER_QUIZZES], const double stAve[], const double quizeAve[]);
//Preconditon: Global constants NUMBER_STUDENTS and NUMBER_QUIZZES
//are the dimensions of the array grade. Each of the indexed variables
//grade[stNum-1, quizNum-1] contains the score for student stNum on 
//quiz quizNum. Each stAve[stNUm-1] contains the average for student
//stNum. Each quizeAve[quiz-1] contains the average for quiz
//numbered quizNum.:
//Postcondition: All the data in grade, stAve, and quizAve have been 
//output.

void fillArray(int a[], int size, int& numberUsed);


int main()
{
  int grade[NUMBER_STUDENTS][NUMBER_QUIZZES];
  double stAve[NUMBER_STUDENTS];
  double quizAve[NUMBER_QUIZZES];

  fillArray(grade, , numberUsed);
  computeStAve(grade, stAve);
  computeQuizeAve(grade, quizeAve);
  display(grade,stAve,quizAve);
  return 0;
}
