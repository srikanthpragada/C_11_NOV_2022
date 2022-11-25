// Program to display largest of 5 numbers
// Date : 25-NOV-2022

#include <stdio.h>
void main()
{
  int i, n, largest = 0;

       for(i = 1; i <= 5; i ++)
       {
          printf("Enter number :");
          scanf("%d",&n);

          if(n > largest)
            largest = n;
       }

       printf("Largest = %d", largest);

}
