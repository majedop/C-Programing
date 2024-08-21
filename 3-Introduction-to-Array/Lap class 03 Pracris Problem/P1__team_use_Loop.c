#include <stdio.h>
int main()
{
  //Team problem in codeforece
int n;
int a,b,c;
scanf("%d",&n);

int i, solved=0;
for ( i = 0; i < n; i++)
{
  scanf("%d %d %d",&a,&b,&c);
  if (a+b+c>=2)
  {
    solved++;
  }

}
printf("%d",solved);  

return 0;
}