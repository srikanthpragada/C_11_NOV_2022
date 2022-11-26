// Program to print whether a number is perfect
// Date : 26-NOV-2022

#include <stdio.h>
void main()
{
  int i, n, total = 1;

       printf("Enter number :");
       scanf("%d", &n);

       for(i = 2; i <= n/2; i ++)
       {
          if(n % i == 0)
              total += i;
       }

       if(total == n)
          printf("Perfect Number!");
       else
          printf("Not a Perfect Number");
}
