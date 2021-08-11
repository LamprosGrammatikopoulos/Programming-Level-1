#include <stdio.h>
int T(int n);
int main(void)
{
   int n,t;
   do
      {
         printf("Dwste enan akeraio arithmo sto diasthma [0,20]\n");
         scanf("%d",&n);
      }while( (n<0) || (n>20) );
   t=T(n);
   printf("T(%d)=%d\n",n,t);
   return 0;
}
int T(int n)
{
   if( (n==0) || (n==1) )
      {
         return n;
      }
   else if(n>1)
      {
         return (n+T(n-1));
      }
}
