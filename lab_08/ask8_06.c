#include <stdio.h>
int test(int a,int b,int c);
int main(void)
{
int x,y,z,k;
printf("Dwste 3 arithmous\n");
scanf("%d%d%d",&x,&y,&z);
k=test(x,y,z);
printf("Apotelesma:%d\n",k);
return 0;
}
int test(int a,int b,int c)
{
int T;
if(a+b==c)
{
  if(a>b)
   {
    T=a;
   }
  else
   {
    T=b;
   }
}
else
{
  if(b<c)
    {
      T=b;
    }
   else 
    {
      T=c; 
    }
}
return T;
}
  
