#include<iostream>
using namespace std;

void fillArray(int a[], int size, int& numberUsed);
//Prepostion:size is the declared size of the array a.
//Postcondition: numberUsed is the number of the values stored in a.
//a[0] through a[number - 1] have been filled with
//nonnegative integers read from the keyboard.

void sort(int a[], int numberUsed);
//Prepostion: numberUsed <= declared size of the array a.
//The array elements a[0] through a[numberUsed-1] have values.
//Postcondition: The values of a[0] through a[numberUsed-1] have
//been rearranged so that a[0] <= a[1] <=..<= a[numberUsed-1]

void swapValues(int& v1, int& v2);
//Interchanged the values of v1 and v2;

int indexOfSmallest(const int a[], int startINdex, int numberUsed);
//Postcondition: 0 <= startINdex < numberUsed. Reference array elements
//have values. Returns the index i such that a[i] is the smallest of the 
//values a[startINdex], a[startINdex+1]..,a[numberUsed-1].
