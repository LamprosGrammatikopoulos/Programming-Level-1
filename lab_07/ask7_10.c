#include <stdio.h>
#define size 100
int main(void)
{
char x[size],y;
int i,j,s,sum;
sum=0;

while((y=getchar())!='\n' && y!='q' && y!=EOF)
{
  if(y=='q')                  /**/
   {                          /**/
    break;                    /**/
   }                          /**/
  s=0; 
  for(i=0;i<sum;i++)
   {
     if(y!=x[i])
         {
           s=s+1;
         }

   }

  if(s==sum)
   {
    x[sum]=y;
   }
  sum++;
}
for(i=0;i<size;i++)
 {
  printf("%c\n",x[i]);          /*na valoume putchar????????*/
 }
return 0;
}
