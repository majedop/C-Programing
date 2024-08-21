#include <stdio.h>
int main()
{
  char a[10];
		char ch = 'a';
		for(int i = 0; i<8;i++)
		{
			a[i] = ch+8-i;
		}
		a[8] = '\0';
    for(int i=0; i<8; i++)
    printf("%c",a[i]);

    // a[0]=97+8-0 == 105  ASCII value= i
    // a[1]=97+8-1 == 104  ASCII Value= h
    //jehetu a holo char array tai ei vabe output asbe == ihgfedcb 

  return 0;
}