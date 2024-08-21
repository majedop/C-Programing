#include <stdio.h>
int get_len(char ch[])
{
  int len_counter=0;
  for (int i = 0; ch[i] !=NULL ; i++)
  {
   len_counter++;
  }
  return len_counter;
}
int main()
{
  char ch[]="Majedul";
  int len=get_len(ch);

  printf("len = %d",len);


}