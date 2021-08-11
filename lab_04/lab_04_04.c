#include <stdio.h>
int main(void)
{
   double a,b,c,d,y,z;
   int x;
   


   printf("Dwse arithmites\n");
   scanf("%lf %lf",&a,&b);
   printf("Dwse paronomastes\n");
   scanf("%lf %lf",&c,&d);
   do
   {
      printf("Dwse mia apo tis prakseis 1:+ , 2:- , 3:* , 4:/\n");
      scanf("%d",&x);

   }while(x!=1 && x!=2 && x!=3 && x!=4);
    
   switch(x)
   {
      case 1:
         y = (a*d)+(b*c);
         z = (c*d);
         printf("%.0f/%.0f\n",y,z);
      break;
      
      case 2:
         y = (a*d)-(b*c);
         z = (c*d);
         printf("%.0f/%.0f\n",y,z);
      break;
      
      case 3:
         y = a*b;
         z = c*d;
         printf("%.0f/%.0f\n",y,z);
      break;
      
      case 4:
         y = a*d;
         z = c*b;
         printf("%.0f/%.0f\n",z,y);
      break;

      default:
         printf("x should be within [1,4]\n");


   }
   

   return 0; 
} 
