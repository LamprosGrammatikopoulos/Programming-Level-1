#include <stdio.h>
#define size 8
#define arrsize 4
int *p;
void lol(double arr1[arrsize],double arr2[arrsize],int N);
int main(void)
{
   int i,N;
   double arr1[arrsize],arr2[arrsize];
   printf("Dwste 200 pragmatikous arithmous tupou double\n");
   for(i=0;i<(arrsize);i++)
   {
      scanf("%lf",&arr1[i]);
   }
   printf("---\n");
   for(i=0;i<(arrsize);i++)
   {
      scanf("%lf",&arr2[i]);
   }
   printf("Dwste ton arithmo twn stoixeiwn pou tha sugkrithoun\n");
   scanf("%d",&N);
   printf("\n");
   lol(arr1,arr2,N);
   if(*p==1)
      {
         printf("arr1[0]-arr1[%d] == arr2[0]-arr[%d]\n",N-1,N-1);  
      }
   else if(*p==0) 
      {
         printf("arr1[0]-arr1[%d] != arr2[0]-arr[%d]\n",N-1,N-1);
      }
   printf("\n");
   return 0;
}
void lol(double arr1[arrsize],double arr2[arrsize],int N)
{
   int i,c=0;
   p=&c;
   for(i=0;i<N;i++)
      {
         if(arr1[i]==arr2[i])
            {
               c++;
            }
      }
   if(c==N)
      {
         c=1; 
         p=&c;  
      }
   else if(c!=N)
      {
         c=0;
         p=&c;
      }
}
