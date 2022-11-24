// Program to count factors
// Date : 24-NOV-2022

#include <stdio.h>
void main()
{
  int i, n, count = 0;

       printf("Enter number :");
       scanf("%d", &n);

       for(i = 2; i <= n/2; i ++)
       {
          if(n % i == 0)
               count ++;
       }

       printf("Count = %d", count);
}
