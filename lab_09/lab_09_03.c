#include <stdio.h>
#define size 5
int* lol(int arr[size]);
int main(void)
{
   int *o;
   int i,arr[size];
   printf("Dwste 100 akeraious arithmous\n");
   for(i=0;i<size;i++)
   {
      scanf("%d",&arr[i]);
   }
   o=lol(arr);
   printf("%d\n",*o);
   return 0;
}
int* lol(int arr[size])
{
   int *p;
   int b[size];
   int i,j,v,w=0,l=0,m=0;
   for(i=0;i<size;i++)
      {
         b[i]=arr[i];
      }
   for(i=0;i<size;i++)
      {
         v = 0;
         for(j=0;j<size;j++)
            {
               if(i!=j)
                  {
                     if(arr[i]==b[j])
                        { 
                           v=v+1;
                           if(v>w)
                              {
                                 w=v;
                                 l=arr[i];
                                 m=i;
                              }
                        }
                  }     
            }
         w=v;
      }
   p=&arr[m];
   if(l!=0)
      {
         return p;
      }
   else if(l==0)
      {
         return NULL;
      }
}
