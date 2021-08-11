#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
void lol(char str[size]);
size_t strlen(const char *str);
int main(void)
{
   int i,len1,len2,x,y;
   char str1[size]={0};
   char str2[size]={0};
   printf("Enter text: ");
   fgets(str1,sizeof(str1),stdin);
   printf("Enter size of the part of the text that will be deleted in the text: ");
   scanf("%d",&x);
   printf("Enter position of the first character that will be deleted in the text: ");
   scanf("%d",&y);
   strcpy(str2,str1);
   len1=strlen(str1);
   len2=strlen(str2);
   for(i=0;i<size-2;i++)
      {
         if()
            {

            }  
      }
   strncpy(str2,str1,len1-y);
   printf("%s",str1);
   return 0;
}
