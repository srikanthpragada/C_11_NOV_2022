// Program to print factors
// Date : 23-NOV-2022

#include <stdio.h>
void main()
{
  int i, n;

       printf("Enter number :");
       scanf("%d", &n);

       for(i = 2; i <= n/2; i ++)
       {
          if(n % i == 0)
              printf("%d ", i);
       }
}
