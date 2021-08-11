#include <stdio.h>
#define size 5
int main(void)
{
   int x[size],i,a=0,b=999999999;
   printf("Dwste akeraious arithmous.\n");
   for(i=0; i<size; i=i+1)
      {
         a=b;
         scanf("%d",&b);
         if(b<a)
            {
               x[i]=b;
            }
         else
            { 
               i=i-1;
            }
      }
   for(i=0; i<size; i=i+1)
      {
         printf("x[%d]=%d\n",i,x[i]);
      }

   return 0;
}
