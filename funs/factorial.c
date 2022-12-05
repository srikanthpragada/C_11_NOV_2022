// Program to create a function to return factorial of a number
// Date : 05-DEC-2022

#include <stdio.h>

int factorial(int n)
{
  int i, fact = 1;

     for(i = 2; i <= n; i ++)
         fact = fact * i;

     return fact;
}

void main()
{
 int n, f;

      for(n = 1; n <= 10; n ++)
      {
          f = factorial(n);
          printf("%5d  %10d\n", n, f);
      }
} // main



