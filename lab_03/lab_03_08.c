#include <stdio.h>
int main(void)
{
   double x;
   printf("Dwse vathmo ma8hth\n");
   scanf("%lf",&x);
   if(x>18 && x<=20)
      {
         printf("Excellent\n");
      }
   else if(x>16 && x<=18)
      {
         printf("Very Good\n");
      }
   else if(x>13 && x<=16)
      {
         printf("Good\n");
      }
   else if(x>=10 && x<=13)
      {
         printf("Dangerous Zone\n");
      }
   else if(x>=0 && x<10)
      {
         printf("Need Help\n");
      }


   return 0;
}
