#include <stdio.h>
void par(double *p1, double *p2, double x, double y);
int main(void)
{
   double a,b,w,v;
   double *p1, *p2;
   p1=&w;
   p2=&v;
   printf("Dwste duo arithmous tupou double gia tis plevres enos orthogwniou parallhlogrammou\n");
   scanf("%lf %lf",&a,&b);
   par(p1,p2,a,b);
   printf("Emvadon = %f\nPerimetros = %f\n",*p1,*p2);  
   return 0;
}
void par(double *p1, double *p2, double x, double y)
{
   *p1=(x*y);
   *p2=( (2*x)+(2*y) );
}

