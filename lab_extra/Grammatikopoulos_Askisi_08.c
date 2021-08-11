#include <stdio.h>
int main(void)
{
   int i,j,a=0,b=0;
   for(j=105;j<=905;j=j+100)
      {
         a=a+100;
         for(i=101;i<=105;i=i+1)
            {
               a=a+1;
               b=b+100;
               b=b+a;
            }
         a=a-5;
      }
   printf("To athroisma {100+101+...+105+200+201+...+205+...+900+901+...+905} einai iso me : %d\n",b);
   return 0;
}
