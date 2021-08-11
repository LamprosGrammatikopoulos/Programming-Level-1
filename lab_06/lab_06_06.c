#include <stdio.h>
#define p 10
#define d 50
int main(void)
{
   int x[p][d],i,j,n;

   for(i=0;i<p;i++)
      {  
         for(j=0;j<d;j++)
            {
               x[i][j]=0;
            }
      } 
   while(1)
      {  
         printf("Pieste 1 gia : Emfanish twn eleutherwn dwmatiwn se kathe pteruga.\n");
         printf("Pieste 2 gia : Krathsh dwmatiou.\n");
         printf("Pieste 3 gia : Akurwsh krathshs.\n");
         printf("Pieste 4 gia : Termatismos programmatos.\n");
   
   do
      {
         scanf("%d",&n);  
      }while(n!=1 && n!=2 && n!=3 && n!=4);

   switch(n)
      {
         case 1:
            {
               for(i=0;i<p;i++)
                  {  
                     for(j=0;j<d;j++)
                        {
                           if(x[i][j]==0)
                              {
                                 printf("Sthn pteruga : %d eleuthero dwmatio : %d\n",i+1,j+1);
                              }
                        }
                  }
                  break;   
            }

         case 2:
            {
               for(i=0;i<p;i++)
                  {
                     printf("Dwste arithmo pterugas\n");
                     scanf("%d",&i);
                     for(j=0;j<d;j++)
                        {
                           if(x[i][j]==0)
                              {
                                 x[i][j]==1;
                                 printf("H krathsh kataxwri8hke epituxws\n");
                                 break;  
                              }
                        }
                      if(x[i][j]!=0)
                        {
                           printf("Pteruga gemath, dwste allon arithmo pterugas\n");
                           scanf("%i",&i);
                        }
                     break; 
                  }      
                  break;    
            }

         /*case 2:
            {
                  printf("Dwste arithmo pterugas\n");
                  scanf("%d",&i);
                  for(j=0;j<d;j++)
                     {
                        if(x[i][j]==0)
                           {
                              x[i][j]==1;
                              printf("H krathsh kataxwri8hke epituxws\n");
                              break;  
                           }
                        else if(x[i][j]!=0)
                           {
                              printf("Pteruga gemath, dwste allon arithmo pterugas\n");
                              scanf("%i",&i);
                           }
                     }
                  break;          
            }*/


         case 3:
            { 
                  printf("Dwste arithmo pterugas kai arithmo dwmatiou gia akurwsh krathshs\n");
                  do
                     {
                        scanf("%d %d",&i,&j);
                        if(x[i][j]==0)
                           {
                              printf("To dwmatio einai hdh eleuthero epilekste allo dwmatio gia akurwsh krathshs\n"); 
                           }
                        else if(x[i][j]!=0)
                           {
                              x[i][j]=0;
                              printf("H krathsh akurwthike epituxws\n");
                           }
                     }while(x[i][j]==0);
                  break;   
            }

         case 4:
            { 
                  break;  
            }

         default:
            {
            }

      }
   }

   return 0;
}
