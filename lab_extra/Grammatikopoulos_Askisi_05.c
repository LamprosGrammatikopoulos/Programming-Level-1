#include <stdio.h>
int main(void)
{
   int s1=4,s2=1,c=0;
   printf("\ns1={4,10,16,22,...}\n");
   printf("s2={1,8,15,22,...}\n");
   printf("\ns1=%d\n",s1);
   printf("s2=%d\n",s2);
   do
      {
         s1+=6;
         s2+=7;
         c++;
         printf("s1=%d\n",s1);
         printf("s2=%d\n",s2);
      }while(s2!=s1+100);
   printf("\nGia na exoume s2=s1+100 prepei na psostethoun %d oroi.\n\n",c);
   return 0;
}
