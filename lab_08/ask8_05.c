#include <stdio.h>
double far(int x);
int main(void)
{
int a,b,i;
double k;
do
{
  printf("Dwste dyo arithmous poy o protos na einai mikroteros toy deuteroy\n");
  scanf("%d%d",&a,&b);
}while(a>b);
for(i=a;i<=b;i++)
{
k = far(i);
printf("H thermokrasia se Farenait einai:%.2fF\n",k);
}
return 0;
}
double far(int x)
{
  double y;
  y=(x*9/5)+32;
return y;
} 




