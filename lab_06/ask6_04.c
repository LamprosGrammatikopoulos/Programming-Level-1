#include <stdio.h>
#define size1 3
#define size2 5
int main(void)
{
int x[size1][size2],i,j,s;
printf("Dwste arithmous\n");
for(i=0;i<size1;i++)
 {
  for(j=0;j<size2;j++)
  {
   scanf("%d",&x[i][j]);
  }
 }

for(j=0;j<size2;j++)
 {
  s=0;
  for(i=0;i<size1-1;i++)
   {
    if(x[i][j]!=x[i+1][j] && x[i][j]!=x[size1-1][j])
     {
      s=s+1;
      if(s==size1-1)
        for(i=0;i<size1;i++) 
        {
         printf("%d ",x[i][j]);
         }
       }
        
    }
 printf("\n");
}
return 0;
}
