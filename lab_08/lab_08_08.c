#include <stdio.h>
#define size 5
void min(int a, int b);
int main(void)
{
   int a,b;
      do
         {
            printf("Dwse duo akeraious arithmous\n");
            scanf("%d %d",&a,&b);
         }while(a>=b);
   min(a,b);
   return 0;
}

void min(int a, int b)
{
   int i,x,num;
   printf("Dwse ekato akeraious arithmous\n");
   scanf("%d",&x);
   num=a;
   for(i=1; i<size-1; i=i+1)      
      {
         scanf("%d",&x);
         if(x>=a && x<=b && x<=num)
            {
printf("hello\n");
               num=x;
            }
      }
   printf("%d\n",num);
}
