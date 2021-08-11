#include <stdio.h>
#define size 5
int main(void)
{
   int *p1, *p2, *p3, i, num, min, max;
   
   p1=&num;
   p2=&min;
   p3=&max;

   printf("Dwste 100 akeraious arithmous\n");  

   min=0;
   max=0;

   for(i=0;i<size;i++)
      {
         num = *p1;
         scanf("%d",p1);
         if(*p1<=num && *p1<-5)
            {
               *p2 = *p1;       
            }
         else if(*p1>=num && *p1>10)
            {
               *p3 = *p1;       
            }
      }

   if(*p3>=10 && *p2<=-5)
      {
         printf("Mikroteros arithmos pou einai kai tautoxrona mikroteros tou -5 : %d\n",*p2);
         printf("Megaluteros arithmos pou einai kai tautoxrona megaluteros tou 10 : %d\n",*p3);
      }
   else if(*p3<10 && *p2>-5)
      {
         printf("Kanenas arithmos mikroteros apo -5 h megaluteros apo 10\n");
      }

   return 0;
} 
