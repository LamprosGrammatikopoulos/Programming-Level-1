#include <stdio.h>
int main(void)
{
   double **p1, **p2, *p3, *p4, a, b;
   printf("Dwste 2 arithmous tupou double\n");
   scanf("%lf %lf",&a,&b);
   p3=&a;
   p4=&b;
   p1=&p3;
   p2=&p4;
   printf("%f\n", **p1 + **p2);

   return 0;
} 
