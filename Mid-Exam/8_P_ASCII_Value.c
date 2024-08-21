#include <stdio.h>
int main()
{
  /*ASCII (American Standard Code for Information Interchange) is the most common character encoding 
  format for text data in computers and on the internet. In standard ASCII-encoded data, 
  there are unique values for 128 alphabetic, numeric or special additional characters
   and control codes.*/
   char ch[5];
   printf("Enter any character: ");
   scanf("%c",ch);
   for (int i = 0; i<1; i++)
   {
    printf("ASCII value is: %d",ch[i]);
   }

  return 0;
}