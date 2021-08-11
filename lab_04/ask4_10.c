#include <stdio.h>
int main(void)
{
int a,b,s;
s = 0;
b = 0;
printf("Dwste arithmous\n");
while (s<100)
{
 scanf("%d",&a);
 s=s+a;
 b = b+1;
}
printf("%d     %d\n",s,b);
return 0;
}
