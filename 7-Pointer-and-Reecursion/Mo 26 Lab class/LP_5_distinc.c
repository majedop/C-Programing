#include <stdio.h>
int leep_year(int y)
{
 if(y%400==0 || (y%4==0 && y%100!=0))
 return 1;
 else
 return 0;
}

int digit_distinc(int year)
{
  int freq[10];
  for (int i = 0; i <10; i++)
  freq[i]=0;

  while (year>0)
  {
    freq[year%10]++;
    year/=10;
  }
  for (int i = 0; i < 10; i++)
  {
    if(freq[i]>1)
    return 0;
  }
  return 1;
}
int main()
{
  int year;
  scanf("%d",&year);
  if(leep_year(year)==1 && digit_distinc(year)==1)
  printf("Beautifull");
  else
  printf("Not");

  
  
  

}