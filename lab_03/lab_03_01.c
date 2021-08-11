#include <stdio.h>
int main(void)
{
   int x,y;
   
   printf("Dwse akeraio-kleidi\n");
   scanf("%d",&x);
   printf("Dwse akeraio pou tha apokruptografithei\n");
   scanf("%d",&y);
   x = (y^x)^x;
   printf("%d\n",x);

   return 0;

}
