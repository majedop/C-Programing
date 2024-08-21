#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int choc = n;
  int peck=n;
  
  while(peck>=4)
  {
    choc +=peck/4;
    peck=(peck/4)+(peck%4);
  }
  printf("%d",choc);
  
}