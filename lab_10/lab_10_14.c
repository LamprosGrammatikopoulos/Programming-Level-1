#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
size_t strlen(const char *str);
int main(void)
{
   int i,len;
   double a,c,b=0,s=0;
   char str[size]={0};
   printf("Enter text : ");
   fgets(str,sizeof(str),stdin);
   len=strlen(str);
   if (len==11)
      {
         a=100000000;
         c=1000000000;
      }
   else if (len==10)
      {
         a=10000000;
         c=100000000;
      }
   else if (len==9)
      {
         a=1000000;
         c=10000000;
      }
   else if (len==8)
      {
         a=100000;
         c=1000000;
      }
   else if (len==7)
      {
         a=10000;
         c=100000;
      }
   else if (len==6)
      {
         a=1000;
         c=10000;
      }
   else if (len==5)
      {
         a=100;
         c=1000;
      }
   else if (len==4)
      {
         a=10;
         c=100;
      }
   else if (len==3)
      {
         a=1;
         c=10;
      }
   else if (len==2)
      {
         a=0;
         c=1;
      }
   else if (len==1)
      {
         a=0;
         c=0;
      }
   else if (len==0)
      {
         a=0;
         c=0;
      }

   for(i=0;i<size-2;i++)
      {
         if(str[0]==45)
            {
               if(i!=0)
                  {  
                     if(str[i]==48)
                        {
                           b=0*a;
                           a=a/10;
                           s=s+b;
                        }
                     if(str[i]==49)
                        {
                           b=1*a;
                           a=a/10;
                           s=s+b;
                        }
                     if(str[i]==50)
                        {
                           b=2*a;
                           a=a/10;
                           s=s+b;
                        }
                     if(str[i]==51)
                        {
                           b=3*a;
                           a=a/10;
                           s=s+b;
                        }
                     if(str[i]==52)
                        {
                           b=4*a;
                           a=a/10;
                           s=s+b;
                        }
                     if(str[i]==53)
                        {
                           b=5*a;
                           a=a/10;
                           s=s+b;
                        }
                     if(str[i]==54)
                        {
                           b=6*a;
                           a=a/10;
                           s=s+b;
                        }
                     if(str[i]==55)
                        {
                           b=7*a;
                           a=a/10;
                           s=s+b;
                        }
                     if(str[i]==56)
                        {
                           b=8*a;
                           a=a/10;
                           s=s+b;
                        }
                     if(str[i]==57)
                        {
                           b=9*a;
                           a=a/10;
                           s=s+b;
                        } 
                  }
            }
         else if(str[0]!=45)
            {
               if(str[i]==48)
                  {
                     b=0*c;
                     c=c/10;
                     s=s+b;
                  }
               if(str[i]==49)
                  {
                     b=1*c;
                     c=c/10;
                     s=s+b;
                  }
               if(str[i]==50)
                  {
                     b=2*c;
                     c=c/10;
                     s=s+b;
                  }
               if(str[i]==51)
                  {
                     b=3*c;
                     c=c/10;
                     s=s+b;
                  }
               if(str[i]==52)
                  {
                     b=4*c;
                     c=c/10;
                     s=s+b;
                  }
               if(str[i]==53)
                  {
                     b=5*c;
                     c=c/10;
                     s=s+b;
                  }
               if(str[i]==54)
                  {
                     b=6*c;
                     c=c/10;
                     s=s+b;
                  }
               if(str[i]==55)
                  {
                     b=7*c;
                     c=c/10;
                     s=s+b;
                  }
               if(str[i]==56)
                  {
                     b=8*c;
                     c=c/10;
                     s=s+b;
                  }
               if(str[i]==57)
                  {
                     b=9*c;
                     c=c/10;
                     s=s+b;
                  }            
            }
      }
   if(str[0]==45)
      {
         printf("%.0f\n",-s);
      }
   else if(str[0]!=45)
      {
         printf("%.0f\n",s);
      }
   return 0;
}
