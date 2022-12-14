// Take rollno and display details of the student

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
  int rollno, offset, count;

     fp = fopen(FILENAME ,"rb");
     if(fp == NULL)
     {
         printf("Sorry! Could not open [%s] file!!", FILENAME);
         exit(1);
     }

     printf("Enter rollno :");
     scanf("%d",&rollno);

     offset = (rollno - 1) * sizeof(struct student);

     fseek(fp, offset, SEEK_SET); // move file pointer to required location
     count = fread(&s, sizeof(struct student), 1, fp);

     if(count == 0)
          printf("Sorry! Rollno not found!");
     else
          printf("%-20s %d\n", s.name, s.marks);

     fclose(fp);

}
