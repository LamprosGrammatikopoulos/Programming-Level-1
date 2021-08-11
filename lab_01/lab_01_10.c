#include <stdio.h>
int main(void)
{
  int y,z;
  double x;
  printf("Dwste ena thetiko arithmo\n");
  scanf("%lf",&x);
  
  y = (double)x+1;
  z = (double)x;	  

  printf("%d\n",z);
  printf("%d\n",y);
  
  return 0;
}
