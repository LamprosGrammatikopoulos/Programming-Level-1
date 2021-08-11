#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define rows 5
#define cols 5
int main(void)
{
   int x[rows][cols],i,j,c1=-999999999,c2=-999999999,c3=999999999;
   printf("\n\n"); 
   srand(time(NULL));
   for(i=0;i<rows;i++)
      {  
         for(j=0;j<cols;j++)
            {
               if(i==j)
                  {
                     x[i][j]=(1000 + rand()%1000);
                     if(c2<=c1)
                        {
                           c2=c1;
                        }
                     else if(c3>=c1)
                        {
                           c3=c1;
                        }
                     c1=x[i][j];
                  }
            }
      }
   printf("Megalutero stoixeio diagwniou : %d\n",c2);
   printf("Mikrotero stoixeio diagwniou : %d\n",c3);
   printf("\n\n");
   for(i=0;i<rows;i++)
      {  
         for(j=0;j<cols;j++)
            {
               if(i<j)
                  {
                     do
                        {
                           x[i][j]=(1000+rand()%1000);
                        }while(x[i][j]<c2);
                  }
               if(i>j)
                  {
                     do
                        {
                           x[i][j]=(1000+rand()%1000);
                        }while(x[i][j]>c3);
                  }  
            }    
      }
   for(i=0;i<rows;i++)
      {  
         for(j=0;j<cols;j++)
            {
               printf("%6d",x[i][j]);
            } 
         printf("\n");   
      }  
   printf("\n\n"); 
   return 0;
}
