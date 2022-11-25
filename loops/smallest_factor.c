// Program to display smallest factor
// Date : 25-NOV-2022

#include <stdio.h>
void main()
{
  int i, n, found = 0;

       printf("Enter number :");
       scanf("%d", &n);

       for(i = 2; i <= n/2; i ++)
       {
          if(n % i == 0) // found a factor
          {
            printf("Smallest factor = %d", i);
            found = 1;
            break;
          }
       }

       if(found == 0)
         printf("Smallest factor = %d", n);
}
