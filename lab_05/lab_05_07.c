#include <stdio.h>
#define size 4
int main(void)
{
   double x[size],a=0,b=0,c=0,d=0,e=0;
   int i;
   printf("Dwste 100 akeraious arithmous\n");
   for(i=0; i<size; i=i+1)
      {
         a=x[i];
         scanf("%lf",&x[i]);
         b=a-x[i]

         if(b>c)
            {
               if(c>=0)
                  {
                     e=c; 
                  }
               else if(c<0)
                  {
                     e=-c; 
                  }              
            }
         else if(b<=c)
            {
               if(b>=0)
                  {
                     e=b; 
                  }
               else if(b<0)
                  {
                     e=-c; 
                  }
            }
         
      }

   printf("\n%.1f\n",e);

   return 0;
}
