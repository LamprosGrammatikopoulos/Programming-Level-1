#include <stdio.h>
int ouboundouu(int a, int b);

int main(void)
{
   int x,y,v;
   printf("Dwste duo akeraious xarakthres\n");
   scanf("%d%d",&x,&y);
   v=ouboundouu(x,y);
   return 0;
}

int ouboundouu(int a, int b)
{
   if(a>b)
      {
         printf("O protos einai megaluteros apo ton deutero\n");
      }
   else if(a<b)
      {
         printf("O protos einai mikroteros apo ton deutero\n");
      }
   else if(a==b)
      {
         printf("Oi arithnoi einai isoi\n");
      }
   return 0;
}
