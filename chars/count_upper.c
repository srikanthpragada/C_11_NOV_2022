// Program to take 10 char and count upper
// Date : 28-NOV-2022

#include <stdio.h>
void main()
{
 char ch;
 int i, count = 0;

       printf("Enter 10 chars :");
       for(i = 1; i <= 10; i ++)
       {
         ch = getche();
         if(isupper(ch))
             count ++;
       } // for

       printf("\nUpper Count = %d", count);
} // main

