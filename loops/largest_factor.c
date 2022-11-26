// Program to display largest factor
// Date : 25-NOV-2022

#include <stdio.h>
void main()
{
  int i, n;

       printf("Enter number :");
       scanf("%d", &n);

       for(i = n/2; i >= 1;  i --)
       {
          if(n % i == 0) // found a factor
          {
            printf("Largest factor = %d", i);
            break;
          }
       }

}
