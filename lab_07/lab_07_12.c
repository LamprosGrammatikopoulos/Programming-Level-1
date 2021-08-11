#include <stdio.h>
int xar(int d);

int main(void)
{
   int q,X;
   printf("Dwste enan xarakthra\n");
   scanf("%lc",&q);
   X=xar(q);
   printf("%c\n",X);
   return 0;
}

int xar(int d)
{
   switch(d)
      {
         case 'a' :
            {
               d='a';
               break;
            }
         case 'b' :
            {
               d='b';
               break;
            }
         case 'c' :
            {
               d='c';
               break;
            }
         default :
            {
               d='z';
               break;
            }
      }
   return d;
} 
