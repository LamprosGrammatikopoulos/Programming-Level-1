#include <stdio.h>
int main(void)
{
   double x;
   printf("Dwse kubika metra katanalwshs nerou\n");       
   scanf("%lf",&x);
   if(x<=30)
   x = (x*0.6) + 10;
   else if(x>30 && x<=50)
   x = ((30*0.6)+((x-30)*0.8)+10);
   else if(x>50 && x<=60)
   x = ((30*0.6)+((20)*0.8)+((x-50)*1)+10);
   else if(x>60)
   x = ((30*0.6)+((20)*0.8)+((10)*1)+((x-60)*1.2)+10);
   printf("Teliko poso logariasmou : %f\n",x);

   return 0;
}
