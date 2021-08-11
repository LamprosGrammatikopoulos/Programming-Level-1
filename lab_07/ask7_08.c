#include <stdio.h>
int main(void)
{
int x;
printf("Dwste ena synolo xaraktirwn\n");
while((x=getchar()) !='\n' && x !=EOF)
{
 if(x>=65 && x<=90 || x>=97 && x<=122)
   x=x+5;
printf("%c",x);
}
return 0;
}
