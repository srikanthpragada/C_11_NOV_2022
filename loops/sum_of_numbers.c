// Program to take numbers until 0 and display sum of numbers
// Date : 24-NOV-2022

#include <stdio.h>
void main()
{
  int n, total=0;

       while(1)
       {
         printf("Enter number :");
         scanf("%d", &n);

         if(n == 0)
            break;

         total += n;
       }

       printf("Total = %d", total);
}
