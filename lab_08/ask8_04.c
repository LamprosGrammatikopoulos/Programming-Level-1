#include <stdio.h>
void test(int a);
int main(void)
{
int x,y,i;
printf("Dwste 2 arithmous opoy o prwtos einai mikroteros toy deyterou\n");
scanf("%d%d",&x,&y);
for(i=x;i<=y;i++)
  {
   test(i);
  }
return 0;
}
void test(int a)
{
 int s;
 s=1;
 while(a>0)
 { 
  s=s*a;
  printf("%d",a-1);
  a=a-1;
 }
printf("    %d\n",s);
}
