#include <stdio.h>
int main(void)
{
   double z,y,x,a,b;
   a=0;
   b=0;
   y=0;
   for(x=1; x<=100; x++)
   {      
      y=z;
      scanf("%lf",&z);
      if(z>=y && z!=b && y!=b && z>=a)
         {
            a=z;
         }
      if(z>=y && z!=a && y!=a && z>=b)
         {
            b=z;
         }

   }

   printf("%f\n%f\n",a,b);

   return 0;
}
