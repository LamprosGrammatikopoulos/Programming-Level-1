#include<stdio.h>
int main(void)

{
   double x,y,a,b;
   printf("Dwste dyo aritmous\n");
   scanf("%lf%lf",&x,&y);
   a = (x>y);
   b = (x<y);
   a = a*x+b*y;
   printf("%.2f\n",a);
   
   return 0;
}

