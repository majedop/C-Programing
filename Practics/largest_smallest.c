 #include <stdio.h>
 int main()
 {

  int a, b, c, d;

printf("Enter 4 intgeres to find largest and smallest: ");
scanf("%d %d %d %d", &a, &b, &c, &d);

if (a > b && a > c && a > d)
    printf("Largest: %d\n", a);
if (b > a && b > c && b > d)
    printf("Largest: %d\n", b);
if (c > a && c > b && c > d)
    printf("Largest: %d\n", c);
if (d > a && d > b && d > c)
    printf("Largest: %d\n", d);

if (a < b && a < c && a < d)
    printf("Smallest: %d\n", a);
if (b < a && b < c && b < d)
    printf("Smallest: %d\n", b);
if (c < a && c < b && c < d)
    printf("Smallest: %d\n", c);
if (d < a && d < b && d < c)
    printf("Smallest: %d\n", d);

return 0;

 }
