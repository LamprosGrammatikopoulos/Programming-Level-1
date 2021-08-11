#include <stdio.h>
#define size 3
float test(int a,int b);
int main(void)
{
int i ,s,x,y;
float k;
s=0;
for(i=0;i<size;i++)
 {
  printf("Dwste vatmo ergasthriou kai vahtmo thworias %dou foithth\n",i+1);
  scanf("%d%d",&x,&y );
  k =test(x,y);
  if(k>=8 && k<=10)
    {
     s=s+1;
    }
}
printf("%d\n",s);
return 0;
}
float test(int a,int b)
{
 float z;
 z=a*0.3+b*0.7;
 return z;
}

