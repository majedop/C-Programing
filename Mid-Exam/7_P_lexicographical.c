#include <stdio.h>
int main()
{
  /* A lexicographic order is an arrangement of characters, words, 
  or numbers in alphabetical order, that is, the letters are sorted from A-Z. 
  This is also known as dictionary order because it is similar to searching for a 
  particular word in an actual dictionary.*/
  
  char s1[]="abcdefg";
  char s2[]="abcdefh";
  int i,flag=1;
  for ( i = 0; s1[i]!=NULL; i++)
  {
    if(s1[i]>s2[i])
  {
    flag=0;
    break;
  }
  }
  if(flag==1)
  printf("Yes,Two string are lexicographical.");
  else
  printf("No, Two string are not lexicographical.");

  return 0;
}