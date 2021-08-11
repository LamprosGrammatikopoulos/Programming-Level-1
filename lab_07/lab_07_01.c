#include <stdio.h>
int main(void)
{
   int *arr[3], i , j , k , m , sum;
   printf("Dwste treis akeraious arithmous\n");
   scanf("%d %d %d",&i,&j,&k);
   arr[0]=&i;
   arr[1]=&j;
   arr[2]=&k;
   if(*arr[0]%2==0 && *arr[1]%2==0 && *arr[2]%2==0 )
      {
         printf("\n");
         printf("%d\n", *arr[0] + *arr[1] + *arr[2] );
      }
   else if(*arr[0]%2==0 && *arr[1]%2==0 )
      {
         printf("\n");
         printf("%d\n", *arr[0] + *arr[1] );
      }
   else if(*arr[0]%2==0 && *arr[2]%2==0 )
      {
         printf("\n");
         printf("%d\n", *arr[0] + *arr[2] );
      }
   else if(*arr[1]%2==0 && *arr[2]%2==0 )
      {
         printf("\n");
         printf("%d\n", *arr[1] + *arr[2] );
      }

   return 0;
}
