// Program to take marks and display result
// Date : 18-NOV-2022

#include <stdio.h>
void main()
{
  int marks;

      printf("Enter marks :");
      scanf("%d", &marks);

      if(marks >= 50)
         printf("Passed");
      else
         printf("Failed");
}
