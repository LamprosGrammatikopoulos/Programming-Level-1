#include <stdio.h>
int main(void)
{
printf("Dwse tipo oximatos\n");
char n,o;
double kos,K,H;
int x,y;
scanf("%d",&x);
switch(x)
{ 
 case 1:
 printf("Dwse kyvismo kai hmeres\n");
 scanf("%lf%lf",&K,&H);
 if (K<=100)
  if ((H>=1)&&(H<=2))
  {    
  kos = 30;
  }
  else if ((H>=3)&&(H<=5))
  {
  kos = 25;
  }
  else
  {
  kos = 20;
  }
 else if(K>100)
  if ((H>=1)&&(H<=2))
  {    
  kos = 40;
  }
  else if ((H>=3)&&(H<=5))
  {
  kos = 35;
  }
  else
  {
  kos = 30;
  }
 break;
 case 2:
 printf("Dwse kyvismo kai hmeres\n");
 scanf("%lf%lf",&K,&H);
 if (K<=1000)
  if ((H>=1)&&(H<=2))
  {    
  kos = 60;
  }
  else if ((H>=3)&&(H<=5))
  {
  kos = 55;
  }
  else
  {
  kos = 50;
  }
 else if(K>1000)
  if ((H>=1)&&(H<=2))
  {    
  kos = 80;
  }
  else if ((H>=3)&&(H<=5))
  {
  kos = 70;
  }
  else
  {
  kos = 60;
  }
 break;
}
printf("Tha thelate asfalish\n");
scanf("%d",&y);
if (y==1)
{
kos = kos+(kos*5)/100;
printf("%f\n",kos);
}
else if (y==0)
{
printf("%f\n",kos);
}
return 0;
}

