#include <stdio.h>
int main(void)
{
   int x,a,b,po,to1,to2;
   double y;
   printf("Dwste thetiko akeraio\n");
   do
   {
      scanf("%d",&x);
   }while(x<=0 || x%2==0);
   
   a=5; 
   b=3;
   po=0;
   for(x=x; y<=x ; po=po+1 )
   {
      to1=a;
      to2=b;
      a=5*a;
      b=3*b;
      y=a/b;
   }
   
   printf("%d/%d\n",to1,to2);
   printf("%d\n",po);

   return 0;
}
