#include <stdio.h>
int main(void)
{
int a,b,c,d,x;
do
{
printf("Dwste tetrapsifio thetiko arithmo\n");
scanf("%d",&x);
a = x/1000;
b = x%10;
c = (x%100)/10;
d = (x%1000)/100;
((a==b)&&(c==d))?printf("Diavazete anapoda\n"):a++;
}while ((a!=b)&&(c!=d));
return 0;
}
