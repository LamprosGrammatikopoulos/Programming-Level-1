#include <stdio.h>
int main(void)
{
   unsigned int x,n;
   printf("Dwse thetiko akeraio airthmo kai oktades bit tou arithmou apo to 1 mexri to 3\n");
   scanf("%d %d",&x,&n);
   x = ( x>>(8*n) | x<<(8*3*n) );
   printf("%d\n",x);

   


   return 0;
}
