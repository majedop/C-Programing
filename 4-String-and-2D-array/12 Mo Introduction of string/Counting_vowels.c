#include <stdio.h>
int main()
{
  char data[1000];
  fgets(data, sizeof(data),stdin);

  int i=0;
  while (data[i]!=NULL)
  {

    if(data[i]=='a')
    printf("vowel of: %c \n ",data[i]);
    else if (data[i]=='e')
     printf("vowel of: %c \n",data[i]);
    else if(data[i]=='i')
      printf("vowel of: %c \n",data[i]);
    else if (data[i]=='o')
     printf("vowel of: %c \n",data[i]);
    else if (data[i]=='u')
    printf("vowel of: %c \n",data[i]);
   i++;
  }
  

  return 0;
}