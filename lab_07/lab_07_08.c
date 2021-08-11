#include <stdio.h>
int main(void)
{
   int ch;
   while( ((ch=getchar())!='\n') && (ch!=EOF) )
      {
         if( ((ch>='a') && (ch<='z')) || ((ch>='A') && (ch<='Z')) )
            {
               if( ((ch>='a') && (ch<='u')) || ((ch>='A') && (ch<='U')) )
                  { 
                     ch=ch+5;
                  }
               else if( ((ch>'u') || (ch>'U')) )
                  {
                     ch='a'+(ch-'u'-1);
                  }
            }
         putchar(ch);
      }
   putchar('\n');
   return 0;
}
