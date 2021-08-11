#include <stdio.h>
#define size 4
int main(void)
{
double x[size],a[99],min;
int i,j;
printf("Dwste ekkato pragmatikous arithmous\n");
for(i=0;i<size;i++)
 {
 scanf("%lf",&x[i]);
 }

for(j=0;j<=size-1;j++)
 {
 a[j]=x[j+1]-x[j];
 if(a[j]<0)
 a[j]=a[j]*(-1);
 }

min=a[0];
for(j=0;j<size-1;j++)
{
if(min>a[j])
 min = a[j];
}

printf("%.2f\n",min);
return 0;
}
