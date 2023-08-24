#include <stdio.h>
int main()
{
  int yearly_fee, total_months;
  yearly_fee=36000, total_months=12;
  printf("The total fee for 2 years is %d\n", yearly_fee*2);
  printf("The monthly fee was %d", yearly_fee/total_months);
  return 0;
}