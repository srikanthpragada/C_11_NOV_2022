// Program to convert inches to cm
// Date : 16-NOV-2022

#include <stdio.h>
void main()
{
  float inches, cm;

      // input
      printf("Enter inches :");
      scanf("%f", &inches);

      // process
      cm = inches * 2.54;

      // output
      printf("%f inches =  %f CM", inches, cm);
}
