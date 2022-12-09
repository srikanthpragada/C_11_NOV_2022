struct time
{
  int h,m,s;
};

typedef struct time TIME;
typedef int NUMBER;


int totalseconds(struct time t)
{
    return t.h * 3600 + t.m * 60 + t.s;
}
// 0  - t1 == t2
// >0 - t1 > t2
// <0 - t1 < t2
int compare(struct time t1, struct time t2)
{
   int seconds1 = totalseconds(t1);
   int seconds2 = totalseconds(t2);

   return seconds1 - seconds2;
}

struct time max(struct time t1, struct time t2)
{
   if(compare(t1, t2) > 0)
       return t1;
   else
       return t2;
}

void main()
{
 TIME t;
 struct time times[5];


    printf("Enter hh mm ss : ");
    scanf("%d%d%d",&t.h,&t.m,&t.s);

    printf("%02d:%02d:%02d", t.h, t.m, t.s);

    printf("\n%d", totalseconds(t));
}
