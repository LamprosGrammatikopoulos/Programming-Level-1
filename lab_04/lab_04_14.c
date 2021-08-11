#include <stdio.h>
int main(void)
{
   int x,y,z,b,a,c,d;
   printf("Dwste enan akeraio arithmo\n");
   scanf("%d",&x);
   a=0;
   d=0;
   b=31;
   for(b=31; x!=0 && b > 0; b--)
   {
      y = x<<b;
      z = y>>b;
      c = z>>d;
      if(c==1)
      {
         a = a+1;
      }
      d+=1;
      printf("%d",d); 
   }
   printf("%d\n",a);

   return 0;
}
