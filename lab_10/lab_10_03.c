#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
int character(char str[], char x);
int main(void)
{
   int c;
   char x;
   char str[size];
   while (1)
      {
         printf("Enter text: ");
         fgets(str,sizeof(str),stdin);
         if(str[0]=='e' && str[1]=='n' && str[2]=='d')
            {
               break;
            }
         printf("Enter character: ");
         while ( (x=getchar()) != '\n' && x != EOF )
            {
               c=character(str,x);
               printf("Character exists %d time(s) in the text.\n",c);
            }
      }
   return 0;
}
int character(char str[], char x)
{
   int i,c=0;
   for(i=0;str[i]!='\0';i++)
      {
         if(str[i]==x)
            {
               c++;
            }
      }
   return c;
}
