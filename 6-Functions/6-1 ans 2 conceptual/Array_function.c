#include <stdio.h>
void input_array(int array[], int size){
  for (int i = 0; i <size; i++)
  {
    scanf("%d",&array[i]);
  }
}

int max(int array[], int size)
{
  int maxx=array[0];
  for (int i = 0; i < size; i++)
  {
    if(array[i]>maxx)
    maxx=array[i];
  }
  return maxx;
}
void solve()
{
  int size;
  scanf("%d",&size);
  int array[size];
  input_array(array,size);
  printf("%d",max(array, size));
}
int main()
{
  solve();

}
