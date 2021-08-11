#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
size_t strlen(const char *str);
int main(void)
{
   int i,len;
   char str[size]={0};
   printf("Enter text: ");
   fgets(str,sizeof(str),stdin);
   len=strlen(str);
   if(str[len-2]=='a' && str[len-3]=='a')
      {
         for(i=len-2;i>=0;i--)
            {
               printf("%c",str[i]);
            }
         printf("\n");
      }
   return 0;
}
