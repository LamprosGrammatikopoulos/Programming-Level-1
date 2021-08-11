#include <stdio.h>
#define size 5
int main(void)
{
int x[size],i,*ptr,j,a;
printf("Dwste arithmous\n");

for(i=0;i<size;i++)
{
 scanf("%d",&x[i]);
}
for(i=0;i<size;i++)
{
 a=x[i];
 for(j=i+1;j<size;j++)
 {
  if(a==x[j])
    x[j]=-99;
 }
}

for(i=0;i<size;i++)
{
ptr=&x[i];
printf("%d ",*ptr);
}
printf("\n");
return 0;
}


