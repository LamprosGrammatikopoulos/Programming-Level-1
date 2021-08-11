#include <stdio.h>
#define size 10 
int main(void)
{
   int a[size],i,ch; 
   for(i=0;i<size;i++)
      {
         if( ((ch=getchar())!='\n') && (ch!='0') && (ch!='1') && (ch!='2') && (ch!='3') && (ch!='4') && (ch!='5') && (ch!='6') && (ch!='7') && (ch!='8') && (ch!='9') && (ch!=EOF) )
            {
               a[i]=ch;
            }  
      }
   for(i=0;i<size;i++)
      {
         putchar(a[i]);
         putchar('\n');
      }

   return 0;
}
