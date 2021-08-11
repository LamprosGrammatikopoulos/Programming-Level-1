#include <stdio.h>
#define rows 2
#define cols 4
int arr3[rows][cols];
void lol(int arr1[rows][cols], int arr2[rows][cols]);
int main(void)
{
   int i,j;
   int arr1[rows][cols];
   int arr2[rows][cols];
   printf("Dwste 16 akeraious gia duo 2x4 pinakes\n");
   printf("\n");
   for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
            {
               scanf("%d",&arr1[i][j]);
               printf("arr1[%d][%d]=%d\n",i,j,arr1[i][j]);
            }
      }
   printf("\n");
   printf("\n");   
   i=j=0;
   for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
            {
               scanf("%d",&arr2[i][j]);
               printf("arr2[%d][%d]=%d\n",i,j,arr2[i][j]);
            }
      }
   printf("\n");
   lol(arr1,arr2);
   for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
            {
               printf("arr3[%d][%d]=%d\n",i,j,arr3[i][j]);
            }
      }
   printf("\n");
   return 0;
}
void lol(int arr1[rows][cols], int arr2[rows][cols])
{
   int i,j;
   for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
            {
               arr3[i][j]=arr1[i][j]+arr2[i][j];
            }
      }
}
