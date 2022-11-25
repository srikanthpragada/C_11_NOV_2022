// Program to display common factors
// Date : 25-NOV-2022

#include <stdio.h>
void main()
{
  int i, n1 = 15, n2 = 20, smallest;

       smallest = n1 < n2 ? n1 : n2;

       for(i = 2; i <= smallest/2; i ++)
       {
          if(n1 % i == 0 && n2 % i == 0)
          {
            printf("%d ", i);
          }
       }
}
