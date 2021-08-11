#include <stdio.h>
int vathmoi(int a, int b, int c);
int main(void)
{
   int a,b,c,v;
   printf("Dwste treis akeraious arithmous\n");
   scanf("%d %d %d",&a,&b,&c);
   v=vathmoi(a,b,c);
   printf("%d\n",v);
   return 0;
}
int vathmoi(int a, int b, int c)
{
   if( ((a+b)==c) && (a>=b) )
      {
         return a; 
      }
   else if( ((a+b)==c) && (b>=a) )
      {
         return b;
      }
   else if( ((a+b)!=c) && (b<=c) )
      {
         return b;
      }
   else if( ((a+b)!=c) && (c<=b) )
      {
         return c;
      }   
}
