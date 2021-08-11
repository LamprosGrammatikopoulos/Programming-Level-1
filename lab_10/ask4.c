#include <stdio.h>
#include <string.h>
#define size 10
int main(void)
{
int i,k;
char str[size]={0},*ptr,b;
printf("Eisagete xarakthres\n");
fgets(str,sizeof(str),stdin);
k=strlen(str);
for(i=0;i<k/2;i++)
 {
  b=str[i];
  str[i]=str[k-2-i];
  str[k-2-i]=b;
}
printf("%s",str);
/*
printf("%d\n",k); */
return 0;
}
