#include <stdio.h>
#include <conio.h>
#include <math.h>

#define SIZE 50
#define TITLE "Srikanth Technologies"

// Macro
#define iseven(n)   n % 2 == 0

void main()
{
 int a[SIZE];
 int i, v = 10;

       for(i = 0; i < SIZE; i ++)
          a[i] = 0;

       for(i = 0; i < SIZE; i ++)
          printf("%d ", a[i]);

       if(iseven(v))     // v % 2 == 0
           printf("Even");

       printf(TITLE);
}

