#include <stdio.h>
#include <string.h>
int main()
{
 char str[100];
    scanf("%s",&str);
   int len=strlen(str);

    // LargestElement+1 size er akta array niya setake 0 diya fill korte hbe.
   int i,largest=26;
   int freq[largest+1];
   for ( i = 0; i <=largest; i++)
    freq[i]=0;
   
   for ( i = 0; i < len; i++)
   {
    freq[(str[i]-'a')+1]+=1;
   }

   int total=0;
   for ( i = 1; i <=26; i++)
   {
    if (freq[i]>=1)
      total++;
   }
   
    int next=0;
   while (next!=total)
   {
    int max=-1, index=-1;
    char ch;
    for ( i = 1; i <=26; i++)
    {
      if(freq[i]>max)
      {
        max=freq[i];
        ch=i+96;
        index=i;
      }
    }
    for ( i = 1; i <=max; i++)
    {
      printf("%c",ch);
    }
    freq[index]=0;
    next++;
   }
   
 
  return 0;
}