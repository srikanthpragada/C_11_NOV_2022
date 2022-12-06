#include <stdio.h>

// function declaration or prototype declaration
float average(int, int);

void main()
{
 float avg;

    avg = average(10, 15);
    printf("%f", avg);
}

// function definition
float average(int n1, int n2)
{
    return (n1 + n2) / 2.0;
}
