#include <stdio.h>
int main(void)
{
int *arr[3],i,j,k,m,sum;
arr[0]=&i;
arr[1]=&j;
arr[2]=&k;
printf("Dwste treis arithmous\n");
scanf("%d%d%d",&(*arr[0]),&(*arr[1]),&(*arr[2]));
sum=0;
for(m=0;m<3;m++)
{
 if(*arr[m]%2==0)
  sum=sum+1;
}
printf("%d\n",sum);
return 0;
}
