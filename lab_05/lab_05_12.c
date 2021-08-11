#include <stdio.h>
#define size 8
int main(void)
{
   int x[size][size],i,j,a;
   a=size;
   
   //-3
   for(i=0;i<size;i++) 
      {  
         for(j=0;j<size;j++)
            {
               x[i][j]=-3;
            }    
      }

   //3
   for(i=0;i<size-1;i++)
      {  
         for(j=size-2-i;j>=0;j--)
            {
               x[i][j]=3;
            }   
      } 

   //0
   for(i=0;i<size;i++)
      {  
         for(j=a-1;j>=0;j--)
            {
               x[i][j]=0;
               a=a-1;
               break;
            }    
      }

   //printf
   for(i=0;i<size;i++)
      {  
         for(j=0;j<size;j++)
            {
               printf("%d\n",x[i][j]);
            }    
      }

   return 0;
}
