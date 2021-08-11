#include <stdio.h>

#define rows 3
#define cols 3

int main(void)
{
   int x[rows][cols],i,j;
   
   for(i=0; i<rows; i=i+1)
      {
         for(j=0; j<cols; j=j+1)
            {
               printf("Dwste to stoixeio x[%d][%d]: \n",i,j);
               scanf("%d",&x[i][j]);
            } 
      }
   
   if(x[0][1]==0 && x[0][2]==0 && x[1][2]==0)
      {
         printf("O pinakas einai anw trigwnikos\n");
      }

   if(x[1][0]==0 && x[2][0]==0 && x[2][1]==0)
      {
         printf("O pinakas einai katw trigwnikos\n");
      }
   else
      {
         printf("O pinakas den einai anw trigwnikos oute katw trigwnikos oute diagwnios\n");
      }

   return 0;
}
