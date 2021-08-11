#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define rows 3
#define cols 5
int main(void)
{
   int x[rows][cols],i,j,y[cols],a,min,b;
   srand(time(NULL));
   printf("\n");
   for(i=0;i<rows-1;i++)
      {
         for(j=0;j<cols;j++)
            {
               x[i][j]=rand()%20;
               printf("x[%d][%d]=%d\n",i,j,x[i][j]);
            }
       }
   printf("\n");  
   for(j=0;j<cols;j++)
      {
         x[rows-1][j]=50-x[0][j]-x[1][j];
      }
   for(i=0;i<rows;i++)                  
      {
         for(j=0;j<cols;j++)                   
            {                                       
               printf("%3d ",x[i][j]);
            }                                      
         printf("\n");
      }                                   
   printf("\n");  
   for(j=0;j<cols;j++)
      {
         min=x[0][j];
         for(i=0;i<rows;i++)
            {
               if(x[i][j]<min)
                  {
                     min=x[i][j];
                  }
            }
         y[j]=min;
      }
   printf("Monodiastatos pinakas me stoixeia tis elaxistes times ths kathe sthlhs tou tuxaiou dudiastatou pinaka : \n\n");     
   for(j=0;j<cols;j++)
      {
         printf("y[%d]=%d\n",j,y[j]);
      }
   printf("\n");
   return 0;
}
