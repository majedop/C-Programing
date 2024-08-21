#include <stdio.h>
int main()
{
char data[100];
fgets(data,sizeof(data), stdin);

int i=0;
while (data[i]!=NULL)
{
  if(data[i]>='a' && data[i]<='z')
  data[i]-=32;
  i++;
}
printf("%s",data);
  return 0;
}