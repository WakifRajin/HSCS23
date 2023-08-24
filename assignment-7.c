#include <stdio.h>
int main()
{
  double usd, bdt;
  scanf("%lf", &usd);
  bdt = 110.95*usd;
  printf("%lf tk", bdt);
  return 0;
}