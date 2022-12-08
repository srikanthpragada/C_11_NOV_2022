
void print(int * arr)
{
 int i;

   for(i = 0; i < 5; i ++)
     printf("%d ", arr[i]);
}

void print_array(int arr[], int len)
{
 int i;

   for(i = 0; i < len; i ++)
     printf("%d ", arr[i]);
}

void zeros(int arr[])
{
 int i;

   for(i = 0; i < 5; i ++)
        arr[i] = 0;
}

void main()
{
   int a[] = {1,10,20,40,50};
   int b[] = {100,200,300};

    print_array(a, 5);
    print_array(b, 3);

    //zeros(a);
    //print(a);

}
