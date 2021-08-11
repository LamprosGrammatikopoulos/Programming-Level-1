#include <stdio.h>
int main(void)
{
   int **p1, **p2, *pt1 , *pt2 , a , b;
   printf("Dwste duo akeraious arithmous\n");
   scanf("%d %d",&a,&b);
   printf("\n");
   pt1=&a;
   pt2=&b;
   p1=&pt1;
   p2=&pt2;
   pt1=&b;
   pt2=&a;
   printf("%d\n%d\n", **p1 , **p2 );
   return 0;
}
