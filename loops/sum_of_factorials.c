// Program to print sum of factorials of digits
// Date : 28-NOV-2022

#include <stdio.h>
void main()
{
  int i, fact, d, n, sum = 0;

       printf("Enter number :");
       scanf("%d", &n);

       while( n > 0 )
       {
          d = n % 10; // take rightmost digit
          // calculate factorial for digit
          fact = 1;
          for(i = 2; i <= d; i ++)
               fact = fact * i;

          sum += fact;
          // remove rightmost digit
          n = n / 10;
       }

       printf("Sum of factorials of digits : %d", sum);
}
