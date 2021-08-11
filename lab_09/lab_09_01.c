#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10
int lol(int arr[size]);
int main(void)
{
   int i,arr[size],k;
   srand(time(NULL));
   for(i=0;i<size;i++)
      {
         arr[i]=5+rand()%16;
         printf("arr[%d]=%d\n",i,arr[i]);
      }
   printf("\n");
   k=lol(arr);
   if(k==1)
      {
         printf("O pinakas einai taksinomimenos se auksousa seira.\n");
      }
   else if(k==2)
      {
         printf("O pinakas einai taksinomimenos se fthinousa seira.\n");
      }
   else 
      {
         printf("O pinakas den einai taksinomimenos.\n");
      }
   printf("\n");
   return 0;
}
int lol(int arr[size])
{
   int i,n,x,y,z,o=4;
   srand(time(NULL));
   for(i=0;i<size;i++)
      {
         if(arr[i]>=o)
            {
               x++;
            }
         else if(arr[i]<=o)
            {
               y++;
            }
         o=arr[i];
      }
   if(x==size)
      {
         return 1;
      }
   else if(y==size)
      {
         return 2;
      }
   else if(x!=size && y!=size)
      {
         return rand()%n;
      }
}

