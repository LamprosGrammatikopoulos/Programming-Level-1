#include <stdio.h>
void vathmos(int x, int y);
int main(void)
{
   int x,y;
   printf("Dwse duo akeraious arithmous\n");
   scanf("%d %d",&x,&y);
   vathmos(x,y);
   return 0;
}

void vathmos(int x, int y)
{
   if( (x%2==0 && y%2==0) || (x%3==0 && y%3==0) || (x%5==0 && y%5==0) )
   printf("O enas pollaplasios tou allou\n");
   else printf("Kanenas pollaplasios tou allou\n");
}
