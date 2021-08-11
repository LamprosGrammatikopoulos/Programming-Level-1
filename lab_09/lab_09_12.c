#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define rows 4
#define cols 4
#define size 10
int main(void)
{
   int a[size],b[rows][cols],n,i=0,j=0,k=0,c1=0,c2=0,x;
   printf("\n");
   srand(time(NULL));
   printf("Eisagete ews deka arithmous ston pinaka.\n");
   printf("Dwste arnitiko arithmo gia termatismo eisagwghs arithmwn.\n");
//gemizo ton a[10] me 0
   for(k=0;k<size;k++)
      {
         a[k]=0;
      }
//gemizo ton a[10] me ta n stoixeia
   for(k=0;k<size;k++)
      {
         printf("a[%d]=",k);
         scanf("%d",&a[k]);
         if(a[k]<0)
            {
               break;
            }
      }
//ektupwnw ton a[10]
   printf("\nPinakas a[10]:\n");
   for(k=0;k<size;k++)
      {
         if(k!=0)
            {
               printf(",");
            }
         printf("a[%d]=%d",k,a[k]);
      }
//gemizo ton b[4][4] me tuxaia stoixeia kai ton ektupwnw
   printf("\n\nPinakas b[4][4]:\n\n");
   for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
            {
               b[i][j]=10+rand()%89;
               printf("%3d",b[i][j]);
            }
         printf("\n");
      }
//epilego mia tuxaia timh tou a[10] kai elegxw an afth uparxei sthn kuria h sthn defterevousa diagwnio tou b[4][4]
   printf("\n\n");
   x=rand()%size;
   printf("Tuxaios arithmos apo ton pinaka a[10] : a[%d]=%d\n\n",x,a[x]);
   for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
            {
               if(i==j)
                  {
                     if(b[i][j]==a[x])
                        {
                           printf("Thesh stoixeiou sthn kuria diagwnio : b[%d][%d]\n",i,j);
                           c1++;
                        }
                  }
               else if(i+j==rows)
                  {
                     if(b[i][j]==a[x])
                        {
                           printf("Thesh stoixeiou sthn defterevousa diagwnio : b[%d][%d]\n",i,j);
                           c2++;
                        }
                  }
            }
      }
   if(c1==0 && c2==0)
      {
         printf("Den vrethike o tuxaios aithmos tou pinaka a[10] oute sthn kuria, oute sthn defterevousa diagwnio tou pinaka b[4][4]\n\n");
      }
   return 0;
}
