#include <stdio.h>
int main(void)
{
   int t,a,x;
   a = 0;
   for(x=1; x<=10 && x>0; x++ )
   {
      scanf("%d",&t);
      if(t<=0)
      {
         scanf("%d",&t);
         a = a+2;
         x = x-1;
      }
   }

   if(a!=0)
   { 
      printf("%d\n",a);
   }  
 
   return 0;
}
