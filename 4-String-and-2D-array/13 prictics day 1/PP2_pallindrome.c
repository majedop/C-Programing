 #include <stdio.h>
 #include <string.h>
 int main()
 {
  //Palindromeu
  char s1[100];
  char s2[100];
  scanf("%s",s1);
  int len=strlen(s1);
  int i,j=0,flag=1;
  
  for(i=len-1; i>=0; i--)
  {
    s2[j]=s1[i];
   j++;
  }
  for ( i = 0; i < len; i++)
  {
    if (s1[i]!=s2[i])
      flag=0;
  }

  if (flag==1)
  printf("YES");
  else
  printf("NO");
  
  return 0;
 }