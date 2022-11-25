// Program to display whether a number is prime
// Date : 24-NOV-2022

#include <stdio.h>
void main()
{
  int i, n, prime = 1;

       printf("Enter number :");
       scanf("%d", &n);

       for(i = 2; i <= n/2; i ++)
       {
          if(n % i == 0) // found a factor
          {
            prime = 0;
            break;
          }
       }

       if(prime)
          printf("Prime Number");
       else
          printf("Not a prime number as we found %d as factor", i);
}
