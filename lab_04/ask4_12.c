#include <stdio.h>
int main(void)
{
int x,i,s;
printf("Dwste deka thetikous arithmous\n");
s = 0;
for(i=0;i<=9;i++)
{
 scanf("%d",&x);
 if (x<0)
 {
 printf("Dwse thetiko arithmo\n");
 s = s+1;
 i = i-1;
 }
}
printf("%d\n",s);
return 0;
}
