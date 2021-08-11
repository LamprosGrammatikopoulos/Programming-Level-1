#include <stdio.h>
#include <stdlib.h>
#define size 10
int main(void)
{
int i,s=0,sx=0,*p;
char str[size]={0};
fgets(str,sizeof(str),stdin);
for(i=0;i<size;i++)
{
   if(str[i]!='\0')
     {
       s=i;
     }
   if(str[i]=='x')
     {
       sx=sx+1;
     }
   if(str[i]==' ')
     {
       str[i]='_';
     }
   if(str[i]=='z')
     {
       str[i]='s';
     }
}
printf("%s\n",str);
printf("Plithos xarakthrwn: %d\nPlithos emfanisewn x: %d\n",s,sx);
return 0;
}

