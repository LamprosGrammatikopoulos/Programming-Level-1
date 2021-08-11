#include <stdio.h>
int main(void)
{
   char ch;
   while( ((ch=getchar())!='\n') && (ch!='q') && (ch!='0') && (ch!='1') && (ch!='2') && (ch!='3') && (ch!='4') && (ch!='5') && (ch!='6') && (ch!='7') && (ch!='8') && (ch!='9') && (ch!=EOF) )
      {
         putchar(ch);
      }
   putchar('\n');

   return 0;
}
