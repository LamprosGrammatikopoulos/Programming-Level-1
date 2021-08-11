#include <stdio.h>
#define size 5
int main(void)
{
   int x[size],i,a=0,b,c=0;
   printf("Dwste 100 akeraious arithmous\n");
   for(i=0; i<size; i=i+1)
      {
         a=x[i];
         scanf("%d",&x[i]);         
         for(b=0; b<=i; b=b+1)
            {
               if(x[b]==a)
                  {
                     c=c+1;
                  }
            }
      }

   printf("\nEpanalhpseis : %d\n",c);

   return 0;
}

