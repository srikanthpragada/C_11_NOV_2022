// Pass by address/reference

void increment(int * p)
{
    *p = *p + 1;
}

void main()
{
  int a = 10;

     scanf("%d", &a);

     increment(&a);  // pass by address
     printf("%d ", a);

}
