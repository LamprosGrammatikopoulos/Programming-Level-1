#include <stdio.h>
int f(int x);
int g(int x);
int main(void)
{
   int x,a;
   printf("Dwste enan akeraio arithmo\n");
   scanf("%d",&x);
   a=f(g(x));
   printf("%d\n",a);
   return 0;
}
int f(int x)
{
   if(x>0)
      {
         return (x+2);
      }
   else if(x<=0)
      {
         return ((-3*x)+7);
      }
}
int g(int x)
{
   if(x>0)
      {
         return ((x*x)+2);
      }
   else if(x<=0)
      {
         return ((7*x)-5);
      }
}
