#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 1000
int main(void)
{
   int i,zari[size],c1,c2,c3;
   srand(time(NULL));
   printf("\n1000 ripseis zariou:\n\n");
   for(i=0;i<size;i++)
      {
         zari[i]=1+rand()%6;
         if(zari[i]%2!=0)
            {
               c1++;
            }
         else if(zari[i]<=2)
            {
               c2++;
            }
         else if(i!=0 && zari[i]==zari[i-1])
            {
               c3++;
            }
      }
   for(i=0;i<size;i++)
      {
         printf("%d",zari[i]); 
      }
   printf("\n\n");
   printf("Sunolikos arithmos ripsewn zariou me peritto apotelesma:%d\n",c1);
   printf("Sunolikos arithmos ripsewn zariou me apotelesma mikrotero h iso tou duo:%d\n",c2);
   printf("Sunolikos arithmos sunexomenwn ripsewn zariou me to idio apotelesma:%d\n",c3);
   printf("\n");
   return 0;
}
