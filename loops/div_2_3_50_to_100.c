// Program to numbers divisible by 2 or 3 in the range 50 to 100
// Date : 23-NOV-2022

#include <stdio.h>
void main()
{
  int n = 50;

      while(n <= 100)
      {
          if(n % 2 == 0 || n % 3 == 0)
               printf("%d ", n);

          n ++;
      }
}
