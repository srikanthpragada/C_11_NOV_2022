// write names into names.txt by taking names from user

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
  FILE * fp;
  char  name[30];

     fp = fopen("names.txt","wt");
     if(fp == NULL)
     {
         printf("Sorry! Could not create names.txt!");
         exit(1);
     }

     while(1)
     {
        printf("Enter name [end to stop] :");
        gets(name);

        if (stricmp(name, "end") == 0)
            break;

        fprintf(fp, "%s\n",name);
     }

     fclose(fp);
}
