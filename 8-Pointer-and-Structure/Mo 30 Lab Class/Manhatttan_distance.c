#include <stdio.h>
#include <math.h>
struct point
{
  int x;
  int y;
};
int  man(struct point p, struct point q)
{
  return abs(p.x-q.x)+abs(p.y-q.y);
}
int main()
{
  struct point p1,p2;
   scanf("%d %d",&p1.x,&p1.y);
  scanf("%d %d",&p2.x,&p2.y);
  
  int ans = man(p1,p2);
  printf("Manhattan Distence= %d",ans);

}