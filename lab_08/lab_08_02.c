#include <stdio.h>
void vathmos(double x, double y);
int main(void)
{
   double x,y;
   printf("Dwse bathmo theorias kai ergasthriou apo 1 mexri 10 tou tritou foithth\n");
   scanf("%lf %lf",&x,&y);
   vathmos(x,y);
   return 0;
}

void vathmos(double x, double y)
{
   if( (((x*0.7)+(y*0.3))>=8) && (((x*0.7)+(y*0.3))<=10) )
   printf("Pernaei\n");
   else printf("Den pernaei\n");
}
