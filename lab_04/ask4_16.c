#include <stdio.h>
int main(void)
{
int a,b,i,j,x,s1,s2;
printf("Dwste diastaseis\n");
scanf("%d%d",&a,&b);
s2 = 0;
s1 = 0;
for(i=0;i<=a;i++)
{
 for(j=0;j<=(3*b);j=j+3)
  {
  printf("+");
  if(b>s2)
  if((j%3==0)||(j!=0))
    printf("--");
  }
  s1++;
  printf("\n");
 for(j=0;j<=(b*3);j=j+3)
  {
  if(a>s2)
  printf("|");
  if((j%3==0)||(j!=0))
    printf("  ");
  }
  s2++;
printf("\n");
}
return 0;
}
