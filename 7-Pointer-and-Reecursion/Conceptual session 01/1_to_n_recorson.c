#include <stdio.h>
int num=1;
void print_1_to_n(int n)
{
 
  if(num>n)
  {
    return;
  }
  
  printf("%d ",num);
  num++;
  print_1_to_n(n);

}
int main()
{
  int n;
  scanf("%d",&n);
  print_1_to_n(n);
}