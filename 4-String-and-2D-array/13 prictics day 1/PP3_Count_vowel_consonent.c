
#include <stdio.h>
#include <string.h>
int main()
{
  //vowels and consonent count
  char ch[100];
  scanf("%s",ch);
  int len=strlen(ch);
  int i,vowel=0, consonent =0;
  
  for ( i = 0; i <len; i++)
  {
  if(ch[i]>='a' && ch[i]<='z')
 {
   if (ch[i]=='a')
      vowel++;
  else if (ch[i]=='e')
      vowel++;
  else if(ch[i]=='i')
      vowel++;
  else if(ch[i]=='o')
      vowel++;
  else if(ch[i]=='u')
      vowel++;
  else 
  consonent++;
 }
}
printf("Vowel= %d\n",vowel);
printf("Consonent= %d\n",consonent);
  

return 0;
}