// Program to take 3 numbers and display any two are equal
// Date : 19-NOV-2022

#include <stdio.h>
void main()
{
  int a,b,c;

      printf("Enter 3 numbers :");
      scanf("%d%d%d", &a,&b,&c);

      if(a == b || b == c || a == c)
         printf("YES");
      else
         printf("NO");

}
