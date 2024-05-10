#ifndef AREA_H
#define AREA_H

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

#endif

