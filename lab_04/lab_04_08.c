#include <stdio.h>
int main(void)
{
   int x,y,z,w,l;
   for(x=111; (x>=111 && x<=999) ; x++ )
   {
      y=x/100;
      w=x/10;
      l=w-y*10;
      z=x-(y*100+(l*10));
      (y==4 || z==6)?:printf("%d\n",x);       
   }

   return 0;
}
