#include <stdio.h>
int main(void)
{
int x,a,b,c,d,e,YP1,YP2,YP3,YP4;
do
{
printf("Dwste arithmo\n");
scanf("%d",&x);
}while((x<-100000)&&(x>100000));
e = x%10;
YP1 = x/10;
d = YP1%10;
YP2 = x/100;
c = YP2%10;
YP3 = x/1000;
b = YP3%10;
YP4 = x/10000;
a = YP4%10;
printf("%d   %d    %d    %d     %d\n",a,b,c,d,e);
if(x<0)
printf("minus ");

switch(a)
{
case 1:
 printf("one ");
break;
case 2:
printf("two ");
break;
case 3:
printf("three ");
break;
case 4:
printf("four ");
break;
case 5:
printf("five ");
break;
case 6:
printf("six ");
break;
case 7:
printf("seven ");
break;
case 8:
printf("eight ");
break;
case 9:
printf("nine ");
break;
case -1:
 printf("one ");
break;
case -2:
printf("two ");
break;
case -3:
printf("three ");
break;
case -4:
printf("four ");
break;
case -5:
printf("five ");
break;
case -6:
printf("six ");
break;
case -7:
printf("seven ");
break;
case -8:
printf("eight ");
break;
case -9:
printf("nine ");
break;

}

switch(b)
{
case 0:
if(a==0)
break;
else if(a!=0)
   printf("zero ");
break;
case 1:
 printf("one ");
break;
case 2:
printf("two ");
break;
case 3:
printf("three ");
break;
case 4:
printf("four ");
break;
case 5:
printf("five ");
break;
case 6:
printf("six ");
break;
case 7:
printf("seven ");
break;
case 8:
printf("eight ");
break;
case 9:
printf("nine ");
break;
case -1:
 printf("one ");
break;
case -2:
printf("two ");
break;
case -3:
printf("three ");
break;
case -4:
printf("four ");
break;
case -5:
printf("five ");
break;
case -6:
printf("six ");
break;
case -7:
printf("seven ");
break;
case -8:
printf("eight ");
break;
case -9:
printf("nine ");
break;
}

switch(c)
{
case 0:
if(a==0 && b==0)
break;
else if(a!=0 && b==0)
   printf("zero ");
else if(a!=0 && b!=0)
   printf("zero ");
else if(a==0 && b!=0)
   printf("zero ");
break;
case 1:
 printf("one ");
break;
case 2:
printf("two ");
break;
case 3:
printf("three ");
break;
case 4:
printf("four ");
break;
case 5:
printf("five ");
break;
case 6:
printf("six ");
break;
case 7:
printf("seven ");
break;
case 8:
printf("eight ");
break;
case 9:
printf("nine ");
break;
case -1:
 printf("one ");
break;
case -2:
printf("two ");
break;
case -3:
printf("three ");
break;
case -4:
printf("four ");
break;
case -5:
printf("five ");
break;
case -6:
printf("six ");
break;
case -7:
printf("seven ");
break;
case -8:
printf("eight ");
break;
case -9:
printf("nine ");
break;
}

switch(d)
{
case 0:
if(a==0 && b==0 && c==0)
break;
else if(a==0 && b==0 && c!=0)
   printf("zero");
else if(a!=0 && b==0 && c==0)
   printf("zero ");
else if(a!=0 && b==0 && c!=0)
   printf("zero ");
else if(a!=0 && b!=0 && c==0)
   printf("zero ");
else if(a!=0 && b!=0 && c!=0)
   printf("zero ");
else if(a==0 && b!=0 && c==0)
   printf("zero ");
else if(a==0 && b!=0 && c!=0)
   printf("zero ");
break;
case 1:
printf("one ");
break;
case 2:
printf("two ");
break;
case 3:
printf("three ");
break;
case 4:
printf("four ");
break;
case 5:
printf("five ");
break;
case 6:
printf("six ");
break;
case 7:
printf("seven ");
break;
case 8:
printf("eight ");
break;
case 9:
printf("nine ");
break;
case -1:
 printf("one ");
break;
case -2:
printf("two ");
break;
case -3:
printf("three ");
break;
case -4:
printf("four ");
break;
case -5:
printf("five ");
break;
case -6:
printf("six ");
break;
case -7:
printf("seven ");
break;
case -8:
printf("eight ");
break;
case -9:
printf("nine ");
break;
}


switch(e)
{
case 0:
if (a==0 && b==0 && c==0 && d==0)
printf("zero ");
else
printf("zero ");
break;
case 1:
printf("one ");
break;
case 2:
printf("two ");
break;
case 3:
printf("three ");
break;
case 4:
printf("four ");
break;
case 5:
printf("five ");
break;
case 6:
printf("six ");
break;
case 7:
printf("seven ");
break;
case 8:
printf("eight ");
break;
case 9:
printf("nine ");
break;
case -1:
 printf("one ");
break;
case -2:
printf("two ");
break;
case -3:
printf("three ");
break;
case -4:
printf("four ");
break;
case -5:
printf("five ");
break;
case -6:
printf("six ");
break;
case -7:
printf("seven ");
break;
case -8:
printf("eight ");
break;
case -9:
printf("nine ");
break;
}

return 0;
}

