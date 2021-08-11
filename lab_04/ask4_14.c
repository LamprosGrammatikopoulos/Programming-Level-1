#include <stdio.h>
int main(void)
{
int x,y;
x = 0;
printf("Dwse arithmo\n");
scanf("%d",&y);
while (y)
{
y = y & (y-1);
x = x+1;
}
printf("%d\n",x);
return 0;
}
