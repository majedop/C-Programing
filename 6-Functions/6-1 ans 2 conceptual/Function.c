#include <stdio.h>
int add_two_number(int num1, int num2)
{
  int sum=num1+num2;
  return sum;
}
void print_type_variable(int num)
{
  printf("%d\n", num);
}
int main()
{
  int a=50,b=100;
  int ans=add_two_number(a,b);
  print_type_variable(ans);

  int summ= add_two_number(200,300);
  print_type_variable(summ);

  int sum3=add_two_number(202, 522);
  print_type_variable(sum3);

}