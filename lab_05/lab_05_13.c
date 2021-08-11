#include <stdio.h>
#define size 5
int main(void)
{
   int x[size][size],i,j,a;
   a=size;
   
   // mia diplh for
   for(i=0;i<size;i++)
      {  
         for(j=0;j<size;j++)
            {
               if(i<j)
                  {
                     x[i][j]=2;
                  }

               if(i>j)
                  {
                     x[i][j]=4;
                  }

               if(i!=0 && i!=size-1)
                  {
                     if(j==0 || j==1)
                        {             
                           x[i][j]=5;
                        }    
                  }
               if(i!=0 && i!=size-1)
                  {
                     if(j==size-1 || j==size-2)
                        {             
                           x[i][j]=3;
                        }    
                  }

               if(i==j)
                  {
                     x[i][j]=1;
                  }
               
               x[i][size-i-1]=1; 
               
 
            }    
      }

   //printf
   for(i=0;i<size;i++)
      {  
         for(j=0;j<size;j++)
            {
               printf("%d",x[i][j]);
            } 
         printf("\n");   
      }

   return 0;
}
