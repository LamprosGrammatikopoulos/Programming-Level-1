#include <stdio.h>
#define size 5
void elegxos(float x);
int main(void)
{
int i;
float a;
printf("Dwste 5 vatmous\n");
for(i=0;i<size;i++)
{
  scanf("%f",&a);
  elegxos(a);
}
return 0;
}
void elegxos(float a)
{
 if(a>18 && a<=20)
   {
    printf("Excellent\n");
   }
 else if(a>16 && a<=18)
   {
    printf("Very Good\n");
   }
  else if(a>13 && a<=16)
   {
    printf("Good\n");
   }
  else if(a>=10 && a<=13)
   {
    printf("Dangerous Zone\n");
   }
  else 
   {
    printf("Need Help\n");
   }
} 
