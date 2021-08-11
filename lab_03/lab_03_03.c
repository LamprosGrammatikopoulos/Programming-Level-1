#include <stdio.h>
int main(void)
{
   printf("Dwste IP adress\n");
   int a,b,c,d,x,y,z,o;
   scanf("%d.%d.%d.%d",&a,&b,&c,&d);
   x = a&255;
   y = b&255;
   z = c&255;
   o = d&0;
   printf("%d.%d.%d.%d\n",x,y,z,o);
   
   return 0;
}
