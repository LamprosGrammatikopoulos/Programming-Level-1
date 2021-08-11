#include <stdio.h>
int main(void)
{
   int ch,sum=0,sx=0;
   while( ((ch=getchar())!='\n') && (ch!='q') && sum<=500 && (ch!=EOF) )
      {
         sum=sum+ch;
         sx=sx+1;
      }
   if(sum>500)
      {
         printf("%d",sx);    
         putchar('\n');
      }
   return 0;
}
