#include <stdio.h>
#define size 3
int main(void)
{
   int x[size][size],i,j;
   printf("Dwste akeraious arithmous gia enan pinaka 3x3\n");
   for(i=0;i<size;i++)
      {  
         for(j=0;j<size;j++)
            {
               printf("x[%d][%d] = ",i,j);
               scanf("%d",&x[i][j]);
            }
      }

   printf("\n");

   for(j=0;j<size;j++)
      {  
         for(i=0;i<size;i++)
            {
               printf("x[%d][%d] = %d ",j,i,x[i][j]);
            } 
         printf("\n");
      }
         
   printf("\n");

   return 0;
}
