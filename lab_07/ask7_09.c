#include <stdio.h>
int main(void)
{
int x,y,let,dig,oth,s;
printf("Dwste synolo psifion\n");
let=0;
dig=0;
oth=0;
while((x=getchar())!='\n' && x!=EOF)
 {
  if(x=='*')
   {
    while((y=getchar())!='\n'&& y != EOF && y!='*')
       {
         if(y>=65 && y<=90 || y>=97 && y<=122)
           {
            let = let +1;
           }
          else if(y>=48 && y<=57)
           {
            dig=dig+1;
           }
          else if(y=='*')
           {
           break;
           }
          else
           {
            oth= oth+1;
           }
        }
    break;
   }
printf("-----\n");
}
if(let==0 && oth==0 && dig==0)
{
  printf("Den yparxoun 2 diadoxika **\n");
}
else 
{
 printf("Between first two stars  (letters:%d,    digits:%d,     others:%d,)",let,dig,oth);
}
return 0;
}
        
      
