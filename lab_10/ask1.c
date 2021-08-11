#include <stdio.h>
#include <string.h>
#define size 5
int main(void)
{
char str1[size]={0},str2[size]={0},str3[size]={0},help1[size]={0},help2[size]={0};
fgets(str1,sizeof(str1),stdin);
fgets(str2,sizeof(str2),stdin);
fgets(str3,sizeof(str3),stdin);
strcpy(help1,str1);
strcpy(help2,str2);
strcpy(str1,str3);
strcpy(str2,help1);
strcpy(str3,help2);
printf("%s\n",str1);
printf("%s\n",str2);
printf("%s\n",str3);
return 0;
}

