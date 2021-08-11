#include <stdio.h>
int main(void)
{
   int a,x,y,k;
   k=0;
   a=0;
   y=0;
   x=0;
   while(k<=100)
   {
      y = x;
      scanf("%d",&x);
      k = y+x;
      a = a+1;
   }
   if(k>100);
         {
            printf("%d\n",k);
         }
   printf("%d\n",a);

   return 0;
}
