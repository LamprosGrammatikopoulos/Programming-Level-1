#include <stdio.h>
#define rows 2
#define cols 3
int main(void)
{
   int arr[rows][cols],i,j;
   printf("Dwste akeraious arithmous gia enan 2x3 pinaka\n");
   for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
            {
            scanf("%d",&arr[i][j]);
            }
      }

      for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
            {
            printf("%d",*(*(arr+i)+j));
            }
      printf("\n");
      }

return 0;
}

