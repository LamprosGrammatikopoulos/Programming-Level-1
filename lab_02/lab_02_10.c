#include<stdio.h>
int main(void)
{
double x,a,b,y;
printf("Dwste kostos\n");
scanf("%lf",&x);
a = (x>=100);
b = (x<100);
y = a*(x-((x*5)/100))+b*x;
printf("%f\n",y);
return 0;
}
