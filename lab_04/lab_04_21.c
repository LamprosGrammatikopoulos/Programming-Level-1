#include <stdio.h>
int main(void)
{
   int a,b;
   b=0;
   for(a=100; a<=999; a++)
   {
      if( (a%3!=0) && (a%5!=0) && (a%10!=7) )
      {
        printf("%d\n",a);
        b=b+1;
      }

   }
   printf("\n");   
   printf("%d\n",b);



   return 0;
}
