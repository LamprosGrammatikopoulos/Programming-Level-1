#include <stdio.h>
float min(float a,float b, float c);

int main(void)
{
   float x,y,z,X;
   printf("Dwste vathmous triwn foithtwn\n");
   scanf("%f%f%f",&x,&y,&z);
   X=min(x,y,z);
   printf("%f\n",X);
   return 0;
}

float min(float a,float b, float c)
   {
      float d;
      if( (a<=b && a<=c) || (a<=c && a<=b) )
         {
            d=a;
         }
      else if( (b<=a && b<=c) || (b<=c && b<=a) )
         {
            d=b;
         }
     else if( (c<=b && c<=a) || (c<=a && c<=b) )
        {
           d=c;
        }
      return d;
}

