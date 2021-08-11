#include <stdio.h>
#define rows 5
#define cols 5
int main(void)
{
   int a[rows][cols],i,j,as=0,maxas=0,ag=0,maxag=0;
   printf("Dwste akeraious arithmous gia enan 5x5 pinaka\n");
   for(i=0;i<rows;i++)
      {  
         for(j=0;j<cols;j++)
            {
               scanf("%d",*(a+i)+j);       
            }     
      }
   for(i=0;i<rows;i++)
      {  
         ag = 0;
         for(j=0;j<cols;j++)
            {
               ag = ag + *(*(a+i)+j);       
            }
         if(ag>=maxag)
            {
               maxag = ag;
            }     
      }
   for(j=0;j<rows;j++)
      { 
         as = 0; 
         for(i=0;i<cols;i++)
            {
               as = as + *(*(a+j)+i);       
            }
         if(as>=maxas)
            {
               maxas = as;
            }          
      }

   printf("Megalutero athroisma sthlhs : %d\nMegalutero athroisma grammhs : %d\n",maxas,maxag);

   return 0;
}
