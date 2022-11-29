// Program to take an array of 10 int and fill with random numbers
// Date : 29-NOV-2022

#include <stdio.h>
void main()
{
 int a[10];
 int i;

       srand(time(0));
       for(i = 0; i < 10; i ++)
       {
           a[i] = rand() % 100;
           printf("%d \n", a[i]);
       }



} // main

