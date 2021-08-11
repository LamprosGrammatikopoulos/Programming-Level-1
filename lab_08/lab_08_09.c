#include <stdio.h>
double* par(double a, double b);
int main(void)
{
   double *l;
   double a,b;
   printf("Dwste duo parametrous tupou double\n");
   while(1)
      {
         scanf("%lf %lf",&a,&b);
         if(a<0 && b<0)
           {
              break;  
           }
         l=par(a,b);
         if(l==0)
            {
               printf("Oi duo arithmoi einai isoi\n");
            }
         else
            {
               printf("%f\n",*l);
            }
      }
   return 0;
}

double* par(double a, double b)
{
   double *p;
   if(a>b)
      {
         p=&a; 
      }
   else if(b>a)
      {
         p=&b; 
      }
   if(a==b)
      {
         p=NULL; 
      }
   return p;
}
