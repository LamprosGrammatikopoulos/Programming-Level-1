#include <stdio.h>
double lol(double a, double b, double c, double d);
int main(void)
{
   double a,b,c,d,l;
   printf("Dwste 4 pragmatikous arithmous\n");
   scanf("%lf",&a);
   scanf("%lf",&b);
   scanf("%lf",&c);
   scanf("%lf",&d);
   l=lol(a,b,c,d);
   printf("Megistos arithmos: %lf\n",l);
   return 0;
}
double lol(double a, double b, double c, double d)
{
   if(a>=b && a>=c && a>=d)
      {
         return a;
      }
   if(b>=a && b>=c && b>=d)
      {
         return b;
      }
   if(c>=a && c>=b && c>=d)
      {
         return c;
      }
   if(d>=a && d>=b && d>=c)
      {
         return d;
      } 
}
