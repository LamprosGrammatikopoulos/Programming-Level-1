#include <stdio.h>
int main(void)
{
   unsigned char x,y,a,b,A,B;
   int o;
   double ab,AB;

   printf("Dwse enan akeraio apo to 0 ews to 255\n");
   scanf("%hhd",&x);
   printf("Dwse arithmo bits olisthshs\n");
   scanf("%hhd",&y);
   o = 8-y;
   a = x>>o;
   b = (char)x<<y;
   ab = a|b;
   A = x<<o;
   B = (char)x>>y;
   AB = A|B;
   printf("%.f %.f\n",ab,AB);
   

   
   return 0;
}
