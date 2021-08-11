#include <stdio.h>
int main(void)
{
int ar1,ar2,p1,p2,x,a,b;
printf("Dwste arithmites\n");
scanf("%d%d",&ar1,&ar2);
printf("Dwste paronomastes\n");
scanf("%d%d",&p1,&p2);
do
{
 printf("Dwste arithmo praxis\n");
 scanf("%d",&x);
}while((x!=1)&&(x!=2)&&(x!=3)&&(x!=4)); 
switch (x)
 { 
 case 3:
  printf("%d/%d\n",ar1*ar2,p1*p2);
 break;
 case 4:
  printf("%d/%d\n",ar1*p2,ar2*p1);
 break; 
 case 2:
  a = (ar1*p2)-(ar2*p1);
  b = p1*p2;
  printf("%d/%d\n",a,b);
  break;
 case 1:
  a = (ar1*p2)+(ar2*p1);
  b = p1*p2;
  printf("%d/%d\n",a,b);
 break;
 }
return 0;
}
