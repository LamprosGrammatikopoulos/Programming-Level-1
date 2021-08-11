#include <stdio.h>
#define size 10
double lal(double arr[], double A, double B);
int main(void)
{
   int i;
   double a,b,arr[size];
   do
      {
         printf("Dwste duo pragmatikous arithmous\n");
         scanf("%lf %lf",&a,&b);
      }while(a>b);
   printf("Dwste 10 vathmous\n");
   for(i=0;i<size;i++)
      {
         scanf("%lf",&arr[i]);          
      }
   printf("%f\n",lal(arr,a,b));
   return 0;
}
double lal(double arr[], double A, double B)
{
   int i;
   double s=0,x=0;
   for(i=0;i<size;i++)
      {
         if( arr[i]>=A && arr[i]<=B)
            {
               s=s+arr[i];
               x=x+1;
            }
      }
   if(x!=0)
      return s/x;
   else if(x==0)
      return 0;
}
