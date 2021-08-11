#include <stdio.h>
#define P 3.14159
int main(void)
{
  int r;  
      
  printf("Dwse aktina kuklou se cm\n");
  scanf("%d",&r);  
  printf("Emvadon kuklou = %.2f(cm)\nPerimetros kuklou = %.2f(cm^2)\n",2*P*r,P*r*r*P*r*r);
  

return 0;
}
