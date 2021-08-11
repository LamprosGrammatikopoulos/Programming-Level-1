#include <stdio.h>
#define size 5
int main(void)
{
int x[size][size],i,j,sK,sD;
printf("Dwste akeraious arithmous\n");
for(i=0;i<size;i++)
{
   for(j=0;j<size;j++)
     {
       scanf("%d",&*(*(x+i)+j));
     }
}
sK=0;
for(i=0;i<size;i++)
{
   for(j=0;j<size;j++)
     {
       if(*(*(x+i)+j)==*(*(x+i)+i))
        sK=*(*(x+i)+j)+sK;
     }
}
sD=0;
for(i=0;i<size;i++)
{
   for(j=0;j<size;j++)
     {
       if(*(*(x+i)+j)==*(*(x+i)+size-1-i))
        sD=*(*(x+i)+j)+sD;
     }
}
if(sK==sD)
{
  printf("Einai ises oi diagonioi\n");
}
else
{
  printf("Den ises oi diagonioi\n");
}
return 0;
}
