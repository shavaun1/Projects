#ifndef AREA_H
#define AREA_H

void fillArray(int a[], int size, int& numberUsed);
//Precondition:: size is the decleared size of the array a.
//Postcondition: numberUsed is the number of values stored in a.
//a[0] through a[numbered-1] have been filled with
//nonnegative integers read from the keyboard.

double computeAVerage(const int[], int numberUsed);
//Precondition: a[0] through a[numberUsed-1] have values;
//numberUsed > 0.
//Returns the average of numbers a[0] through a[numberUsed-1].

void showDifference(const int[], int numberUsed);
//Precondition: The first numberUsed indexed variables of a have values.
//Postcondition:Gives screen output showing how much each of the first 
//numberUsed elements of the array a differs from their average.

#endif

