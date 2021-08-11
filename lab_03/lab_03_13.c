#include <stdio.h>
int main(void)
{
   double x;
   printf("Dwse mia pragmatikh metablhth\n");
   scanf("%lf",&x);
   if(x<-5)
      {
         printf("8\n");
      }
   else if(x>=-5 && x<3 && x!=0 )
      {
         printf("%f\n",1/x);
      }
   else if(x>=3 && x<12)
      {
         printf("%f\n",(x*x)-4);
      }
   else if(x>=12)
      {
         printf("%f\n",6/((x-14)*(x-14)));
      }

   return  0;
}
