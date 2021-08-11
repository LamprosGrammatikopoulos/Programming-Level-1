#include <stdio.h>
#include <string.h>
#define size 10
int main(void)
{
int x,y,i,s=0,k;
char str[size]={0};
printf("Eisagete mhnima\n");
fgets(str,sizeof(str),stdin);
printf("Eisagete ploithos aroithmwn pou thelete na diagrafoyn\n");
scanf("%d",&x);
printf("Eisagete prwto stoixeio pou thelete na diagrafei\n");
scanf("%d",&y);
k=strlen(str);
for(i=y-1;i<x+1;i++)
{
  str[i]=str[x+y-1+s];
  s=s+1;
}
for(i=x+y-1;i<size;i++)
{
  str[i]='\0';
}
printf("%s\n",str);
return 0;
}
