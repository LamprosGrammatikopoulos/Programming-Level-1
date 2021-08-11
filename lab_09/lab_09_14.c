#include <stdio.h>
#include <stdlib.h>
#define size 10
int main(void)
{
char str[size]={0};
int i,Spezwn=0,Skef=0;
printf("Dwste mynhma\n");
fgets(str,sizeof(str),stdin);
if(str[0]=='e' && str[1]=='n' && str[2]=='d')	
  {
       return 0;
  }
else
 {      
       for(i=0;i<size;i++)
	{
	  if(str[i]>=97 && str[i]<=122)
	     {
	       str[i]=str[i]-32;
	     }
          else if(str[i]>=65 && str[i]<=90)
	     {
	       str[i]=str[i]+32;
	     }
	}
	for(i=0;i<size;i++)
	{
	  if(str[i]>=97 && str[i]<=122)
	     {
		 Spezwn=Spezwn+1;
	     }
	   if(str[i]>=65 && str[i]<=90)
	     {
	       Skef=Skef+1;
	     }
	}
  printf("Plithos pezwn:%d\nPlithos kefalaiwn:%d\n",Spezwn,Skef);
  return 0;
 }
}

