#include <stdio.h>
int main(void)
{
   int *ptr1, *ptr2, *ptr3, a, b, c;
   
   ptr1=&a;
   ptr2=&b;
   ptr3=&c;

   do
      {
         printf("Dwste prwto arithmo\n");
         scanf("%d",ptr1);
      }while(*ptr1>=0);
   do
      {
         printf("Dwste deutero arithmo\n");
         scanf("%d",ptr2);
      }while(*ptr2>=0);
   do
      {
         printf("Dwste trito arithmo\n");
         scanf("%d",ptr3);
      }while(*ptr3>=0);
   
   if( (*ptr1 == *ptr2) && (*ptr2 == *ptr3) )
      printf("Oi arithmoi einai isoi\n"); 
   else if( (*ptr1 <= *ptr2) && (*ptr2 <= *ptr3) )
      printf("Oi arithmoi einai se diadoxikh auksousa seira\n");
   else
      printf("Oi arithmoi den einai se diadoxikh auksousa seira\n");

   return 0;
}
