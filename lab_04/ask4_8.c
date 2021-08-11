#include <stdio.h>
int main(void)
{
int i;
for(i=111;i<=999;i++)
{
 if ((i/100!=4)&&(i%10!=6))
  {
  printf("%d\n",i);
  }
}
return 0;
}
