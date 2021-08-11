#include <stdio.h>
int main(void)
{
   double a,b,c;
   printf("Dwste 3 times proiontwn\n");
   scanf("%lf %lf %lf",&a,&b,&c);
   ((a>100)||(b>100)||(c>100)) ? printf("Yparxei proion pou kostizei panw apo 100 euro\n") : printf("Den yparxei proion pou kostizei panw apo 100 euro\n");
   return 0; 
}
