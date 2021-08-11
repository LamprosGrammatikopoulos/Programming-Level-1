#include <stdio.h>
int main(void)
{
   int a,b,x,y;
   printf("Dwse duo akeraious arithmous\n");
   scanf("%d%d",&a,&b);
   x = a;
   y = b;
   x = (x^y)^x;
   printf("%d\n",x);
   x = a;
   y = b;
   y = (x^y)^y;
   printf("%d\n",y);   
   
   return 0;
   
}
