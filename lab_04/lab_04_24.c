#include <stdio.h>
#define size 5
int main(void)
{
   int x[size],y[size],i;
   printf("Dwste 5 akeraious\n");
   for(i=0; i<size; i++)
   {
      scanf("%d",&x[i]);
   }
   for(i=0; i<size; i++)
   {
      if(x[i]%2==0)
      {
         y[i]=x[i];
         printf("%d\n",y[i]);
      }
      else
      { 
         y[i]=666;
         printf("%d\n",y[i]); 
      }

   }  
   return 0;
}
