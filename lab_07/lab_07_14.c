#include <stdio.h>
int square(int a);
int cube(int b);

int main(void)
{
   int x,v,w;
   printf("Dwste enan akeraio arithmo\n");
   scanf("%d",&x);
   v=square(x);
   w=cube(v);
   printf("%d\n",w);
   return 0;
}

int square(int a)
{
   return a*a;  
}

int cube(int b)
{
   return b*b*b;
}
