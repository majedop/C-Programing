#include <stdio.h>
#include <string.h>
int main()
{
  //AAAACACBA
  char data[1000000];
  scanf("%s",data);
  int i,freq[27];
  int len=strlen(data);
  for ( i = 0; i <27; i++)
    freq[i]=0;
  for ( i = 0; i <len ; i++)
    freq[(data[i]-'A')+1]++;
  
  // Odd ber korlam
  int oddValue=-1,odd=0,totalcharcount=0;
  char oddChar;
  for ( i = 1; i < 27; i++)
  {
    if(freq[i]>=1)
      totalcharcount++;

   if(freq[i]%2!=0)
   {
    oddValue=freq[i];
    oddChar=(i+'A')-1;
    freq[i]=0;
    odd++;
   }
  }
  if(odd>1)
  {
    printf("NO SOLUTION");
    return 0;
  }
  int remeinder=len;
  if(oddValue!=-1)
  {
    totalcharcount-=1;
    remeinder-=oddValue;
  }
  
  int m=0, l=0, r=(remeinder/2)-1;
  char first[(remeinder/2)+1], last[(remeinder/2)+1];
 last[r]=NULL;
  while (m!=totalcharcount)
  { 
    int evenValue=-1;
    char evenchar;
    for (int i = 0; i < 27; i++)
    {
      if(freq[i]>1)
      {
        evenValue=freq[i];
        evenchar=(i+'A')-1;
        freq[i]=0;
        break;
      }
    }
    int ii=0,jj=0;
    while (ii!=(evenValue/2))
    {
      first[l]=evenchar;
      l++;
      ii++;
    }
    while (jj!=(evenValue/2))
    {
      last[r]=evenchar;
      r--;
      jj++;
    }
   m++;
  }
  last[l]=NULL;
 
  for ( i = 0; i < (remeinder/2); i++)
    printf("%c",first[i]);

  for ( i = 0; i < oddValue; i++)
    printf("%c",oddChar);

  for ( i = 0; i < (remeinder/2); i++)
    printf("%c",last[i]);
  
  
  
  
  
  

  return 0;
}