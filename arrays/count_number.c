// Program to take an array of 10 int and fill with random numbers and display
// even numbers first and then odd numbers
// Date : 30-NOV-2022

#include <stdio.h>
void main()
{
 int a[10] = {10,20,10,30,40,50,40,30,15,55};
 int i, n, count = 0;

       for(i = 0; i < 10; i ++)
       {
           printf("%5d", a[i]);
       }

       printf("\nEnter Number :");
       scanf("%d",&n);

       for(i = 0; i < 10; i ++)
       {
           if(a[i] == n)
             count ++;
       }

       printf("\nCount = %d", count);
} // main

