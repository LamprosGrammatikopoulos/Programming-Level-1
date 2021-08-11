#include <stdio.h>
#define size 4
int main(void)
{
   double x[size],y,b;
   int i;
   b=999999999999999999;
   for(i=0; i<size; i++)
   {   
      do
      {
         printf("Dwste pragmatikous arithmous\n");
         scanf("%lf",&y);
         if(y==-1)
         { 
            break;
         }
      }while(y<=5);

      if(y!=-1)
      {   
         x[i] = y;
         if(x[i] <= b)
         {
            b = x[i];
         }
      }

      else if(y==-1)
         { 
            break;
         }

   }
   
   printf("%f\n",b);
     
   return 0;
}
