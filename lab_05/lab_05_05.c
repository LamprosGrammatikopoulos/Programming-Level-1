#include <stdio.h>
#define size (3+1)
int main(void)
{
   int x[size],i;
   printf("Dwste 100 akeraious arithmous\n");

   for(i=0; i<=size-1; i=i+1)
      {
         scanf("%d",&x[i]);
         x[i+1]=x[i];
         x[0]=x[size-1];
       }

   printf("\n");   

   for(i=0; i<=size-1; i=i+1)
      {
         printf("%d ",x[i]);       
      }

   printf("\n");

   return 0;
}
