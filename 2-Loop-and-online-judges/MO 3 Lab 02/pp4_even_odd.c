#include <stdio.h>
int main()
{
  int n,k,i;
  scanf("%d %d",&n,&k);

int w;
for(i=1; i<=n; i++)
{
if(i%2==1)
{
  if(k<=51)
  {
    w=2*k-1;
  }
  else
  {
    w=2*k;
  }
}
printf("%d ",w);

}


}