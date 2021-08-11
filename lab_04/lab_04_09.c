#include <stdio.h>
int main(void)
{
   double a,b,s,k;
   printf("Enter miles interval:\n");
   scanf("%lf %lf",&a,&b);
   printf("Enter step:\n");
   scanf("%lf",&s);
   printf("MILLE            KLM\n");
   printf("--------------------------\n"); 
   for(k = a*1.6; a<b; a=a+s)
   {   
      k = a*1.6;
      printf("%.2f%17.2f\n",a,k); 
      
   }




   return 0;
}
