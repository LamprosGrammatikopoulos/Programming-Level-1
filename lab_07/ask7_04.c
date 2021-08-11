#include <stdio.h>
#define size 5
int main(void)
{
int x[size][size],i,j,sK,smaxK,sG,smaxG;
printf("Dwste arithmous\n");
for(i=0;i<size;i++)
{
  for(j=0;j<size;j++)
    {
     scanf("%d",&*(*(x+i)+j));
    }
}
smaxK=0;
for(i=0;i<size;i++)
{
    sK=0;
    for(j=0;j<size;j++)
      {
        sK=sK+*(*(x+i)+j);
      }
  if(sK>smaxK);
   {
     smaxK=sK;
   }
}
smaxG=0;
for(j=0;j<size;j++)
{
   sG=0;
    for(i=0;i<size;i++)
     {
       sG=sG+*(*(x+i)+j);
     }
  if(sG>smaxG)
   {
     smaxG=sG;
   }
}
printf("MAX sthlh:%d  MAX grammh:%d\n",smaxK,smaxG);
return 0;
}	
