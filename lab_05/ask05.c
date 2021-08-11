#include <stdio.h>
#define size 4
int main(void) 
{
   int i, a, b;
   int x[size], y[size]={0};
   printf("Dwste 100 akeraious arithmous\n");
   for(i=0; i<size; i++)
      {
         scanf("%d", &a);
	 x[i] = a;
      }
	
      b = x[size-1];
      y[0] = b;
	
   for(i=0; i<size-1; i++)
      {
         y[i+1] = x[i];
	 printf("%d ",y[i]);
      }
   printf("\n");
   return 0;

}
