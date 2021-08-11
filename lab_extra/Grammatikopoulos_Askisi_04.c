#include <stdio.h>
int main(void)
{
   int a,b,c,x,y=0;
   printf("Dwste treis akeraious arithmous.\n");
   scanf("%d %d %d",&a,&b,&c);
   do
      {
         printf("Pieste 1 h 2 h 3\n");
         scanf("%d",&x);
      }while(x!=1 && x!=2 && x!=3);
   switch(x)
      {
         case 1:
            {
               if(a!=b && a!=c && b!=c)
                  {
                     printf("Oi akeraioi einai diaforetikoi.\n");
                  }
               break;
            }
         case 2:
            {
               if(a==b)
                  {
                     printf("O prwtos arithmos einai isos me ton deutero arithmo.\n");
                  }
               else if(a==c)
                  {
                     printf("O prwtos arithmos einai isos me ton trito arithmo.\n");
                  }
               else if(b==c)
                  {
                     printf("O deutertos arithmos einai isos me ton trito arithmo.\n");
                  }
               else
                  {
                     printf("Kanenas apo tous 3 akeraious arithmous den einai isos me kapoion allo.\n");
                  }
               break;
            }
         case 3:
            {
               if(a>=-3 && a<=3)
                  {
                     y++;
                  }
               if(b>=-3 && b<=3)
                  {
                     y++;
                  }
               if(c>=-3 && c<=3)
                  {
                     y++;
                  }
               printf("Apo tous 3 aritmous %d arithmos/oi anhkoun sto [-3,3].\n",y);
               break;
            }
         default :
            {
               break;
            }
      }
   return 0;
}
