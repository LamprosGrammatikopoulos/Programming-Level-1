#include <stdio.h>
#define size 10
int main(void)
{
   int x,i,a,fr0=0,fr1=0,fr2=0,fr3=0,fr4=0,fr5=0,fr6=0,fr7=0,fr8=0,fr9=0,fr10=0;
   printf("Dwste 100 akeraious vathmous foithtwn\n");
   for(i=1; i<=size; i=i+1)
      {
        
         do
            {
               scanf("%d",&x);              
            }while(x<0 || x>10); 

         switch(x)
            {
	       case 0:
                  {
                     fr0=fr0+1;
                     break;
                  }
	      case 1:
                  {
                     fr1=fr1+1;
                     break;
                  }
	       case 2:
                  {
                     fr2=fr2+1;
                     break;
                  }
	       case 3:
                  {
                     fr3=fr3+1;
                     break;
                  }
	       case 4:
                  {
                     fr4=fr4+1;
                     break;
                  }
	       case 5:
                  {
                     fr5=fr5+1;
                     break;
                  }
	       case 6:
                  {
                     fr6=fr6+1;
                     break;
                  }  
	       case 7:
                  {
                     fr7=fr7+1;
                     break;
                  }
	       case 8:
                  {
                     fr8=fr8+1;
                     break;
                  }
	       case 9:
                  {
                     fr9=fr9+1;
                     break;
                  }
	       case 10:
                  {
                     fr10=fr10+1;
                     break;
                  }
               default:
                  {
                     break;
                  }
            } 
      
      }

   printf("\n");
   
   printf("Suxnothta emfanishs tou vatmou 0 : %d/%d\n", fr0,size );   
   printf("Suxnothta emfanishs tou vatmou 1 : %d/%d\n", fr1,size );
   printf("Suxnothta emfanishs tou vatmou 2 : %d/%d\n", fr2,size );
   printf("Suxnothta emfanishs tou vatmou 3 : %d/%d\n", fr3,size );
   printf("Suxnothta emfanishs tou vatmou 4 : %d/%d\n", fr4,size );
   printf("Suxnothta emfanishs tou vatmou 5 : %d/%d\n", fr5,size );
   printf("Suxnothta emfanishs tou vatmou 6 : %d/%d\n", fr6,size );
   printf("Suxnothta emfanishs tou vatmou 7 : %d/%d\n", fr7,size );
   printf("Suxnothta emfanishs tou vatmou 8 : %d/%d\n", fr8,size );
   printf("Suxnothta emfanishs tou vatmou 9 : %d/%d\n", fr9,size );
   printf("Suxnothta emfanishs tou vatmou 10 : %d/%d\n", fr10,size );

   printf("\n");

   if(fr0>=fr1 && fr0>=fr2 && fr0>=fr3 && fr0>=fr4 && fr0>=fr5 && fr0>=fr6 && fr0>=fr7 && fr0>=fr8 && fr0>=fr9 && fr0>=fr10)
      {
         printf("Vathmos pou emfanisthke tis perissoteres fores : 0\n");
         printf("Fores pou emfanisthke : %d\n",fr0);
         printf("\n");
      }
   if(fr1>=fr2 && fr1>=fr3 && fr1>=fr4 && fr1>=fr5 && fr1>=fr6 && fr1>=fr7 && fr1>=fr8 && fr1>=fr9 && fr0>=fr10 && fr1>=fr0)
      {
         printf("Vathmos pou emfanisthke tis perissoteres fores : 1\n");
         printf("Fores pou emfanisthke : %d\n",fr1);
         printf("\n");
      }
   if(fr2>=fr1 && fr2>=fr3 && fr2>=fr4 && fr2>=fr5 && fr2>=fr6 && fr2>=fr7 && fr2>=fr8 && fr2>=fr9 && fr2>=fr10 && fr2>=fr0)
      {
         printf("Vathmos pou emfanisthke tis perissoteres fores : 2\n");
         printf("Fores pou emfanisthke : %d\n",fr2);
         printf("\n");
      }
   if(fr3>=fr1 && fr3>=fr2 && fr3>=fr4 && fr3>=fr5 && fr3>=fr6 && fr3>=fr7 && fr3>=fr8 && fr3>=fr9 && fr3>=fr10 && fr3>=fr0)
      {
         printf("Vathmos pou emfanisthke tis perissoteres fores : 3\n");
         printf("Fores pou emfanisthke : %d\n",fr3);
         printf("\n");
      }
   if(fr4>=fr1 && fr4>=fr2 && fr4>=fr3 && fr4>=fr5 && fr4>=fr6 && fr4>=fr7 && fr4>=fr8 && fr4>=fr9 && fr4>=fr10 && fr4>=fr0)
      {
         printf("Vathmos pou emfanisthke tis perissoteres fores : 4\n");
         printf("Fores pou emfanisthke : %d\n",fr4);
         printf("\n");
      }
   if(fr5>=fr1 && fr5>=fr2 && fr5>=fr3 && fr5>=fr4 && fr5>=fr6 && fr5>=fr7 && fr5>=fr8 && fr5>=fr9 && fr5>=fr10 && fr5>=fr0)
      {
         printf("Vathmos pou emfanisthke tis perissoteres fores : 5\n");
         printf("Fores pou emfanisthke : %d\n",fr5);
         printf("\n");
      }
   if(fr6>=fr1 && fr6>=fr2 && fr6>=fr3 && fr6>=fr4 && fr6>=fr5 && fr6>=fr7 && fr6>=fr8 && fr6>=fr9 && fr6>=fr10 && fr6>=fr0)
      {
         printf("Vathmos pou emfanisthke tis perissoteres fores : 6\n");
         printf("Fores pou emfanisthke : %d\n",fr6);
         printf("\n");
      }
   if(fr7>=fr1 && fr7>=fr2 && fr7>=fr3 && fr7>=fr4 && fr7>=fr5 && fr7>=fr6 && fr7>=fr8 && fr7>=fr9 && fr7>=fr10 && fr7>=fr0)
      {
         printf("Vathmos pou emfanisthke tis perissoteres fores : 7\n");
         printf("Fores pou emfanisthke : %d\n",fr7);
         printf("\n");
      }
   if(fr8>=fr1 && fr8>=fr2 && fr8>=fr3 && fr8>=fr4 && fr8>=fr5 && fr8>=fr6 && fr8>=fr7 && fr8>=fr9 && fr8>=fr10 && fr8>=fr0)
      {
         printf("Vathmos pou emfanisthke tis perissoteres fores : 8\n");
         printf("Fores pou emfanisthke : %d\n",fr8);
         printf("\n");
      }
   if(fr9>=fr1 && fr9>=fr2 && fr9>=fr3 && fr9>=fr4 && fr9>=fr5 && fr9>=fr6 && fr9>=fr7 && fr9>=fr8 && fr9>=fr10 && fr9>=fr0)
      {
         printf("Vathmos pou emfanisthke tis perissoteres fores : 9\n");
         printf("Fores pou emfanisthke : %d\n",fr9);
         printf("\n");
      }
   if(fr10>=fr1 && fr10>=fr2 && fr10>=fr3 && fr10>=fr4 && fr10>=fr5 && fr10>=fr6 && fr10>=fr7 && fr10>=fr8 && fr10>=fr9 && fr10>=fr0)
      {
         printf("Vathmos pou emfanisthke tis perissoteres fores : 10\n");
         printf("Fores pou emfanisthke : %d\n",fr10);
         printf("\n");
      }

   printf("\n");

   return 0;
}

