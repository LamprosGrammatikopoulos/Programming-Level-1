#include <stdio.h>
#define rows 3
#define cols 4
int *p1, *p2;
void lol(int arr[rows][cols], int nr, int nc);
int main(void)
{
   int i,j,nc,nr;
   int arr[rows][cols];
   printf("Dwste 12 akeraious gia enan 3x4 pinaka\n");
   for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
            {
               scanf("%d",&arr[i][j]);
            }
      }
   printf("\n");
   for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
            {
               printf("%3d",arr[i][j]);
            }
         printf("\n\n");
      }
   printf("Dwste arithmo grammhs pinaka\n");
   scanf("%d",&nr);
   printf("Dwste arithmo sthlhs pinaka\n");
   scanf("%d",&nc);
   lol(arr,nr,nc);
   printf("Megalutero stoixeio grammhs : %d\n",*p1);
   printf("Mikrotero stoixeio sthlhs : %d\n",*p2);
   return 0;
}
void lol(int arr[rows][cols], int nr, int nc)
{
   int i,j,k,l;
   l=-999999999;
   k=999999999;
   for(i=0;i<rows;i++)
      {
         if(arr[i][nc]<=k)
            {
               k=arr[i][nc];
            }
      }
   for(j=0;j<cols;j++)
      {
         if(arr[nr][j]>=l)
            {
               l=arr[nr][j];
            }
      }
   p1=&l;
   p2=&k;
}
