#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define rows 5
#define cols 4
int main(void)
{
   int x[rows][cols],i,j,a=0;
   srand(time(NULL));
   for(i=0;i<rows;i++)
      {
         for(j=0;j<cols-1;j++)
            {
               x[i][j]=-9+rand()%99;
            }
       }
   printf("\n");  
   for(i=0;i<rows;i++)
      {
         for(j=0;j<(cols-1);j++)
            {
               a+=x[i][j];
            }
         x[i][cols-1]=100-a;
      }
   for(i=0;i<rows;i++)                  
      {
         for(j=0;j<cols;j++)                   
            {                                       
               printf("%5d ",x[i][j]);
             }                                     
         printf("    <----- Athroisma stoixeiwn grammhs = 100.\n");
      }                                   
   printf("\n");
   return 0;
}
