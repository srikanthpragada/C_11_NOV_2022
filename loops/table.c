// Program to table
// Date : 23-NOV-2022

#include <stdio.h>
void main()
{
  int i, n;

       printf("Enter number :");
       scanf("%d", &n);

       for(i = 1; i <= 20; i ++)
       {
         printf("%2d * %2d = %4d\n",n, i, n * i);
       }
}
