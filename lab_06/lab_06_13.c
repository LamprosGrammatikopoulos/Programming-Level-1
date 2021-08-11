#include <stdio.h>
#define size 5
int main(void)
{
   int x[size], i, j, *p;
 
   printf("Dwste 100 akeraious arithmous gia enan pinaka\n"); 

   p=&x[1];

   for(i=0;i<size;i=i+1)
      {  
         printf("x[%d] = ",i);
         scanf("%d",&x[i]);
         for(j=0;j<size;j=j+1)
            {  
               if( *p==x[i] )
                  {
                     x[j]=-99;
                  }
               p=&x[j+1];
            }
      }

   printf("\n");

   for(i=0;i<size;i++)
      {
         printf("x[%d] = %d\n",i,x[i]);
      }

   return 0;
}
