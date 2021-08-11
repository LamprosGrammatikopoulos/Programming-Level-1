#include <stdio.h>
#define size 100
int main(void)
{

   int x[size],i,b=0,c=0,m=0;
   
   printf("Dwste 100 akeraious arithmous\n");
   
   for(i=size-1; i>=0; i--)
      {
         scanf("%d",&x[i]);
         m=m+x[i];
      }
        
   for(i=size-1; i>=0; i--)
      {
         if(x[i]>x[size-1])
            {
               c=c+1;
            }
         if(x[i]>(m/size))
             {
                b=b+1;
             }
      }
           
   printf("Arithmoi megaluteroi tou teleftaiou stoixeiou : %d\nArithmoi megaluteroi tou mesou orou twn stoixeiwn : %d\n",c,b);  

   return 0;

}
