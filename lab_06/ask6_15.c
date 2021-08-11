#include <stdio.h>
int main (void)
{
   int *p,arr[]={10,20,30,40};
   for(p=(arr+3); p>=arr; p--)
     {
         printf("%d\n",*p);
     }


return 0;
}
