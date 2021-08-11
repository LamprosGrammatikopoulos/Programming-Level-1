#include <stdio.h>
int main(void)
{
   int e,a,f;
   double b,me,ma;
   e=0;
   a=0;
   for(f=0; f<100; f=f+1)
   {
      do
      {
         printf("Dwse vathmo foithth\n");
         scanf("%lf",&b);
      }while(b<0 && b>10);

         if(b==-1)
         {
            break;
         }
      
      if(b>=5)
      {
        e = e+1; 
      }
      else if(b>=0 && b<5)
      {
        a = a+1;
      }

   }
   
      ma = a/100;
      me = e/100;
      printf("%f\n%f\n",ma,me);

   return 0;
}
