#include <stdio.h>
int main(void)
{
int *p1,*p2,a,b,**ptr1,**ptr2,c;
p1=&a;
p2=&b;
ptr1=&p1;
ptr2=&p2;
printf("Dwste dyo akeraious arithmoys\n");
scanf("%d%d",&(**ptr1),&(**ptr2));
c=**ptr1;
**ptr1=**ptr2;
**ptr2=c;
printf("%d %d\n",**ptr1,**ptr2);
return 0;
}
