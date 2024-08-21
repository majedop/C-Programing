#include <stdio.h>
int main()
{
  //string
  char name[25]= {"Kazi Majedal Islam"};

  name[10]='U';
  name[13]='i';
  printf("My name is : %c",name[13]);
  return 0;
}