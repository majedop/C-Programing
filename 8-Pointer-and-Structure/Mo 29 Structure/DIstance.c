#include <stdio.h>
#include<math.h>
struct Point
{
  int x;
  int y;
};
double distence(struct Point p1, struct Point q2)
{
  return sqrt(pow(p1.x-q2.x,2)+pow(p1.y-q2.y,2));
}

int main()
{
  struct Point p1,p2;
  scanf("%d %d",&p1.x,&p1.y);
  scanf("%d %d",&p2.x,&p2.y);

  printf("%lf",distence(p1,p2));

  
}