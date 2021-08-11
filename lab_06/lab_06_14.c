#include <stdio.h>
#define size 5
int main(void)
{
   int *ptr, arr[size];
   for(ptr = arr;ptr<(arr+size);ptr++)
      {
         do
            {
               printf("Dwse arithmo\n");
               scanf("%d",ptr);
               if(*ptr == 0)
                  {
                     break;
                  }
               else if(*ptr == -1)
                  {
                     continue;
                  }
            }while(*ptr==-1 || *ptr>=*(ptr-1));

         if(*ptr == 0)
            { 
               break;
            }
      }

   printf("\n");

   for(ptr=arr;(*ptr!=0 && ptr<(arr+size));ptr++)
      {
         printf("%d \n",*(ptr));
      }

   return 0;
}
