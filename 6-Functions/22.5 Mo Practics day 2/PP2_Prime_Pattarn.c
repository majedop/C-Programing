#include <stdio.h>
int prime(int num) 
{
   int i, flag;
   for (i = 2; i < num; i++) 
   {
      if (num % i != 0)
         flag = 1;
      else 
      {
         flag = 0;
         break;
      }
   }

   if (flag == 1 || num == 2)
      return (1);
   else
      return (0);
}

int main() 
{
   int i, j;
   int num = 2;

   for (i = 0; i < 5; i++) 
   {
      printf("\n");
      for (j = 0; j <= i; j++) 
      {
         while (!prime(num)) 
         {
            num++;
         }
         printf("%d  ", num++);
      }
   }
   return (0);
}
