#include <stdio.h>
#include <string.h>
#define size 10
int *p1,*p2,*p3;
void test(char str[size]);
int main(void)
{
int k;
char str[size]={0};
printf("Eisagete xarakthres\n");
fgets(str,sizeof(str),stdin);
k=strlen(str);
if(str[0]=='a' && str[k-2]=='q')
{
  printf("Kefalaia:%d Peza:%d Xarakthres:%d\n",*p1,*p2,*p3);
}
printf("%d\n",k);
return 0;
}
void test(char str[size])
{
int i,x,Kef,Pez;
x=strlen(str);
for(i=0;i<x;i++)
{
  if(str[i]>=64 && str[i]<=90)
     {
       Kef=Kef+1;
     }
   else if(str[i]>=97 && str[i]<=122)
     {
       Pez=Pez+1;
     }
}
p1=&Kef;
p2=&Pez;
p3=&x;
}



