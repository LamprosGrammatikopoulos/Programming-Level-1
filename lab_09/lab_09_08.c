#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10
int i=0;
int lol(int arr[size]);
int main(void)
{
   int l,arr[size],k;
   srand(time(NULL));
   for(l=0;l<size;l++)
      {
         arr[l]=rand()%3;
         printf("arr[%d]=%d\n",l,arr[l]);
      }
   k=lol(arr);
   printf("H thesh tou prwtou stoixeiou pou xalaei thn summetria einai h : arr[%d]\n",k);
   return 0;
}
int lol(int arr[size])
{
   if(arr[i]==arr[size-1-i])
      {
         i++;
         return lol(arr);
      }
   else
      {
         return i;
      }
}
