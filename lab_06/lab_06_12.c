#include <stdio.h>
int main(void)
{
   double arr[]={1.3,-4.1,-3.8,9.4,2.5}, temp, *p1=arr, *p2=arr+4;

   p1 = arr;
   p2 = (arr + 4); 

   for(p1=arr; p1<arr+2; p1++)
      {
         temp = *p1;
         *p1 = *p2;
         *p2 = temp;
         p2--;               
      }

   for(p1=arr; p1<arr+5; p1++)
      {
         printf("%lf\n", *p1 );
      }

   return 0;
}
