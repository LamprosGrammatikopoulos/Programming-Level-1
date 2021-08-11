#include <stdio.h>
int main(void)
{
  double a,b;
  int x,y;
  scanf("%lf%lf",&a,&b);
  x = a;
  y = b;
  printf("%d\n",x-((x/y)*y));
  
  return 0;
}
