#include <stdio.h>
double* lil(double *p1, double *p2);
int main(void)
{
   double a,b,*k;
   printf("Dwste duo pragmatikous arithmous\n");
   scanf("%lf %lf",&a,&b);
   k=lil(&a,&b);
   if(k!=NULL)
      printf("%f\n",*k);
   return 0;
}
double* lil(double *p1, double *p2)
{
   double x,y;
   if(*p1>*p2)
      {
         return p2;
      }
   else if(*p2>*p1)
      {
         return p1;
      }
   else
      {
         return NULL;
      }
}
