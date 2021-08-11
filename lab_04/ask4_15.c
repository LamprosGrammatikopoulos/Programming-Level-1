#include<stdio.h>
int main(void)
{
int x,i,j,b;
printf("Dwste arithmo\n");
scanf("%d",&x);
for(i=0;i<x;i++)
{
 for(j=x; j>i; j--)     
 {
 for(b=0;b<x-1;b++)    /**/
 printf(" ");         /**/
 printf("* ");
 }
 printf("\n");
}
return 0;
}
