#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
int *p1,*p2,*p3;
void lol(char str[size]);
size_t strlen(const char *str);
int main(void)
{
   int i,len;
   char str[size]={0};
   printf("Enter text: ");
   fgets(str,sizeof(str),stdin);
   len=strlen(str);
   if(str[0]=='a' && str[len-2]=='q')
      {
         lol(str);
         printf("Arithmos pezwn grammatwn: %d\n",*p1);
         printf("Arithmos kefalaiwn grammatwn: %d\n",*p2);
         printf("Arithmos psifiwn: %d\n",*p3);
      }
   return 0;
}
void lol(char str[size])
{
   int x=0,y=0,z=0,i;
   for(i=0;i<size;i++)
      {
         if(str[i]>=97 && str[i]<=122)
            {
               x++;
            }
         else if(str[i]>=65 && str[i]<=90)
            {
               y++;
            }
         else if(str[i]>=48 && str[i]<=57)
            {
               z++;
            }
   p1=&x;
   p2=&y;
   p3=&z;   
      }
}
