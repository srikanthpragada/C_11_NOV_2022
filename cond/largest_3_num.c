// Program to take 3 numbers and display largest
// Date : 19-NOV-2022

#include <stdio.h>
void main()
{
  int a,b,c;

      printf("Enter 3 numbers :");
      scanf("%d%d%d", &a,&b,&c);

      if(a > b && a > c)
         printf("%d", a);
      else
        if(b > c)
           printf("%d", b);
        else
           printf("%d", c);


}
