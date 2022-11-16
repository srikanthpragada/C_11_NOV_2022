// Program to convert inches to cm
// Date : 16-NOV-2022

#include <stdio.h>
void main()
{
  int inches, cm;

      // input
      printf("Enter inches :");
      scanf("%d", &inches);

      // process
      cm = inches * 2.54;

      // output
      printf("%d inches =  %d CM", inches, cm);
}
