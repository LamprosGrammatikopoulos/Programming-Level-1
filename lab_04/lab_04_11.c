#include <stdio.h>
int main(void)
{
   int a,x,y;
   for(a=0; a<=100; a=a+0)
      {
         y = x;
         scanf("%d",&x);
         a = a+1;
         if(y<x)
            {
               break;
            }  
      }
   printf("%d\n",a);
   return 0;
}
