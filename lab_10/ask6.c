#include <stdio.h>
#include <string.h>
#include <math.h>
#define size 8
int main(void)
{
char str[size]={0};
int k,apot,x,i;
double y,a=16;
printf("Eisagete xarakthres\n");
fgets(str,sizeof(str),stdin);
k=strlen(str);
apot=0;
for(i=k-2;i>=0;i--)
 {
   if(str[i]=='A' || str[i]=='a')
     {
       x=10;
     }
   else if(str[i]=='B' || str[1]=='b')
     {
       x=11;
     }
   else if(str[i]=='C' || str[i]=='c')
     {
        x=12;
     }
   else if(str[i]=='D' || str[i]=='d')
     {
        x=13;
     }
   else if(str[i]=='E' || str[i]=='e')
     {
        x=14;
     }
   else if(str[i]=='F' || str[i]=='f')
     {
        x=15;
     }
    else if(str[i]=='1')
     {
        x=1;
     }
    else if(str[1]=='2')
     {
        x=2;
     }
     else if(str[1]=='3')
     {
        x=3;
     }
    else if(str[1]=='4')
     {
        x=4;
     }
    else if(str[1]=='5')
     {
        x=5;
     }
    else if(str[1]=='6')
     {
        x=6;
     }
    else if(str[1]=='7')
     {
        x=7;
     }
      else if(str[1]=='8')
     {
        x=8;
     }
    else if(str[1]=='9')
     {
        x=9;
     }
    else if(str[1]=='0')
     {
        x=0;
     }
   apot=apot+x*(pow(16,k-2-i));

  }
printf("Apotelesma:%d\n",apot);
return 0;
}
