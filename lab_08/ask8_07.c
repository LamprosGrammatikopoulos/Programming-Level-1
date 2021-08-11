#include <stdio.h>
int f(int a);
int y(int a);
int main(void)
{
int y,k;
printf("Dwste enan akeraio arithmo\n");
scanf("%d",&y);
k=f(y);
printf("Apotelesma fog:%d\n",k);
return 0;
}
int y(int a)
{
int w;
  if(a>0)
   {
    w=a*a+2;
   }
  else 
   {
    w=7*a-5;
   }
return w;
}


int f(int a)
{
int v,c;
c=y(a);
int w;
  if(a>0)
   {
    v=c+2;
   }
  else 
   {
    v=-3*c+7;
   }
return v;
}

