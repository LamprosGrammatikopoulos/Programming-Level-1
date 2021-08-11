#include <stdio.h>
#include <string.h>
#define size 10
int main(void)
{
int i,apot,x,a,k;
char str[size]={0};
printf("Eisagete mhnima\n");
fgets(str,sizeof(str),stdin);
k=strlen(str);
apot=0;
a=10;
for(i=k-2;i>=0;i--)
{
 
  if(str[i]>=48 && str[i]<=57)
    {
        if(str[i]=='1')
         {
           x=1;
         }
        else if(str[i]=='2')
         {
           x=2;
         }
        else if(str[i]=='3')
         {
           x=3;
         }
        else if(str[i]=='4')
         {
           x=4;
         }
        else if(str[i]=='5')
         {
           x=5;
         }
        else if(str[i]=='6')
         {
           x=6;
         }
        else if(str[i]=='7')
         {
           x=7;
         }
        else if(str[i]=='8')
         {
           x=8;
         }
        else if(str[i]=='9')
         {
           x=9;
         }
      apot=apot+a*x;
     
      a=a*10;
      
   }
}
if(str[0]=='-')
{
  printf("Apotelesma:%d\n",(-1*apot)/10);
}
else
{
printf("Apotelesma:%d",apot/10);
}
return 0;
}






