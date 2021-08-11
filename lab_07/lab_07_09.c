#include <stdio.h>
int main(void)
{
   int g=0,p=0,a=0,x,y;
   printf("Dwste xarakthres\n");
   while((x=getchar())!='\n' && x!=EOF)
      {
         if(x=='*')
            {
               while((y=getchar())!='\n'&& y != EOF && y!='*')
                  {
                     if(y>=65 && y<=90 || y>=97 && y<=122)
                        {
                           g=g+1;
                        }
                     else if(y>=48 && y<=57)
                        {
                           p=p+1;
                        }
                     else if(y=='*')
                        {
                           break;
                        }
                     else
                        {
                           a=a+1;
                        }
                  }
                     break;
            }
      }

   if(g==0 && p==0 && a==0)
      {
         printf("Den yparxoun 2 diadoxika **\n");
      }
   else 
      {
         printf("Between first two stars  (letters:%d,   digits:%d,   other:%d)\n",g,p,a);
      }

return 0;
}
