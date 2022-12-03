// Program to print largest of given names
// Date : 03-DEC-2022

#include <stdio.h>
void main()
{
 char name[20], largest[20];
 int i;

       strcpy(largest,"");
       for(i = 1; i <= 5; i ++)
       {
           printf("Enter name :");
           gets(name);

           if( strcmp(name, largest) > 0)
                strcpy(largest, name);
       }

       printf("Largest name = %s", largest);

} // main


