#include <stdio.h>
double power(double m, int n);
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
double power(double m, int n)
{
   if(n<0)
      {
         n=-n;
         return (1/(m*power(m,n-1)));
      }
   else if(n>0)
      {
         return (m*power(m,n-1));
      }
   else 
      {
         return 1;
      }
}
