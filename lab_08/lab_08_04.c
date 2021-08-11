#include <stdio.h>
int factorial(int x);
int main(void)
{
   int a,b,x;
   do
      {
         printf("Dwse duo akeraious arithmous\n");
         scanf("%d %d",&a,&b);
      }while(a>=b);
   for(x=a;x<=b;x++)
      {
         printf("The factorial of %d is %d\n",x,factorial(x));
      }
   return 0;
}

int factorial(int x)
{
   int i;
   double fact=1;
   for(i=1; i<=x; i=i+1)      
      {
         fact=fact*i;
      }
   return fact;
}
