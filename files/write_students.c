#include <stdio.h>
#define FILENAME  "students.dat"

struct student
{
    char name[30];
    int marks;
};

void main()
{
  FILE * fp;
  struct student s;
  int i;

     fp = fopen(FILENAME ,"wb");
     if(fp == NULL)
     {
         printf("Sorry! Could not open [%s] file!!", FILENAME);
         exit(1);
     }

     srand(time(0));
     for(i = 1; i <= 10; i ++)
     {
         sprintf(s.name,"Student%d",i);
         s.marks = rand() % 100;
         //printf("%s - %d\n", s.name, s.marks);
         fwrite(&s, sizeof(s), 1, fp);
     }

     fclose(fp);

}
