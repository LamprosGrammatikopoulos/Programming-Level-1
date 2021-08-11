#include <stdio.h>
#define rows 3
#define cols 5
int main(void)
{
   int x[rows][cols],i,j,a;
   
   printf("Dwste akeraious arithmous gia enan pinaka 3x5\n");
   
   for(i=0;i<rows;i++)
      {  
         for(j=0;j<cols;j++)
            {
               printf("x[%d][%d] = ",i,j);
               scanf("%d",&x[i][j]);
            }
      }

   for(j=0;j<cols;j++)
      {  
         for(i=0;i<rows;i=i)
            {
               a=x[j][i];
               i=i+1;
               if(x[j][i]==a)
                  {
                     printf("%d",x[i][j]);
                  }
            }
      }



   return 0;
}
