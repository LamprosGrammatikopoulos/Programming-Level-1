#include <stdio.h>
int main(void)
{
  int a;
  printf("Dwse deuterolepta se morfh akeraiou\n");
  scanf("%d",&a);
  printf("%dh",a/3600);
  printf(" %dm",(a%3600)/60);
  printf(" %ds\n",a%60);
  
  return 0;
}
