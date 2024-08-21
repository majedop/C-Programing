#include <stdio.h>  
int main()  
{  
  /*ICC Men's T20 World Cup Final of 2022 has ended. 
  The full form of ICC is International Cricket Council. 
  Now print it in reverse order. Can you print it??*/
  
    char str1[30] = "International Cricket Council"; 
    char str2[30];

    int i=0, len=0,j;
while (str1[i]!='\0')
{
  i++;
  len++;
}
for(j=0, i=len-1; i>=0; i--, j++)
{
  str2[j]=str1[i];
}
str2[j]='\0';

    printf("%s",str2);

    return 0;  
}  