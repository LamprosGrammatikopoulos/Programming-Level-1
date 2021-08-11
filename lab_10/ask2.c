#include <stdio.h>
#include <string.h>
#define size 10
int main(void)
{
int k,i;
char str[size]={0};
fgets(str,sizeof(str),stdin);
k=strlen(str);
if(str[k-2]=='a' && str[k-3]=='a')
 {
    
    for(i=k;i>=0;i--)
      {
       printf("%c",str[i]);
      }
  printf("\n");
 }
return 0;
}
