#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);

int ara[n];
  int i,j,larg;
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&ara[i]);
  }

 larg= ara[0];
  for ( i = 0; i < n; i++)
  {
    if (ara[i]>larg)
    {
      larg=ara[i];
    }
  }
  
int ar_size[larg+1];

for ( i = 0; i <=larg; i++)
{
  ar_size[i]=0;
}
for ( i = 0; i <=larg; i++)
{
  ar_size[ara[i]]+=1;
}
printf("%d",ar_size[larg]);




  


  return 0; 
}