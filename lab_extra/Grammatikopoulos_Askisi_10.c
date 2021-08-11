#include <stdio.h>
#define rows 3
#define cols 3
int main(void)
{
   int i,j,a[rows][cols],c1=999999999,c2=-999999999,c3=0;
   printf("Dwste 9 akeraious arithmous.\n");
   for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
            {  
               c3++; 
               scanf("%d",&a[i][j]);
               if(a[i][j]<c1)
                  {
                     c1=a[i][j];
                  }                  
               else if(i==j && a[i][j]>=c2)
                  {
                     c2=a[i][j]; 
                  }   
            }
      }
   printf("\n");
   for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
            {    
               printf("%3d ",a[i][j]);   
            }
         printf("\n");
      }
   for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
            {    
               if(a[i][j]==c1)
                  {
                        printf("\nThesh elaxistou stoixeiou tou pinaka : a[%d][%d]\n",i,j);  
                  }   
            }
      }
   printf("\n");
   printf("Megisto stoixeio kurias diagwniou tou pinaka : %d\n",c2);
   printf("\n");
   return 0;
}
