#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define size 8
void lol(char str[size]);
size_t strlen(const char *str);
int main(void)
{
   int i,len,res=0,c=0,z=0,v;
   char str[size]={0};
   char x;
   printf("Enter up to an 8-bit hex number: ");
   fgets(str,sizeof(str),stdin);
   len=strlen(str);
   v=len-2;
   for(i=0;i<len-1;i++)
      {
         if ( (str[i]>=48) && (str[i]<=57) ) //arithmoi
            {
               if(str[i]==48)
                  {
                     z=0;
                     c=z*pow(16,v);
                  }
               else if(str[i]==49)
                  {
                     z=1;
                     c=z*pow(16,v);	
                  }
               else if(str[i]==50)
                  {
                     z=2;
                     c=z*pow(16,v);
                  }
               else if(str[i]==51)
                  {
                     z=3;
                     c=z*pow(16,v);
                  }
               else if(str[i]==52)
                  {
                     z=4;
                     c=z*pow(16,v);
                  }
               else if(str[i]==53)
                  {
                     z=5;
                     c=z*pow(16,v);
                  }if(str[i]==54)
                  {
                     z=6;
                     c=z*pow(16,v);
                  }
               else if(str[i]==55)
                  {
                     z=7;
                     c=z*pow(16,v);	
                  }
               else if(str[i]==56)
                  {
                     z=8;
                     c=z*pow(16,v);
                  }
               else if(str[i]==57)
                  {
                     z=9;
                     c=z*pow(16,v);
                  }
            }
         else if( (str[i]>=65) && (str[i]<=70) ) //kefalaia
            {
               if(str[i]==65)
                  {
                     z=10;
                     c=z*pow(16,v);
                  }
               else if(str[i]==66)
                  {
                     z=11;
                     c=z*pow(16,v);	
                  }
               else if(str[i]==67)
                  {
                     z=12;
                     c=z*pow(16,v);
                  }
               else if(str[i]==68)
                  {
                     z=13;
                     c=z*pow(16,v);
                  }
               else if(str[i]==69)
                  {
                     z=14;
                     c=z*pow(16,v);
                  }
               else if(str[i]==70)
                  {
                     z=15;
                     c=z*pow(16,v);
                  }                
            }
         else if( (str[i]>=97) && (str[i]<=102) ) //mikra
            {
               if(str[i]==97)
                  {
                     z=10;
                     c=z*pow(16,v);
                  }
               else if(str[i]==98)
                  {
                     z=11;
                     c=z*pow(16,v);	
                  }
               else if(str[i]==99)
                  {
                     z=12;
                     c=z*pow(16,v);
                  }
               else if(str[i]==100)
                  {
                     z=13;
                     c=z*pow(16,v);
                  }
               else if(str[i]==101)
                  {
                     z=14;
                     c=z*pow(16,v);
                  }
               else if(str[i]==102)
                  {
                     z=15;
                     c=z*pow(16,v);
                  }          
            }
         else
            {
               break;           
            }
         v=v-1;
         res=res+c;
      }
   printf("Decimal number: %d\n",res);
   return 0;
}
