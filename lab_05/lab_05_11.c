#include <stdio.h>
#define size 6
int main(void)
{
   int i,s;
   double x[size];
   printf("Dwste eksi pragmatikous arithmous\n");
   for(i=0;i<size;i++)
      {
         scanf("%lf",&x[i]);
      }
   s=0;
   for(i=0;i<(size/2);i++)
      {
         if(x[i]==x[size-i-1])
            {
               s=s+1;
            }
      }
   printf("%d\n",s);
   if(s==(size/2))
      {
         printf("Exei symmetria\n");
      }

   return 0;

}


