#include <stdio.h>
int main(void)
{
   int t,k,d,x,a;
   printf("Dwste tupo oxhmatos an to oxhma einai motosikleta pieste 1 an to oxhma einai autokinhto pieste 2\n");
   scanf("%d",&t);
   printf("Dwste kubika\n");
   scanf("%d",&k);
   printf("Dwste meres enoikiashs\n");
   scanf("%d",&d);
   printf("An thelete asfalish pieste 1\n");
   scanf("%d",&a);
    

   switch(t)
   {
      case 1:
      {
      if(k<=100 && (d==1))
      {
         x=30;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k<=100 && (d==2))
      {
         x=60;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k<=100 && (d==3))
      {
         x=60+25;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k<=100 && (d==4))
      {
         x=60+50;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k<=100 && (d==5))
      {
         x=60+75;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k<=100 && (d>=6))
      {
         x=60+75+(20 * (d-5));
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
            



      else if(k>100 && (d==1))
      {
         x=40;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k>100 && (d==2))
      {
         x=80;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k>100 && (d==3))
      {
         x=80+35;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k>100 && (d==4))
      {
         x=80+70;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k>100 && (d==5))
      {
         x=80+105;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k>100 && (d>=6))
      {
         x=80+105+(30 * (d-5));
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      break;
      }



      case 2:
      {
      if(k<=1000 && (d==1))
      {
         x=60;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k<=1000 && (d==2))
      {
         x=120;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k<=1000 && (d==3))
      {
         x=120+55;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k<=1000 && (d==4))
      {
         x=120+110;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k<=1000 && (d==5))
      {
         x=120+165;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k<=1000 && (d>=6))
      {
         x=120+165+(50 * (d-5));
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      



      else if(k>1000 && (d==1))
      {
         x=80;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k>1000 && (d==2))
      {
         x=140;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k>1000 && (d==3))
      {
         x=140+70;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k>1000 && (d==4))
      {
         x=140+140;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k>1000 && (d==5))
      {
         x=140+210;
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      else if(k>1000 && (d>=6))
      {
         x=140+210+(60 * (d-5));
         printf("Xoris asfalish h timh einai : %d\n",x);  
      }
      break;
      
      default:
      break;
      }

   }
 
   
    if(a==1)
   {
      x = x + (5*x/100);
      printf("Me asfalish h timh einai : %d\n",x);
   }  
   return 0;
}
