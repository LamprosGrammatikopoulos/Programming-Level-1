#include <stdio.h>
int main(void) 
{
   int a,g,x,y,w;
   char k;
   scanf("%d",&x);
   k='*';
   w=1;
   for(a=1; a <= x; a++)
   {
      w=1;
      for(g=x-a+1; g>0 ; g--)
        {
           for(y=x-g; y>0 && g!=x && w==1; y--)
              {
                 printf(" ");
              } 
           printf("%c",k);
           w=w+1;
        }
      printf("\n");
   }
   return 0;
}
