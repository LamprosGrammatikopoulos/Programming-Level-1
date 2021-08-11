#include <stdio.h>
int main(void)
{
   int a,b,c,x,y,z;
   printf("Dwse treis akeraious arithmous\n");
   scanf("%d %d %d",&a,&b,&c);
   if( (a+b==c) || (a+c==b) || (b+c==a) && ( (x>=0) && (x<=10) ) )
      {      
         printf("%d %d %d\n",a,b,c);
      }   
   else
      {
         printf("Dwse treis akeraious arithmous\n");
         scanf("%d %d %d",&x,&y,&z);
         if( (x%6==0) || (x!=20) )
            {
               printf("%d\n",x);
            }
         if( (y%6==0) || (y!=20) )
            {
               printf("%d\n",y);
            }
         if( (z%6==0) || (z!=20) )
            {
               printf("%d\n",z);
            }
      }

   return 0;
}
