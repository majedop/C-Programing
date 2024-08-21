#include <stdio.h>
struct Persion
{
  int roll;
  char naem[20];
  float weight;
};

int main()
{
  struct Persion p1= {584431, "Kazi Majedul Islam", 5.6};
  struct Persion* ad;
  ad= &p1;
  printf("Roll= %d\nName= %s\nWeight= %f",ad->roll,ad->naem,ad->weight);

}