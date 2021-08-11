#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
 int num,n,i,pl=0,dig[100],yp,x;
 char str[100]={0};

	printf("\nDwse enan akeraio\n");
	scanf("%d", &num);
	n=num;
	do
	{
		n=n/10;
		pl++;
	}while(n!=0);
	printf("Digits: %d\n", pl);
	yp=num;
       
	for(i=pl;i>0;i--)
	{
	    
             x=yp%10;
            
             if(x==1)
               {
                 str[i-1]='1';
               }
	     else if(x==2)
	       {
                 str[i-1] = '2';
	       }
 	    else if(x==3)
	       {
                 str[i-1] = '3';
	       }
 	    else if(x==4)
	       {
                 str[i-1] = '4';
	       }
 	  else if(x==5)
	       {
                 str[i-1] = '5';
	       }
 	  else if(x==6)
	       {
                 str[i-1] = '6';
	       }
 	  else if(x==7)
	       {
                 str[i-1] = '7';
	       }
 	  else if(x==8)
	       {
                 str[i-1] = '8';
	       }
	   else if(x==9)
	       {
                 str[i-1] = '9';
	       }
 	  else if(x==0)
	       {
                 str[i-1] = '0';
	       }
          yp=yp/10;
       
	}
	printf("%s",str);
	return 0;
}
