#include <stdio.h>
#define size 5
int main(void)
{
   int x[size][size],y[size][size],i,j,b;
   
   printf("Dwste akeraious arithmous gia enan pinaka 5x5\n");
   
   for(i=0; i<size; i=i+1)
      {         
         for(j=0; j<size; j=j+1)
            {
               printf("x[%d][%d] = ",i,j);
               scanf("%d",&x[i][j]);
            }
      }

   do
      {
         printf("Dwste enan akeraio arithmo o opoios na periexetai sto [1,5]\n"); 
         scanf("%d",&b);
      }while(b<1 || b>5);
   
   if(b==1)
      b=0;
   else if(b==2)
      b=1;
   else if(b==3)
      b=2;
   else if(b==4)
      b=3;
   else if(b==5)
      b=4;

   for(i=0; i<size; i=i+1)
      {         
         for(j=0; j<size; j=j+1)
            {
               if(i!=b && j!=b)
                  printf("x[%d][%d] = %d\n",i,j,x[i][j]);
            }
      }

   return 0;
}
