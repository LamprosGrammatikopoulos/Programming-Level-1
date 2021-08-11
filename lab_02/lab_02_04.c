#include <stdio.h>
int main(void)
{
  int x,y;
  double a,b;
  printf("Mathites pou petuxan\n");
  scanf("%d",&x);
  printf("Mathites pou apetuxan\n"); 
  scanf("%d",&y);
  a = (double) x/(x+y);
  b = (double) y/(x+y);
  printf("Success Ratio = %.0f%%\n",a*100);
  printf("Fail Ratio = %.0f%%\n",b*100);
  return 0;
}
