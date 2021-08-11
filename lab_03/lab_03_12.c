#include <stdio.h>
int main(void)
{
   int a,b,c,d,e,f;
   printf("Dwse MAC diefthunsh\n");
   scanf("%x:%x:%x:%x:%x:%x",&a,&b,&c,&d,&e,&f);
   if( a == 255 && b == 255 && c == 255 && d == 255 && e == 255 && f == 255 )
      {
         printf("H diefthunsh einai broadcast\n");
      }
   else if( (a%2) == 0 )
      {
         printf("H diefthunsh einai unicast\n");
      }
   else if( (a%2) != 0 )
      {
         printf("H diefthunsh einai multicast\n");
      }


   return 0;

}
