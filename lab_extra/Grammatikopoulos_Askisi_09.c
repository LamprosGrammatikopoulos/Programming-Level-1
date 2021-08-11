#include <stdio.h>
#define size 20
int main(void)
{
   int i,arr[size],c1=0,c2=0;
   double c3;
   printf("Dwste akeraious arithmous.\n");
   for(i=0;i<size;i++)
      {
         scanf("%d",&arr[i]);
         if(arr[i]!=-1)
            {
               c1=c1+arr[i];
               c2=c2+1;
            }
         if(arr[i]==-1)
            {
               break;
            }
      }
   c3=(double)c1/c2;
   printf("%f\n",c3);
   return 0;
}
