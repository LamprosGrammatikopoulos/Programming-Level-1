#include <stdio.h>
int main(void)
{
   int *ptr1, *ptr2, *ptr3, a, b, c;
   
   ptr1=&a;
   ptr2=&b;
   ptr3=&c;

   do
      {
         printf("Dwste tous akeraious arithmous me fthinousa seira\n");
         printf("Dwste proto akeraio arithmo\n");
         scanf("%d",ptr1);
         printf("Dwste deutero akeraio arithmo\n");
         scanf("%d",ptr2);
         printf("Dwste trito akeraio arithmo\n");
         scanf("%d",ptr3);
      }while( (*ptr1 <= *ptr2) || (*ptr2 <= *ptr3) && (*ptr1 != *ptr2 != *ptr3) );

printf("Oi arithmoi eishx8hsan me fthinousa seira kai htan oi : %d %d %d\n",*ptr1,*ptr2,*ptr3);

   return 0;
}
