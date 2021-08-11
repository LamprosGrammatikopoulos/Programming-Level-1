#include <stdio.h>
int main(void)
{
   float *p1, *p2, a,b;
   printf("Dwste duo arithmous tupou float\n");
   scanf("%f %f",&a,&b);
   p1=&a;
   p2=&b;
   
   if( ( *p1>0 && *p2<0 ) || ( *p1<0 && *p2>0 ) )
      {
         printf("%f\n",(*p1) * (*p2) );
      }
   else if( ( *p1>0 && *p2>0 ) || ( *p1<0 && *p2<0 ) || ( *p1==0 && *p2==0 ) )
      {
         printf("%f\n",*p1 / *p2 );
      }
   else if( *p1==0 || *p2==0 )
      {
         printf("Oi arithmoi den einai oute eteroshmoi oute omoshmoi \n");
      }

   return 0;
}
