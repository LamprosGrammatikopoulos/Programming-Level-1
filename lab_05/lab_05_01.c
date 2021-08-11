#include <stdio.h>
int main(void)
{
   int x,a,b,c,d,e,f,g,h,i,j,k;
   do
   {
      printf("Dwste thetiko akeraio\n");
      scanf("%d",&x);
   }while(x<=0);
   
   if(x>=1 && x<=9)
   {
      printf("O arithmos einai Armstrong\n");
   }
   
   else if(x>9 && x<=99)
   {
      a=x/10;
      b=x%10;
      if( (a*a)+(b*b)==x )
      {
         printf("O arithmos einai Armstrong\n");  
      }
      else
         printf("O arithmos den einai Armstrong\n");
   }
   
   else if(x>99 && x<=999)
   {
      a=x/100;
      b=x/10-10;
      c=x%10;
      if( (a*a*a)+(b*b*b)+(c*c*c)==x )
      {
         printf("O arithmos einai Armstrong\n");  
      }
      else
         printf("O arithmos den einai Armstrong\n");
   }

   else if(x>999 && x<=9999)
   {
      a=x/1000;
      b=x/100-10;
      c=x/10-110;
      d=x%10;
      if( (a*a*a*a)+(b*b*b*b)+(c*c*c*c)+(d*d*d*d)==x )
      {
         printf("O arithmos einai Armstrong\n");  
      }
      else
         printf("O arithmos den einai Armstrong\n");
   }

   else if(x>9999 && x<=99999)
   {
      a=x/10000;
      b=x/1000-10;
      c=x/100-110;
      d=x/10-1110;
      e=x%10;
      if( (a*a*a*a*a)+(b*b*b*b*b)+(c*c*c*c*c)+(d*d*d*d*d)+(e*e*e*e*e)==x )
      {
         printf("O arithmos einai Armstrong\n");  
      }
      else
         printf("O arithmos den einai Armstrong\n");
   }

   else if(x>99999 && x<=999999)
   {
      a=x/100000;
      b=x/10000-10;
      c=x/1000-110;
      d=x/100-1110;
      e=x/10-11110;
      f=x%10;
      if( (a*a*a*a*a*a)+(b*b*b*b*b*b)+(c*c*c*c*c*c)+(d*d*d*d*d*d)+(e*e*e*e*e*e)+(f*f*f*f*f*f)==x )
      {
         printf("O arithmos einai Armstrong\n");  
      }
      else
         printf("O arithmos den einai Armstrong\n");
   }

   else if(x>999999 && x<=9999999)
   {
      a=x/1000000;
      b=x/100000-10;
      c=x/10000-110;
      d=x/1000-1110;
      e=x/100-11110;
      f=x/10-111110;
      h=x%10;
      if( (a*a*a*a*a*a*a)+(b*b*b*b*b*b*b)+(c*c*c*c*c*c*c)+(d*d*d*d*d*d*d)+(e*e*e*e*e*e*e)+(f*f*f*f*f*f*f)+(h*h*h*h*h*h*h)==x )
      {
         printf("O arithmos einai Armstrong\n");  
      }
      else
         printf("O arithmos den einai Armstrong\n");  
   }

   else if(x>9999999 && x<=99999999)
   {
      a=x/10000000;
      b=x/1000000-10;
      c=x/100000-110;
      d=x/10000-1110;
      e=x/1000-11110;
      f=x/100-111110;
      h=x/10-1111110;
      i=x%10;
      if( (a*a*a*a*a*a*a*a)+(b*b*b*b*b*b*b*b)+(c*c*c*c*c*c*c*c)+(d*d*d*d*d*d*d*d)+(e*e*e*e*e*e*e*e)+(f*f*f*f*f*f*f*f)+(h*h*h*h*h*h*h*h)+(i*i*i*i*i*i*i*i)==x )
      {
         printf("O arithmos einai Armstrong\n");  
      }
      else
         printf("O arithmos den einai Armstrong\n");  
   }

   else if(x>99999999 && x<=999999999)
   {
      a=x/100000000;
      b=x/10000000-10;
      c=x/1000000-110;
      d=x/100000-1110;
      e=x/10000-11110;
      f=x/1000-111110;
      h=x/100-1111110;
      i=x/10-11111110;
      j=x%10;
      if( (a*a*a*a*a*a*a*a*a)+(b*b*b*b*b*b*b*b*b)+(c*c*c*c*c*c*c*c*c)+(d*d*d*d*d*d*d*d*d)+(e*e*e*e*e*e*e*e*e)+(f*f*f*f*f*f*f*f*f)+(h*h*h*h*h*h*h*h*h)+(i*i*i*i*i*i*i*i*i)==x )
      {
         printf("O arithmos einai Armstrong\n");  
      }
      else
         printf("O arithmos den einai Armstrong\n");  
   }
   
   else if(x>999999999 && x<=9999999999)
   {
      a=x/1000000000;
      b=x/100000000-10;
      c=x/10000000-110;
      d=x/1000000-1110;
      e=x/100000-11110;
      f=x/10000-111110;
      h=x/1000-1111110;
      i=x/100-11111110;
      j=x/10-111111110;
      k=x%10;
      if( (a*a*a*a*a*a*a*a*a*a)+(b*b*b*b*b*b*b*b*b*b)+(c*c*c*c*c*c*c*c*c*c)+(d*d*d*d*d*d*d*d*d*d)+(e*e*e*e*e*e*e*e*e*e)+(f*f*f*f*f*f*f*f*f*f)+(h*h*h*h*h*h*h*h*h*h)+(i*i*i*i*i*i*i*i*i*i)+(k*k*k*k*k*k*k*k*k*k)==x )
      {
         printf("O arithmos einai Armstrong\n");  
      }
      else
         printf("O arithmos den einai Armstrong\n");  
   }




   return 0;
}
