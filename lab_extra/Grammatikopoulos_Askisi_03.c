#include <stdio.h>
int main(void)
{
   int x,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
   printf("\n");
   printf("Dwste akeraious arithmous\n");
   while(1)
      {
         scanf("%d",&x);
         if(x==0)
            {
               break;
            }
         else if(x<0)
            {
               c1++;
               c3+=x;
               if(x%2!=0)
                  {
                     c5+=x;
                  }
               else if(x%2==0)
                  {
                     c6+=x;
                  }
            }
         else if(x>0)
            {
               c2++;
               c4+=x;
               if(x%2!=0)
                  {
                     c5+=x;
                  }
               else if(x%2==0)
                  {
                     c6+=x;
                  }
            }
      }
   printf("\n");
   printf("Plhthos arnithkwn akeraiwn : %d\n",c1);
   printf("Plhthos thetikwm akeraiwn : %d\n",c2);
   printf("Athroisma arnithkwn akeraiwn : %d\n",c3);
   printf("Athroisma thetikwn akeraiwn : %d\n",c4);
   printf("Athroisma perittwn akeraiwn : %d\n",c5);
   printf("Athroisma artiwn akeraiwn : %d\n",c6); 
   printf("\n");     
   return 0;
}
