#include <stdio.h>
#define rows 3
#define cols 5
int main(void)
{
   int x[rows][cols],i,j,a,s=0;

   printf("Dwste akeraious arithmous gia enan pinaka 3x5\n");
   
   for(i=0;i<rows;i++)
      {  
         for(j=0;j<cols;j++)
            {
               do
                  {
                     if(i!=rows-1)
                        {
                           printf("x[%d][%d] = ",i,j);
                           scanf("%d",&a);
                           x[i][j]=a;
                           s=s+a; 
                        } 
                     if(i==rows-1)
                        {
                           x[i][j] = 50-s; 
                        }  
                  }while(a<0 || a>20);
            }
      }

   for(i=0;i<rows;i++)
      {  
         for(j=0;j<cols;j++)
            {
               printf("x[%d][%d] = %d\n",i,j,x[i][j]);
            }
      }



   return 0;
}
