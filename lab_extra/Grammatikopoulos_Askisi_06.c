#include <stdio.h>
#include <string.h>
#define size 100
void main()
{
   int smallest, secondsmallest;
   int array[size],i;
   printf("\nEnter %d elements.\n", size);
   for(i = 0;i<size;i++)
      {
         scanf("%d",&array[i]);
      }
   if(array[0]<array[1]) 
      {
         smallest=array[0];
         secondsmallest=array[1];
      }
   else
      {
         smallest = array[1];
         secondsmallest = array[0];
      }
   for(i=2;i<size;i++) 
      {
         if(array[i]<smallest) 
            {
               secondsmallest=smallest;
               smallest=array[i];
            }
         else if(array[i]<secondsmallest) 
            {
               secondsmallest=array[i];
            }
      }
   printf("Smallest element is : %d\n", smallest);
   printf("Second smallest element is : %d\n", secondsmallest);
}

