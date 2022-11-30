// Program to take an array of 10 int and fill with random numbers and display
// even numbers first and then odd numbers
// Date : 30-NOV-2022

#include <stdio.h>
void main()
{
 int a[10];
 int i;

       srand(time(0));
       printf("Even Numbers :");
       for(i = 0; i < 10; i ++)
       {
           a[i] = rand() % 100;
           if(a[i] % 2 == 0)
              printf("%5d", a[i]);
       }

       printf("\nOdd Numbers :");
       for(i = 0; i < 10; i ++)
       {
           if(a[i] % 2 != 0)
              printf("%5d", a[i]);
       }

} // main

