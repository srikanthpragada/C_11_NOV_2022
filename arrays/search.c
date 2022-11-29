// Search array
// Date : 29-NOV-2022

#include <stdio.h>
void main()
{
 int a[10];
 int i, n, found = 0;

       srand(time(0));
       for(i = 0; i < 10; i ++)
       {
           a[i] = rand() % 100;
           printf("%5d", a[i]);
       }

       printf("\nEnter a number :");
       scanf("%d", &n);

       for(i = 0; i < 10; i ++)
       {
           if(a[i] == n)
           {
               printf("\nFound at %d", i);
               found = 1;
               break;
           }
       }

       if(!found)
           printf("Not found!");

} // main

