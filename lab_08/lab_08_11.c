#include <stdio.h>
void lel(double *p1, double *p2);
int main(void)
{
   double a,b;
   printf("Dwste duo pragmatikous arithmous\n");
   scanf("%lf %lf",&a,&b);
   lel(&a,&b);
   printf("\n%f\n%f\n",a,b);
   return 0;
}
void lel(double *p1, double *p2)
{
   double x;
   x=*p1;
   *p1=*p2;
   *p2=x;
}
