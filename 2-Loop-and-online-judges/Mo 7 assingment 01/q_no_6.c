#include <stdio.h>

int main()
{
  int a, b;
  printf("Enter the first number: ");
  scanf("%d", &a);

  printf("Enter the second number: ");
  scanf("%d", &b);

 if(a%b==0)
  {
    printf("\nThe first number is divisible by the second number.\n");
  }
  else if(b%a==0)
  {
    printf("\nThe second numebr is divisible by the first number.\n");
  }
else 
{
  printf("\nNone of them are divisible by the other.\n");
}

}