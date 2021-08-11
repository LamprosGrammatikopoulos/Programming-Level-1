#include <stdio.h>
int main(void)
{
   double *ptr,a;
   int b;
   ptr = &a;
   printf("Dwste enan pragmatiko arithmo\n");
   scanf("%lf",ptr);
   b = *ptr;
   if(*ptr<0)
      printf("%lf\n",(-(*ptr-b)));
   else
      printf("%lf\n",(*ptr-b));
   return 0;
}
