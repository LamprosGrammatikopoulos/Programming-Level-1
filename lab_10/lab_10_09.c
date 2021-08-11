#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
int* lol(char str1[size], char str2[size]);
size_t strlen(const char *str);
int main(void)
{
   int i,*p;
   char str1[size]={0};
   char str2[size]={0};
   printf("Enter text 1: ");
   fgets(str1,sizeof(str1),stdin);
   printf("Enter text 2: ");
   fgets(str2,sizeof(str2),stdin);
   p=lol(str1,str2);
   printf("%d\n",*p);
   return 0;
}
int* lol(char str1[size], char str2[size])
{
   int *p,i,c=0,s=0,z=0,len1;
   len1=strlen(str1);
   for(i=0;i<len1-2;i++)
      {
         if(str1[i]==str2[i] && c!=0)
            {
               c=0;
               p=NULL;
            }
         else if(str1[i]!=str2[i])
            {
               c=c+1;
               if(z=0)
                  {
                     *p=str1[i];
                     s=c;
                     z++;
                  }             
               else if(z!=0 && s>=c)
                  {
                     *p=str1[i];
                     s=c;
                  }
            }          
      }
   return p;
}
