#include <stdio.h>
#define SIZE 5
int main(void)
{
double x[SIZE],a;
int i;
a = 6.0;
for(i=0;i<SIZE;i++)
{
x[i]=a+0.2;
a = a + 0.2;
}
for(i=SIZE-1;i>=0;i--)
{
printf("%.1f\n",x[i]);
}
return 0;
}
