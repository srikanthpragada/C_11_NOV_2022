// write names into names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  char  names[][20] = {"Scott","Gladwell","Martin","Larry","Bill"};
  int i;

     fp = fopen("names.txt","at");
     if(fp == NULL)
     {
         printf("Sorry! Could not create names.txt!");
         exit(1);
     }

     for(i = 0 ; i < 5 ; i ++)
        fprintf(fp,"%s\n",names[i]);

     fclose(fp);
}
