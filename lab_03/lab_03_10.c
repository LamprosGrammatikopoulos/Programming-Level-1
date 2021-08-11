#include <stdio.h>
int main(void)
{
   double x,y;
   printf("Dwse bathmo theorias kai ergasthriou apo 1 mexri 10 tou protou foithth\n");
   scanf("%lf %lf",&x,&y);
   if( (((x*0.7)+(y*0.3))>=8) && (((x*0.7)+(y*0.3))<=10) )
   printf("Pernaei\n");
   else printf("Den pernaei\n");

   printf("Dwse bathmo theorias kai ergasthriou apo 1 mexri 10 tou deuterou foithth\n");
   scanf("%lf %lf",&x,&y);
   if( (((x*0.7)+(y*0.3))>=8) && (((x*0.7)+(y*0.3))<=10) )
   printf("Pernaei\n");
   else printf("Den pernaei\n");
   
   printf("Dwse bathmo theorias kai ergasthriou apo 1 mexri 10 tou tritou foithth\n");
   scanf("%lf %lf",&x,&y);
   if( (((x*0.7)+(y*0.3))>=8) && (((x*0.7)+(y*0.3))<=10) )
   printf("Pernaei\n");
   else printf("Den pernaei\n");

   return 0;
}
