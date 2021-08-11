#include <stdio.h>
#define size1 3
#define size2 5
int main(void)
{
int x[size1][size2],i,j,y[size2],a,min,b;
printf("Dwste arithmous:\n");
for(i=0;i<size1-1;i++)
 {
  for(j=0;j<size2;j++)
   {
    scanf("%d",&x[i][j]);
   }
 }

printf("\n");  

for(j=0;j<size2;j++)
{
 /*a=0;
  for(i=0;i<size1-1;i++)
   {
    
    b=50-x[i][j]-a;
    a=b;
   
   }
x[size1-1][j]=a;*/

x[size1-1][j]=50-x[0][j]-x[1][j];

}
for(i=0;i<size1;i++)                  /**/
{
 for(j=0;j<size2;j++)                   /**/
  {                                       /**/
   printf("%d ",x[i][j]);
 }                                      /**/
printf("\n");
}                                   /**/

printf("\n");  

for(j=0;j<size2;j++)
{
 min=x[0][j];
  for(i=0;i<size1;i++)
   {
    if(x[i][j]<min)
      min=x[i][j];
   }
 y[j]=min;
}

printf("\n");     

for(j=0;j<size2;j++)
{
 printf("%d\n",y[j]);
}
return 0;
}    
        
