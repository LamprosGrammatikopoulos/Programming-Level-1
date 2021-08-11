#include <stdio.h>
#define size 100
int main(void)
{
   int x[size],i,a=0,b;
   printf("Dwste akeraious arithmous\n");
   for(i=0; i<size; i=i+1)
      {
         a=b;
         scanf("%d",&b);
         if(b>a)
            {
               x[i]=b;
            }
         else 
            i=i-1;
      }

   return 0;
}
