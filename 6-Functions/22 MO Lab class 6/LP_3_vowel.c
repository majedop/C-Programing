#include <stdio.h>
int get_vowel(char ch)
{
  if(ch>='A' && ch<='Z')
    ch+=32;
  
  if(ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u')
  return 1;
  else
  return 0;
}
int main()
{
  char s=getchar();
  getchar();
  if(get_vowel(s)==1)
  printf("Vowel");
  else
  printf("Consonant");
}