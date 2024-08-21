#include <stdio.h>
//  It is called an indefinite loop. 
//The increment(++) and decrement operators(--) are not initialize

int main()
{
  int i=0;
while(i<10)
{
	printf("I am inside the loop");
  i++; // Error fixed 
}
return 0;
}