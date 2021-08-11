#include <stdio.h>
double temperature(int c);
int main(void)
{
   int a,b;
   double k;
   do
      {
         printf("Dwse duo akeraious arithmous\n");
         scanf("%d %d",&a,&b);
      }while(a>=b);
   for(a=a;a<=b;a++)
      {
         k=temperature(a); 
         printf("Temperature in Celsius is : %d -----> Temperature in Fahrenheit is : %f\n",a,k);     
      }
   return 0;
}

double temperature(int c)
{
   double x,f;
   f = (((double)c/5)*9)+32;
   return f;
}
