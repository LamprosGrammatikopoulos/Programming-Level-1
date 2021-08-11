#include<stdio.h>
int main(void)
{
int x,y,days,a,b;
printf("Dwste mhna kai arithmo\n");
scanf("%d%d",&x,&y);
a = x;
b = y;
if (x == 2) 
{
printf("Dwste hmeres Febr\n");
scanf("%d",&days);
}

if ((x%2==0)&&(x!=2))
{
 days = 30;
 }
 else if ((x%2!=0)&&(x!=2)) 
 {
 days = 31;
 }


if (y<12)
 if (days ==31) 
 {
 y= 50-(31-y);
 x= x+1;
 }
 else if (days == 30)
 {
 y = 50-(30-y); 
 x= x+1;
 }
else if (y>=12) 
 if (days == 31)
 {
 y = 50-30-(31-y);
 x=x+2;
 }
 else if (days == 30)
 {
 y = 50-31-(30-y);
 x=x+2;
 }


if (x==2)
 if (y<11)
  if (days == 29)
  {
  y = 50-(29-y);
  x = x+1;
  } 
  else if (days==28)
  {
  y = 50-(28-y);
  x = x+1;
  }
 else if (y>=11)    
    if (days == 29)
    {
    y = 50-28-(29-y);
    x = x+2;
    }
    else if (days == 28)
    {
    y = 50-29-(28-y);
    x = x+2;
    }  
 

if (a==12)
 if (b<12)
 {
 x = 1;
 }
 else if (b>=12)
 {
 x = 2;
 }

printf("%d/%d\n",x,y);
return 0;
}

   

