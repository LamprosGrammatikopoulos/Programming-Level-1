#include <stdio.h>
int main(void)
{
   int x,a,b,c,d;
   do
   { 
      printf("Dwse thetiko tetrapsifio arithmo\n");
      scanf("%d",&x);

   } while(x<=999 || x>10000);
   
   a=x/1000;
   b=(x/100)-a*10; 
   c=(x/10)-(a*100+b*10); 
   d=x-(a*1000 + b*100 + c*10); 
   (a==d && b==c) ? printf("Diabazetai anapoda\n") : printf("Den diabazetai anapoda\n");
   
   return 0;
}
