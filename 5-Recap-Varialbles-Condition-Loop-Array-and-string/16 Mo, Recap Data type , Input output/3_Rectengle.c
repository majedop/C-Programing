#include <stdio.h>
int main()
{
  int width, height;
  scanf("%d %d",&width,&height);
  float area;
  area= 2*(width+height);
  printf("Perimeter of the Rectangle is :%f",area);
  return 0;
}