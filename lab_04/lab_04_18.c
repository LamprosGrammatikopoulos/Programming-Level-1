#include <stdio.h>
int main(void)
{
   int i,x;
   double p,a,b;
   
   do
   {
     printf("Dwste enan perito akeraio megalutero h iso tou tria\n"); 
     scanf("%d",&x);
   }while(x<3 ||  ((x-1)%2)!=0 );
   i=1;  
   a=1;
   b=3;
   p=0;
   for(b=3; b<=x; b=b+2)
   {
      p = p + ( i/(a*b) );
      a=a+2;
   }
   
   printf("Val = %f\n",p);

   return 0;
}
