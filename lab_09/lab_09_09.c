#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define rows 5
#define cols 5
int *p;
int* lol(int arr[rows][cols], int x);
int main(void)
{
   int x,i,j,arr[rows][cols],n=9;
   srand(time(NULL));
   for(i=0;i<rows;i++)
      {
         for(j=0;j<rows;j++)
            {
               arr[i][j]=rand()%n;
               printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
            }
      }
   printf("\n");
   printf("Dwste enan akeraio arithmo\n");
   scanf("%d",&x);
   p=lol(arr,x);
   if(p!=NULL)
      {
         printf("\nStoixeia grammhs sthn opoia o dosmenos arithmos emfanizetai tis perissoteres fores :\n");
         for(j=0;j<cols;j++)
            {
               printf("arr[%d][%d]=%d\n",*p,j,arr[*p][j]);
            }
         printf("\n");
      }
   else if(p==NULL)
      {
         printf("\nAftos o arithmos den periexetai ston pinaka\n\n");
      }

   return 0;
}
int* lol(int arr[rows][cols], int x)
{
   int i,j,c1=0,c2=0,c3=0; 
   for(i=0;i<rows;i++)
      {
         c1=0;
         for(j=0;j<cols;j++)
            {
               if(x==arr[i][j])
                  {
                     c1++;
                  }
               if(c1>=c2)
                  {
                     c2=c1;
                     c3=i;
                  }
            }
      }
   p=&c3;
   if(c2!=0)
      {
         return p;
      }
   else if(c2==0)
      {
         return NULL;
      }
}
