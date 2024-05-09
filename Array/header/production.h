#ifndef AREA_H
#define AREA_H

void inputData(int a[], int lastPlantNumber);
//Precondition: lastPlantNumber is the declared size of the array a.
//Postcondition: for plantnumber = 1 through lastPlantNumber:
//a[plantnumber-1] equals the total production for plant number
//plantnumber.

void scale(int a[], int size);
//Precondition: a[0] through a[size-1] each has a nonnegative value.
//Postcondition: a[i] has been changed to the number of 1000s (rounded to
//an integer) that were originally in a[i], for all i such that 0 <= i
//<= size-1.

void graph(const int asteriskCount[], int lastPlantNumber);
//Precondition: a[0] through a[lastPlantNumber-1] have nonnegative values.
//Postcondition: A bar graph has been dispalyed saying that plant
//number N has produced a[N-1] 1000s of units, for each N such that
//1 <= N <= lastPlantNumber

void getTotal(int& sum);
//Read nonnegative integers from the keyboard and
//places their total in sum.

int rounded(double number);
//Precondition: number >= 0
//Returns number rounded to the nearest integer.

void printAsterisks(int n);
//Print n asterisks to the screen.

#endif

