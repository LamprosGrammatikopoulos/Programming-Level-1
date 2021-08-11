#include <stdio.h>
int main(void)
{
double x,y,a,b;
int i;
printf("Enter miles interval:");
scanf("%lf%lf",&a,&b);
printf("Enter step:");
scanf("%d",&i);
x = b-i;
printf("MILE               KLM\n");
printf("--------------------------\n");
for(y=a;y<=x;y=y+i)
{
 printf("%.2f               %.2f\n",y,y*1.6);
}
return 0;
}

