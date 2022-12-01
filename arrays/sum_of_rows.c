// Program to create 5 X 5 array, fill it with numbers and display row total
// Date : 01-DEC-2022

#include <stdio.h>
void main()
{
 int a[5][5];
 int i,j, total;

       srand(time(0));
       for(i = 0; i < 5; i ++)
       {
         total = 0;
         for(j = 0; j < 5; j ++)
         {
           a[i][j] = rand() % 100;
           printf("%5d", a[i][j]);
           total += a[i][j];
         } // j loop

         printf("%5d\n", total);
       }// i loop

} // main

