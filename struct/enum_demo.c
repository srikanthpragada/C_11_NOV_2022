#include <stdio.h>

enum paymode  {
    CASH, UPI, CHEQUE
};

typedef enum paymode PAYMODE;

struct expense {
    char description[100];
    int amount;
    enum paymode mode;
};

void main()
{
   struct expense e1 = {"Dinner", 300, CASH};
   struct expense e2 = {"Book", 450, UPI};

   printf("%d", e1.amount);

}

