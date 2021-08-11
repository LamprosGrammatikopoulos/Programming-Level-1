#include <stdio.h>
int main(void)
{
   double *ptr1,*ptr2,l,k;
   ptr1=&l;
   ptr2=&k;
   printf("Dwste duo pragmatikous arithmous\n");
   scanf("%lf %lf",ptr1,ptr2);
   
   if( (*ptr1 + *ptr2)>=0 )
      {
         printf("Apoluth timh athroismatos = %f\n",(*ptr1 + *ptr2));
      }
   else if( (*ptr1 + *ptr2)<0 )
      {
         printf("Apoluth timh athroismatos = %f\n",(-(*ptr1 + *ptr2)));
      }

   return 0;
}
