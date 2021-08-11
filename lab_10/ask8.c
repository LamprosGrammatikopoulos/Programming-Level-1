#include <stdio.h>
#include <string.h>
#define size 100
int main(void)
{
char str1[size]={0},str2[size]={0};
int i,j,k,x,s,f;
printf("Eisagete minhma gia ton prwto pinaka\n");
fgets(str1,sizeof(str1),stdin);
printf("Eisagete minhma gia ton deutero pinaka\n");
fgets(str2,sizeof(str2),stdin);
k=strlen(str2);
x=strlen(str1);
s=0;
f=0;
for(i=0;i<x-1;i++)
{
  if(f==k-1)
   {
     f=0;
    }
  if(f<=x-2)
   {
    if(str1[i]==str2[f]) 
     {
      s=s+1;
      f=f+1;
     }
   }
  
}
printf("Plithos:%d\n----%d",s/(k-1),k);
return 0;
}
