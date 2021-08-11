#include <stdio.h>
int main(void)
{
   int x,y,z,w,v;
   printf("Give current year\n");
   scanf("%d",&x);
   printf("Give human's birth date within [0,99]\n");
   scanf("%d",&y);

   while((x-y)<0 || (x-y)>99)
   {
      printf("Give human's birth date within [0,99]\n");
      scanf("%d",&y);
   }
   
   z=x-y;
   w=z/10;
   v=z%10;  
     
   switch(w)
   {
      case 0:
      printf("Zero");
      break;
      case 1:
      if(w==1 && v==0)
      {
         printf("Ten\n");
      }
      if(w==1 && v==1)
      {
         printf("Eleven\n");
      }
      if(w==1 && v==2)
      {
         printf("Twelve\n");
      }
      if(w==1 && v==3)
      {
         printf("Thirteen\n");
      }
      if(w==1 && v==4)
      {
         printf("Fourteen\n");
      }
      if(w==1 && v==5)
      {
         printf("Fifteen\n");
      }
      if(w==1 && v==6)
      {
         printf("Sixteen\n");
      }
      if(w==1 && v==7)
      {
         printf("Seventeen\n");
      }
      if(w==1 && v==8)
      {
         printf("Eighteen\n");
      }
      if(w==1 && v==9)
      {
         printf("Nineteen\n");
      }
      break;
      case 2:
      printf("Twenty");
      break;
      case 3:
      printf("Thirty");
      break;
      case 4:
      printf("Forty");
      break;
      case 5:
      printf("Fifty");
      break;
      case 6:
      printf("Sixty");
      break;
      case 7:
      printf("Seventy");
      break;
      case 8:
      printf("Eighty");
      break;
      case 9:
      printf("Ninety");
      break;
   }


   switch(v)
   {
      case 0:
      if(v==0 && w==1)
      {
         printf("Ten\n");
      }
      if(v==0 && w==2)
      {
         printf("Twenty\n");
      }
      if(v==0 && w==3)
      {
         printf("Thirty\n");
      }
      if(v==0 && w==4)
      {
         printf("Forty\n");
      }
      if(v==0 && w==5)
      {
         printf("Fifty\n");
      }
      if(v==0 && w==6)
      {
         printf("Sixty\n");
      }
      if(v==0 && w==7)
      {
         printf("Seventy\n");
      }
      if(v==0 && w==8)
      {
         printf("Eighty\n");
      }
      if(v==0 && w==9)
      {
         printf("Ninety\n");
      }
      break;
      case 1:
      printf("-one\n");
      break;
      case 2:
      printf("-two\n");
      break;
      case 3:
      printf("-three\n");
      break;
      case 4:
      printf("-four\n");
      break;
      case 5:
      printf("-five\n");
      break;
      case 6:
      printf("-six\n");
      break;
      case 7:
      printf("-seven\n");
      break;
      case 8:
      printf("-eight\n");
      break;
      case 9:
      printf("-nine\n");
      break;

   }

   return 0;
}

