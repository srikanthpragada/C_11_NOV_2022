#include <stdio.h>

struct node
{
   char name[30];
   struct node * next;
};

void main()
{
 struct node * root = NULL, *current, *prev;
 char name[30];

     while(1)
     {
        printf("Enter name [end to stop] :");
        gets(name);

        if(stricmp(name,"end") == 0)
            break;

        // Allocate block for a node
        current = (struct node *) malloc(sizeof(struct node));
        current->next = NULL;
        strcpy(current->name, name);

        if (root == NULL)  // first node
            root = current;
        else  // make previous node point to current node
            prev->next = current;

        prev = current;  // make current node previous node at the end
     }

     // List names from linked list
     current = root;
     while(current != NULL)
     {
         puts(current->name);
         current = current -> next;
     }
}
