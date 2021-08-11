#include <stdio.h>
#define rows 5
#define cols 5
#define size 5
int main(void)
{
   int a[rows][cols],i,j,c=size,sumk=0,sumd=0;
   printf("Dwste akeraious arithmous gia enan 5x5 pinaka\n");
   for(i=0;i<rows;i++)
      {  
         for(j=0;j<cols;j++)
            {
               scanf("%d",*(a+i)+j);
               if(i==j)
                  {
                     sumk = sumk + *(*(a+i)+j);
                  } 
               if(j==cols-c && i==rows-c)
                  {
                     sumd = sumd + *(*(a+i)+j);
                     c = c-1; 
                  }        
            }     
      }

   printf("Athroisma kurias diagwniou : %d\nAthroisma deuterevousas diagwniou :%d\n",sumk,sumd);

   return 0;
}
