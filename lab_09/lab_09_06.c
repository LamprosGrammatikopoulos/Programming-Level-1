#include <stdio.h>
double power(double a, int b);
int main(void)
{
   int exp;
   double base,result;
   printf("Enter base : \n");
   scanf("%lf",&base);
   printf("Enter exponent : \n");
   scanf("%d",&exp);
   result=power(base,exp);
   printf("%f power %d = %f\n",base,exp,result);
   return 0;
}
double power(double a, int b)
{
   if(b<0)
      {
         b=-b;
         return (1/(a*power(a,b-1)));
      }
   else if(b>0)
      {
         return (a*power(a,b-1));
      }
   else 
      {
         return 1;
      }
}

