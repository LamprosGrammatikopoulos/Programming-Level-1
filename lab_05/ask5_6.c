#include <stdio.h>
#define size 5
int main(void)
{
int x[size],i,j,Sz,sx,a[size];
printf("Dwste ekkato akeraious arithmous\n");
 for(i=0;i<size;i++)
 {
 scanf("%d",&x[i]);
 }
 Sz = 0;
 for(i=0;i<size;i++)
 {
 a[i] = x[i];
 }

  for(i=0;i<size;i++)
  {
  sx = 0;
    for(j=0;j<size;j++)
    {
     if(i!=j)
     if(x[i]==a[j])
     sx = sx+1;
     
    }
}
if(sx!=0)
  Sz = Sz+1; 

printf("%d\n",sx);


return 0;
}
