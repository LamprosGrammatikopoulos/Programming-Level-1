#include <stdio.h>
void test(int x,int y);
int main(void)
{
 int a,b;
 printf("Dwste 2 arithmous\n");
 scanf("%d%d",&a,&b);
 test(a,b);
 return 0;
}
void test(int x,int y)
{
 if(x%y==0) 
  {
   printf("Einai pollaplasios o prwtos arithmos tou deuterou\n");
  }
 else
  {
   printf("Den einai pollaplasios o prwtos arithmos tou deuterou\n");
  }
}

