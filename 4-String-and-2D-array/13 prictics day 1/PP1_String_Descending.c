#include <stdio.h>
#include <string.h>
int main()
{
  char data[50];
  scanf("%s",data);
  int len=strlen(data);
  int i,larg=26;
  int freq[larg+1];

  for ( i = 0; i <=26; i++)
   freq[i]=0;
  for ( i = 0; i <len; i++)
    freq[(data[i]-'a')+1]+=1;

  int count=0;
  for ( i = 1; i <=26; i++)
  {
    if(freq[i]>=1)
    count++;
  }
  
  int next=0;
  while(next!=count)
  {
     int  max=-1, index=-1;
      char ch;
  for ( i = 1; i <=26; i++)
  {
    if (freq[i]>max)
    {
      max=freq[i];
      ch=i+96;
      index=i;
    }
  }
  freq[index]=0;
    next++; 
    for ( i = 0; i < max; i++)
    {
      printf("%c",ch);
    }
    
  }
 
  
  


  
  
  return 0;
}