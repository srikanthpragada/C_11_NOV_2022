// Program to create 5 X 5 array, fill it with numbers and display row total
// Date : 01-DEC-2022

#include <stdio.h>
void main()
{
 int a[5][5];
 int i,j, n, found = 0;

       srand(time(0));
       for(i = 0; i < 5; i ++)
       {
         for(j = 0; j < 5; j ++)
         {
           a[i][j] = rand() % 100;
           printf("%5d", a[i][j]);
         } // j loop
         printf("\n");
      }// i loop

      printf("Enter number : ");
      scanf("%d",&n);

      for(i = 0; i < 5 && !found; i ++)
      {
         for(j = 0; j < 5; j ++)
         {
           if(a[i][j] == n)
           {
               printf("Found at %d, %d", i, j);
               found = 1;
               break;
           }
         } // j loop
      }// i loop

      if(!found)
        printf("\nNot Found!");
} // main

