#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
int main(void)
{
   int i;
   char str1[size]={0},str2[size]={0},str3[size]={0};
   char str4[size],str5[size],str6[size];
   printf("Enter first text: ");
   fgets(str1,sizeof(str1),stdin);
   printf("Enter second text: ");
   fgets(str2,sizeof(str2),stdin);
   printf("Enter third text: ");
   fgets(str3,sizeof(str3),stdin);
   strcpy(str4,str1);
   strcpy(str5,str2);
   strcpy(str6,str3);
   strcpy(str1,str3);
   strcpy(str2,str4);
   strcpy(str3,str5);
   printf("\n");
   printf("New first text: %s",str1);
   printf("New second text: %s",str2);
   printf("New third text: %s",str3);
   return 0;
}
