#include <stdio.h>
void orthparal(double a, double b);
int main(void)
{
   double a,b;
   printf("Dwste mhkh plevrwn enos orthogwniou parallhlogrammou\n");
   scanf("%lf %lf",&a,&b);
   orthparal(a,b);
   return 0;
}

void orthparal(double a, double b)
{
   double e,p;
   e=a*b;
   p=(2*a)+(2*b);
   printf("Embadon parallhlogrammou : %f\nPerimetros parallhlogrammou : %f\n",e,p);

}
